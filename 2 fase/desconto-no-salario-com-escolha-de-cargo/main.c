
#include <stdio.h>

int main()
{
    float salario, liquido;
    int cargo;

    printf("digite o seu salario bruto: ");
    scanf("%f", &salario);
    
    printf("digite o seu cargo: \n 1-auxiliar de escritorio \n 2-secretario \n 3-cozinheiro \n 4-entregador \n resposta: ");
    scanf("%i", &cargo);

    switch (cargo){
        case 1:
            liquido = salario - (salario * 0.07);
            printf("o seu novo salario de auxiliar de escritorio é: %.2f",liquido);
            break;
            
        case 2:
            liquido = salario - (salario * 0.08);
            printf("o seu novo salario de auxiliar de escritorio é: %.2f",liquido);
            break;
            
        case 3:
            liquido = salario - (salario * 0.05);
            printf("o seu novo salario de auxiliar de escritorio é: %.2f",liquido);
            break;
            
        case 4:
            liquido = salario - (salario * 0.12);
            printf("o seu novo salario de auxiliar de escritorio é: %.2f",liquido);
            break;
        default:
            printf("resposta impossivel de se informar");
}
    return 0;
}
