#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int s(int n, int a, int b, int c) {
  //Write your code here.
  if (n==1){
    return a;}
    else if(n==2)
    {
        return b;
    }
    else if(n==3)
    {
        return c;
    }
    else 
    {
        a=a+b+c;
        b=a+b+c;
        c=a+b+c;
        return(s(n-3,a,b,c));
    }
}

int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = s(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
