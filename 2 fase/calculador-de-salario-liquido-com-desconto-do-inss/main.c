
#include <stdio.h>

int main()
{
    
    float salario, liquido;
    
    printf("digite o seu salario: ");
    scanf("%f",&salario);

if (salario <= 2000){
    if (salario <= 1200){
        if (salario <= 600){
            liquido = salario;
            printf("sem desconto, salario liquido = %.2f", liquido);
            return 0;
        }
        liquido = salario - (salario * 0.20);
        printf("20 porcento com desconto, salario liquido =%.2f ", liquido);
        return 0;
    }
    liquido = salario - (salario * 0.25);
    printf("25 porcento com desconto, salario liquido =%.2f ", liquido);
    return 0;
}else{
    liquido = salario - (salario * 0.30);
    printf("30 porcento com desconto, salario liquido =%.2f ", liquido);
}
    return 0;
}