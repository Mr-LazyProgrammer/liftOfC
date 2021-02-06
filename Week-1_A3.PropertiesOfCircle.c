#include <stdio.h>
#include <math.h>
#define PI 3.142857

int main()
{
    float rad,dia,area,circum;
    printf("Enter the radius of the Circle: \n");
    scanf("%f",&rad);
    
    dia = 2*rad;
    circum = PI*2*rad;
    area = PI*rad*rad;
    printf("The diameter of the circle : %f \n", dia);
    printf("The Circumference of the circle : %f \n", circum);
    printf("The Area of the circle : %f \n", area);
}
