#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcoes.h"

int main()
{
    int a,b,c;

    printf("Digite o termo 'a' do sua equacao(a!=0): ");
    scanf("%d", &a);

    printf("Digite o termo 'b' do sua equacao: ");
    scanf("%d", &b);
    
    printf("Digite o termo 'c' do sua equacao: ");
    scanf("%d", &c);

    int delta = CalcDelta(a,b,c);
    printf("Valor do delta: %d\n", delta);

    if(delta < 0 || a == 0)
    {
        puts("Equacao sem raiz real!! ou a = 0! ");
    }
    else
    {
        float raiz1 = Raiz1(delta, b, a);
        float raiz2 = Raiz2(delta, b, a);
        printf("Valor da Raiz 1: %.2f\n", raiz1);
        printf("Valor da Raiz 2: %.2f\n", raiz2);
    }
    return 0;

}