#include<stdio.h>
#include <string>


int main()
{

    char str[100];
int a = 255;
int i;

sprintf(str,"%d",a);

for(i=0;i<strlen(str);++i)
 printf("%c ",str[i]);
   /*
    char palav;

    printf("escreva uma palavra");
    scanf("%c", &palavra);

    printf("\n %c",palavra);

    */

    /*
    int vet[4];
    int x, achei = 0, posicao;
    
    cin >> x;

    for (int i=0;i<20;i++)
    {//vamos fazer a iteração 20 vezes.
		if (vet[i] == x)
        {
			achei = 1;
			posicao = i;
		}
    }

    if (achei == 0)
    {
		printf( "Numero nao encontrado" );
	}
	else{
		printf( "Numero encont na posicao " , posicao );
	}
    */
   
    /*
    //int numerus;

    printf("escreva um numero \n ");
    scanf("%d", &numero);
    printf("numero escolhido foi %d", numero);
    printf("\n %d", numero[2]);

    */
}