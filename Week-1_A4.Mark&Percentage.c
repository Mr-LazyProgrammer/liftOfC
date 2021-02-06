#include <stdio.h>
#include <math.h>
#define PI 3.142857

int main()
{
    float phy,bee,em,efbc,maths,total,sum,percent;
    total = 500;
    printf("Enter the marks of the subjects ----: \n");
    printf("Physics :\n");
    scanf("%f",&phy);
    printf("BEE :\n");
    scanf("%f",&bee);
    printf("EM :\n");
    scanf("%f",&em);
    printf("EBFC :\n");
    scanf("%f",&efbc);
    printf("Maths :\n");
    scanf("%f",&maths);
    
    sum = phy + bee + em + efbc + maths ;
    percent = (sum/total)*100;
    
    if( percent >= 90){
        printf("Grade A");
    } else if( percent >= 80){
        printf("Grade B");
    } else if( percent >= 70){
        printf("Grade C");
    } else if( percent >= 60){
        printf("Grade D");
    } else if( percent >= 50){
        printf("Grade E");
    } else if( percent >= 40){
        printf("Grade F");
    }
}
