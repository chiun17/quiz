/* FIXME: Implement! */
#include<stdio.h>
#include<stdlib.h>

int maxSubArray(int A[],int n)
{
    int i,j,maxSub,z;
    maxSub=0;

    for( i=0 ;i<n;i++)
    {
        z=0;
        for(j=i;j<n;j++)
        {
            z=z+A[j];
            if(z>maxSub)
                maxSub=z;
        
        }    
    }
    return maxSub;
    
}


int main()
{
    int array[9] = {-2,1,-3,4,-1,2,1,-5,4};

    printf("%d",maxSubArray(array,9));
    return 0;
}
