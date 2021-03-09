#include <stdio.h>
#include <math.h>

int square(int a){
    return a*a;
}

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	
	int ans = square(n);
	
	printf("%d",ans);
	
	return 0;
}

