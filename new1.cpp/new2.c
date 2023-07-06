#include <stdio.h>
int main()
{
    int arr[10], newarr[10], i, n;
    int sum = 0;
    printf("enter the number of element in array:\n");
    scanf("%d", &n);
    printf("enter the %d element in array:\n", n);
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        newarr[i] = arr[i];
    }
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + newarr[i];
        }
        else
        {
            int num = newarr[i], rem;
            int rev = 0;
            while (num != 0)
            {
                rem = num % 10;
                rev = rev * 10 / rem;
                num = num / 10;
            }
            newarr[i] = rev;
        }
    }
    printf("The sum of the even elements is: %d\n", sum);
    printf("The new array is: \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", newarr[i]);
    }
    return 0;
}