#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    char num[1000];
    int p;
    scanf("%s",num);
    int pu=strlen(num);
    for(p=0;p<pu;p++)
    {
        switch(num[p])
        {
            case '0':
            {
                a++;
                break;
            }
            case '1':
            {
                b++;
                break;
            }
            case '2':
            {
                c++;
                break;
            }
            case '3':
            {
                d++;
                break;
            }
            case '4':
            {
                e++;
                break;
            }
            case '5':
            {
                f++;
                break;
            }
            case '6':
            {
                g++;
                break;
            }
            case '7':
            {
                h++;
                break;
            }
            case '8':
            {
                i++;
                break;
            }
            case '9':
            {
                j++;
                break;
            }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    printf("%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,j); 
    return 0;
    
}
