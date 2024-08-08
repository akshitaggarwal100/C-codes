#include <stdio.h>

int countDigits(int n){
	int count = 0;
	int dup = n;
	while (n > 0) {
		int rem = n % 10;
		if (dup % rem == 0) {
			count++;
		}
		n /= 10;
	}
	return count;
}

int main()
{
    printf("%d\n", countDigits(35));
    return 0;
}