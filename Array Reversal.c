//https://www.hackerrank.com/challenges/reverse-array-c/problem?isFullScreen=true&h_r=next-challenge&h_v=zen

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[i]=arr[n-i-1];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
