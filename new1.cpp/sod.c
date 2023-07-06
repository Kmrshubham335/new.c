#include<stdio.h>
int main(){
    int s=0,a=0,b=1,i,n,sum=0;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf(s,b);
    for(i=2;i<n;i++)
    {
        sum=s+a;
        printf("%d:",sum);
        s=a;
        a=s;

    
    }
    return 0;
}