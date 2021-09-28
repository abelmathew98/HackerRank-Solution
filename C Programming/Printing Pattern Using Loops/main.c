//Author :abematese || abelmathew98
//Question : Printing Pattern Using Loops
//Language : C



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // Initializing and Getting the Input
    int n;
    scanf("%d", &n);

    // Assigning K to the length of the pattern
    int k=2*n-1;
    //Initializing an array/matrix to manipulate on
    int arr[k][k];
    //assigning all the values as 0 to ease the operations
    for(int q=0;q<k;q++)
    {
        for(int w=0;w<k;w++)
        {
            arr[q][w]=0;
        }
    }
    //Assigning the middle value of the matrix as 1 an working my way up from there
    arr[n-1][n-1]=1;
    //l is the value to be copied into the array (as per the pattern)
    int l=2;
    //c , c1 and c2 are for determining the length of each successive layer
    // when n=4 , 1 will be at (3,3)
    //c1 will become 2 and c2 will become 4 and a square of sorts can be seen
    int c=n-1;
    int c1=0;
    int c2=0;
    c1=c-1;
    c2=c+1;
    while((c1>=0))
    {
        for(int p=c1;p<=c2;p++)
        {
            for(int h=c1;h<=c2;h++)
            {
                // making sure that we don't overwrite any values
                if(arr[p][h]==0)
                {
                    arr[p][h]=l;
                }
            }
        }
        l=l+1;
        c1=c1-1;
        c2=c2+1;
    }
    for(int u=0;u<k;u++)
    {
        for(int m=0;m<k;m++)
        {
            printf("%d ",arr[u][m]);
        }
        printf("\n");
    }

    return 0;
}
