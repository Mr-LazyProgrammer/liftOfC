#include <stdio.h>
int revNum=0,rem;
int reverseNum(int num){
   if(num){
      rem=num%10;
      revNum=revNum*10+rem;
      reverseNum(num/10);
   }
   else
      return revNum;
   return revNum;
}

int main(void) {
	// your code goes here
	int n;
	scanf("%d", &n);
	reverseNum(n);
	if( n == revNum ){
	    printf("This is a Pallindrome Number");
	} else {
	    printf("This is not a pallindrome Number");
	}
	
	return 0;
}

