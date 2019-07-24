#include<stdio.h>
main ()
{
    int array[10];
    int n,i,sum=0;
    float avg;
    printf("Enter number of elements in array:\n");
   scanf("%d",&n);
   for (i = 0; i < n; i++)
    {
        scanf("%d" ,&array[i]);
        sum += array[i];
    }
    avg = (float) sum/n;
 printf("The sum is :%d\n",sum);
 printf("The avg is :%f\n",avg);
}
