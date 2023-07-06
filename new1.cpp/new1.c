#include<stdio.h>
int main(){
    int arr[20],mid,beg,end,i,item,n;
    printf("Enter the number of element in array");
    scanf("%d",&n);
    scanf("enter %d element in the array",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the search item");
    scanf("%d",&item);
    beg=0;
    end=n-1; 
    mid= (beg+end)/2;
    while (beg<=end)
    {
        if(item>arr[mid])
        beg=mid+1;
        else if (arr[mid]==item){
            printf("%d found at location %d",item,mid+1);break;
        } 
        else
        end =mid-1;
         mid=(beg+end)/2;
    }
        if(beg>end)
        printf("%d item  not found at index %d ",item,mid);
        return 0;
    }