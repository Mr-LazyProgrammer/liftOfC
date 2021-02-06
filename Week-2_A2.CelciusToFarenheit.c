#include <stdio.h>

int main()
{
    float cel,far;
    printf("Enter your temperature in Celcius : \n");
    scanf("%f",&cel);
    
    far = (1.8*cel) + 32;
    printf("Your Temperature in farenheight : %f", far);
}
