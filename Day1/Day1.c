#include"stdio.h"
#include"math.h"
int main()
{
 int arr[10000];
 int n,i,j,temp;
 printf("enter");


 scanf("%d",&n);


for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);

}
for (j=0;j<n;j++)
{
    for (i=0;i<n;i++)
    {
         if(arr[j]>arr[i])
          {
             temp = arr[j];
             arr[j]= arr[i];
             arr[i] =temp;
          }
    }
}
for (i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}

return 0;
}