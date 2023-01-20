//https://www.hackerrank.com/challenges/printing-tokens-/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000];
    scanf("%[^\n]%*c",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i] != ' ')
        {
            printf("%c",s[i]);
        }
        else {
        printf("\n");
        }
    }
    return 0;
}
