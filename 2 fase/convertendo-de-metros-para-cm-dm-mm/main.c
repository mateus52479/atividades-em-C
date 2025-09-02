#include <stdio.h>
int main()
{
    printf("digite o numero em metros: ");
    float metros, dm, cm, mm; 
    scanf("%f", &metros);
    dm = metros *10;
    cm = metros *100;
    mm = metros *1000;
    printf("\n para decimetros = %f", dm);
    printf("\n para centimetros = %f", cm);
    printf("\n para milimetros = %f", mm);
    return 0;
}
