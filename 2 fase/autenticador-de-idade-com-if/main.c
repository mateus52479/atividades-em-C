
#include <stdio.h>

int main()
{
    
    int idade;
    
    printf("digite a sua idade: ");
    scanf("%i",&idade);

if (idade >= 18){
    if (idade > 65){
        printf("voce tem idade para ser idoso");
    }else{
        printf("voce tem idade para ser adulto");
    }
}else{
    printf("voce tem idade para ser criança");
}
    return 0;
}
