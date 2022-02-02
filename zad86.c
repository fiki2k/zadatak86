//Napisi program koji pretvara grame u kilograme.


#include<stdio.h>

int main()
{
    float m, kilogrami;
    printf("Unesite masu po zelji u gramima: ");
    scanf("%f", &m);
    kilogrami = m / 1000;
    printf("Masa u kilogramima je = %f", kilogrami);
    return 0;
}
