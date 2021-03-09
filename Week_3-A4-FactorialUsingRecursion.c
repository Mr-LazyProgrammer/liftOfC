#include <stdio.h>
int fact( int n ){
    if( n >= 1)
        return n * fact(n - 1);
    else 
        return 1;
}

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	printf("%d", fact(n));
	
	return 0;
}

