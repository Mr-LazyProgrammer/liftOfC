#include <stdio.h>

int main(void) {
	// your code goes here
	int n,digits=0,sum =0;
	scanf("%d",&n);
	
	while ( n > 0){
	    sum = sum + n%10;
	    n = n/10;
	    digits+=1;
	}
	printf("%d",sum);
	return 0;
}

