#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a structure to represent a weighted edge in graph
struct Edge {
    int src, dest, weight;
};

// a structure to represent a connected, undirected and weighted graph
struct Graph {
    int V, E;
    struct Edge* edge;
};

// Creates a graph with V vertices and E edges
struct Graph* createGraph(int V, int E) {
    struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
    graph->V = V;
    graph->E = E;
    graph->edge = (struct Edge*) malloc(graph->E * sizeof(struct Edge));
    return graph;
}

// A structure to represent a subset for union-find
struct subset {
    int parent;
    int rank;
};

// A utility function to find set of an element i (uses path compression technique)
int find(struct subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

// A function that does union of two sets of x and y (uses union by rank)
void Union(struct subset subsets[], int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

// Compare two edges according to their weights. Used in qsort() for sorting an array of edges
int myComp(const void* a, const void* b) {
    struct Edge* a1 = (struct Edge*)a;
    struct Edge* b1 = (struct Edge*)b;
    return a1->weight > b1->weight;
}

// The main function to construct MST using Kruskal's algorithm
void KruskalMST(struct Graph* graph) {
    int V = graph->V;
    struct Edge result[V];  // This will store the resultant MST
    int e = 0;  // An index variable, used for result[]
    int i = 0;  // An index variable, used for sorted edges

    // Step 1: Sort all the edges in non-decreasing order of their weight. If we are not allowed to change the
    // given graph, we can create a copy of array of edges
    qsort(graph->edge, graph->E, sizeof(graph->edge[0]), myComp);

    // Allocate memory for creating V subsets
    struct subset* subsets = (struct subset*) malloc(V * sizeof(struct subset));

    // Create V subsets with single elements
    for (int v = 0; v < V; ++v) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    // Number of edges to be taken is equal to V-1
    while (e < V - 1 && i < graph->E) {
        // Step 2: Pick the smallest edge. And increment the index for next iteration
        struct Edge next_edge = graph->edge[i++];

        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);

        // If including this edge does not cause cycle, include it in result and increment the index of result for next edge
        if (x != y) {
            result[e++] = next_edge;
            Union(subsets, x, y);
        }
        // Else discard the next_edge
    }

    // print the contents of result[] to display the built MST
    printf("Following are the edges in the constructed MST\n");
    for (i = 0; i < e; ++i)
        printf("%d -- %d == %d\n", result[i].src, result[i].dest, result[i].weight);
    return;
}

int main() {
    int V = 7;  // Number of vertices in graph
    int E = 11;  // Number of edges in graph
    struct Graph* graph = createGraph(V, E);

    // add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;
    graph->edge[0].weight = 7;

    // add edge 0-3
    graph->edge[1].src = 0;
    graph->edge[1].dest = 3;
    graph->edge[1].weight = 5;

    // add edge 1-3
    graph->edge[2].src = 1;
    graph->edge[2].dest = 3;
    graph->edge[2].weight = 9;

    // add edge 1-4
    graph->edge[3].src = 1;
    graph->edge[3].dest = 4;
    graph->edge[3].weight = 7;

    // add edge 1-2
    graph->edge[4].src = 1;
    graph->edge[4].dest = 2;
    graph->edge[4].weight = 8;

    // add edge 2-4
    graph->edge[5].src = 2;
    graph->edge[5].dest = 4;
    graph->edge[5].weight = 5;

    // add edge 3-4
    graph->edge[6].src = 3;
    graph->edge[6].dest = 4;
    graph->edge[6].weight = 15;

    // add edge 3-5
    graph->edge[7].src = 3;
    graph->edge[7].dest = 5;
    graph->edge[7].weight = 6;

    // add edge 4-5
    graph->edge[8].src = 4;
    graph->edge[8].dest = 5;
    graph->edge[8].weight = 8;

    // add edge 4-6
    graph->edge[9].src = 4;
    graph->edge[9].dest = 6;
    graph->edge[9].weight = 9;

    // add edge 5-6
    graph->edge[10].src = 5;
    graph->edge[10].dest = 6;
    graph->edge[10].weight = 11;

    KruskalMST(graph);

    return 0;
}
