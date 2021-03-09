#include <stdio.h>

int operation( int a, int b){
    int di,re,de,gcd,lcm;
    
    // di -- divisor
    // de -- dividend
    // re -- remainder
    // gcd -- Greatest Common Divisor
    // lcm -- Least Common Multiple
    
    
    if( a > b ){
        di = a/b;
        re = a%b;
    } else {
        di = b/a;
        re = b%a;
    }
    
    re = de/di;
    
    while( re != 0 ){
        de = di;
        di = re;
        re = de/di;
    }
    
    gcd = di;
    lcm = a*b/gcd;
    
    printf("The GCD is : %d \n",gcd);
    printf("The LCM is : %d",lcm);
}


int main(void) {
	// your code goes here
	int x,y;
	scanf("%d %d",&x,&y);
	
	operation(x,y);
	
	return 0;
}

