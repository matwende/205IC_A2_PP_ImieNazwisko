#include<stdio.h>

int main()
{
    int i = 1;
    float f = 1.5;
    double d = 2.5;
    char c = 'c';
    
    printf("Wartosci zmiennych:i=%i, f=%.2f, d=%.2lf, c=%c \n", i, f, d, c);
    scanf("%i", &i); 
    scanf("%f", &f);
    scanf("%lf", &d);
    scanf(" %c", &c);
    printf("\nWartosci zmiennych:i=%i, f=%.2f, d=%.2lf, c=%c", i, f, d, c);
    
}
