#include<stdio.h>
int main()
{ int a[10] , even[10], odd[10],i, m=0,n=0, sum=0, sum2=0, sum3=0;
 float avg, avg_even, avg_odd;

printf("Enter elements of an array");
for(i =0; i<5;i++)
scanf("%d", &a[i]);

// transfer the elements into even or odd
for(i=0;i<5;i++)
{  if(a[i]%2==0)// even elemment
  {
   even[m] = a[i];
   m++;
  }
  else
  {
   odd[n] = a[i];
   n++;
  }
}
//average of original array
for(i=0;i<5;i++)
{sum = sum + a[i];
  avg = (float)sum/5;
}  

//average of even array
for(i=0;i<m;i++)
{sum2 = sum2 + even[i];
  avg_even = (float)sum2/m;
} 

//average of odd array
for(i=0;i<n;i++)
 {sum3 = sum3 + odd[i];
  avg_odd = (float)sum3/n;
 } 

printf("\nthe elements of even array are : ");
for(i=0; i<m; i++)
{printf("%d ", even[i]);}
printf("\n\nthe elements of odd array are : ");
for(i=0; i<n; i++)
{printf("%d ", odd[i]);
}
printf("\n\nSum of All numbers are : %d " , sum );
printf("\n\nAverage of all numbers is : %f " , avg );
printf("\n\nSum of Even numbers are : %d " , sum2 );
printf("\n\nSum of Odd number is : %d " , sum3 );
printf("\n\nAverage of Odd number is : %f \n" , avg_odd );
printf("\nAverage of Even numbers are : %f \n" , avg_even );

//display which array avg is greater than the original array
if(avg_even > avg)
printf("\nEVEN AVERAGE IS GREATER THAN THE ORIGINAL AVERAGE");
if(avg_odd > avg)
printf("ODD AVERAGE IS GREATER THAN THE ORIGINAL AVERAGE");

}