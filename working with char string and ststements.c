#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{
    char ch,s[10],sen[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("%c\n%s\n%s",ch,s,sen);   
    return 0;
}
