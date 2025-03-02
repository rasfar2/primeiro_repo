#include<stdio.h>
#include<string.h>


int main()
{
    char str[4],a,b,c,d;
   
    int x;

    printf("escreva um numero \n ");
    //scanf("%s", &str);
    scanf("%i", &x);

    sprintf(str,"%04i",x);
   
    d=str[3];    
    c=str[2];   
    b=str[1];
    a=str[0];
   
    printf("%c \n",a);
    printf("%c \n",b);
    printf("%c \n",c);
    printf("%c \n",d);
    
  //  if (a=='0'){printf(" ");};
    if (a=='1'){printf("M");}
    //{D = 'III';}
    if (a=='2'){printf("MM");}
    //{D = 'IV';}
    if (a=='3'){printf("MMM");}
    //{D = 'III';}    


    if (b== '1'){printf("C");}
    //{B = 'III';}
    if (b=='2'){printf("CC");}
    //{B = 'IV';}
    if (b=='3'){printf("CCC");}
    //{B = 'III';}
    if (b=='4'){printf("CD");}
    //{B = 'IV';}
    if (b=='5'){printf("D");}
    //{B = 'V';}
    if (b=='6'){printf("DC");}
    //{B = 'VI5';}
    if (b=='7'){printf("DCC");}
    //{B = 'VII';}
    if (b=='8'){printf("DCCC");}
    //{B = 'VIII';}
    if (b=='9'){printf("CM");}
    //{B = 'IX';}

    if (c=='1'){printf("X");}
    //{C = 'X';}
    if (c=='2'){printf("XX");}
   //{C = 'XX';}
    if (c=='3'){printf("XXX");}
    //{C = 'XXX';}
    if (c=='4'){printf("XL");}
    //{C = 'XD';}
    if (c=='5'){printf("L");}
   //{C = 'D';}
    if (c=='6'){printf("LX");}
   // {C = 'DX';}
    if (c=='7'){printf("LXX");}
   // {C = 'DXX';}
    if (c=='8'){printf("LXXX");}
   // {C = 'DXXX';}
    if (c=='9'){printf("XC");}
   // {C = 'XD';}


    if (d == '1'){printf("I");}
    //{D = 'I';}     
    if (d=='2'){printf("II");}
    //{D = 'K';}        
    if (d=='3'){printf("III");}
    //{D = "III";}
    if (d=='4'){printf("IV");}
    //{D = 'IV';}
    if (d=='5'){printf("V");}
    //{D = 'V';}
    if (d=='6'){printf("VI");}
    //{D = 'VI5';}
    if (d=='7'){printf("VII");}
    //{D = 'VII';}
    if (d=='8'){printf("VIII");}
    //{D = 'VIII';}
    if (d=='9'){printf("IX");}
    //{D = 'IX';}
    
    
   


    //printf("\n%c ",D); 
    //printf("\nola");
    
    

        /*
        for(i=0;i<strlen(str);++i)
        {
            printf("%c ",str[i]);
        }    
        */
       
}