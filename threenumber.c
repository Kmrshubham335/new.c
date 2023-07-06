#include<stdio.h>
int main(){
    double num1,num2,num3;
    printf("enter the three number\n");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3){
        printf("%.2f first number is greater\n" , num1);
    }
    else if(num2 > num1 && num2 > num3){
        printf("%.2f second number is greater\n" , num2);
    }
    else{
        printf("%.2f third number is greater\n" , num3);
    }
    return 0;
}
