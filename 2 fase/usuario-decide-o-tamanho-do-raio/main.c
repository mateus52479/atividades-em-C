#include <stdio.h>
#define pi  3.1415
int main()
{
    printf("digite o tamanho do raio: ");
    float raio, area; 
    scanf("%f", &raio);
    area = pi * raio * raio;
    printf("\n tamanho da area = %f", area);
    return 0;
}
