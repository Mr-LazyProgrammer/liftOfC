#include <stdio.h>
#include <string.h>


int main(void) {
	// your code goes here
    char str[] = "This is a sample string";
    char * pch;
    int words = 0;
    pch=strchr(str,' ');
    
    while (pch!=NULL)
    {
      words ++;
      pch=strchr(pch+1,' ');
    }
	printf("%d",words);
}

