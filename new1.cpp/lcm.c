#include<stdio.h>
int main(){
    int n1,n2,gcd,i,lcm;
    printf("enter the two number\n");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<n1 && i<n2;i++){
        if(n1%i==0 && n1%i==0)
        gcd=i;
    }
    lcm = (n1*n2)/gcd;
    printf("Gcd of %d and %d is:=%d",n1,n2,gcd);
    return 0;
}