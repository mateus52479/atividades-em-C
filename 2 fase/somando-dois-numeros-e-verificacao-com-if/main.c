
#include <stdio.h>

int main()
{
    float soma, n1, n2;
    
    printf("digite o primeiro numero: ");
    scanf("%f",&n1);
    printf("digite o segundo numero: ");
    scanf("%f",&n2);    
    
    soma = n1 + n2;
    
if  (soma > 10){
    printf("\nsoma maior que dez sendo ela: %.2f",soma);
}else{
    printf("\nsoma menor ou igual a dez sendo ela: %.2f",soma);
}
    return 0;
}
