#include<stdio.h>
#include<string.h>

int main()
{
    char str[4],a,b,c,d,D;
    int x, i;

    printf("escreva um numero \n ");
    scanf("%d", &x);

    sprintf(str,"%d",x);
    d=str[3];
    printf("%c ",d);

}