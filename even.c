#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is even number",a);
    }
    else{
        printf("%d is not a even number",a);
    }
    return 0;
}