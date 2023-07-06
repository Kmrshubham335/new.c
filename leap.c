#include<stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%4==0){
        printf("%d is the leap year",year);
    }
    else{
        printf("%d is not  the leap year",year);
    }
    return 0;
}