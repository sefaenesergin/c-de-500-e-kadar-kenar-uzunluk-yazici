//SEFA ENES ERGİN-sefaenesergin@gmail.com
//Hipotenusu 500'e kadar olan pisagor uclulerini ekrana yazar. 

#include<stdio.h>
int main( void )
{
    int a; /* birinci dik kenar */
    int b; /* ikinci dik kenar */
    int hipotenus;

    for(a = 1; a < 500; a++)
        for(b = a; b < 500; b++)
            for(hipotenus = b+1; hipotenus <= 500; hipotenus++)
                if( (a*a + b*b) == hipotenus*hipotenus )
                    printf("%5d%5d%5d\n", a, b, hipotenus);
    return 0;
}
