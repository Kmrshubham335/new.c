#include<stdio.h>
int main(){
    int arr[40],beg,end,mid,n,i;
    int item;
    printf("Enter the number of element in array");
    scanf("%d",&n);
    printf("enter %d in array",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the search item");
    scanf("%d",&item);
    beg=0;
    end=n-1;
    mid=(beg+mid)/2;
    while(beg<=end){
        if(item>arr[mid])
        beg=mid+1;
    else if (item==arr[mid])
    {
        printf("search number is found at %d index and item is%d",mid+1,item);
    }    
    else
    end=mid-1;
    mid=(beg+end)/2;
    }
    if(beg>end)
    printf("Search number is not found");
    return 0;
}