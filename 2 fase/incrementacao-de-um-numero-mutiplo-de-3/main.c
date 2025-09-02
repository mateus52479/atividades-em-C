
#include <stdio.h>

int main()
{
    
    int n1;
    
    printf("digite um numero inteiro: ");
    scanf("%i", &n1);
    
if (n1 % 3 == 0){
    n1++;
    printf("numero foi incrementado, agora ele é = %i", n1);
}else{
    n1--;
    printf("numero foi decrementado, agora ele é = %i", n1);
}
    return 0;
}
