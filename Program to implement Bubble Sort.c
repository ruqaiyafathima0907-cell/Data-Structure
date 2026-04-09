#include <stdio.h>
#include <stdlib.h>


int main()
{

    int a[5]={25,12,22,64,11};
    int i,j,temp;
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array is :");
    for(i=0;i<5;i++)
        printf("%d""      ",a[i]);
    return 0;
}
