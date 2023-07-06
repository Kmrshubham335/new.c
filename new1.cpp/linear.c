#include<stdio.h>
int main(){
    int arr[20],sn,n,i;
    printf("Enter the number of element in array\n");
    scanf("%d",&n);
    printf("enter %d element in array",n);
    for(i=0;i<=n;i++)
    scanf("%d",arr[i]);
    printf("enter the search number");
    scanf("%d",sn);
    for(i=0;i<n;i++){
        if(arr[i]==sn){
            printf("%d is found at index %d with search time %d",sn,arr[i],arr[i]);
        }
    }

}