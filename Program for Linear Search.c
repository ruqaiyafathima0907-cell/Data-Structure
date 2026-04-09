#include <stdio.h>
#include <stdlib.h>


int main()
{
int a[5]={12,22,32,42,52};
int n=5;
int key,i,found=0;
printf("Enter the element to search :");
scanf("%d",&key);
for(i=0;i<n;i++)
{

    if(a[i]==key)
    {

        printf("Element %d found at position %d ",key,i+1);
        found=1;
        break;
    }
}
if(!found)
    printf("Element not found");
return 0;
}
