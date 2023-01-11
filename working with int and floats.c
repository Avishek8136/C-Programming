#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,i,j;
    float c,d,k,l;
    scanf("%d%d%f%f",&a,&b,&c,&d);
    i=a+b;
    j=a-b;
    k=c+d;
    l=c-d;
    printf("%d %d\n%1.1f %1.1f",i,j,k,l);
    return 0;
}
