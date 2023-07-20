// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int target, i, j, n;
    target = 9;
    printf("Enter number of elements:"); 
    scanf("%d",&n);
    int a[n];
    for(i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n; i++)
    {
        for(j = i; j < n; j++)
        {
            if(a[i] + a[j] == target)
            {
                printf("%d, %d", i, j);
                break;
            }
        }
    }
    
}
