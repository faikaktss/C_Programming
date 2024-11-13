// DERS 10...

#include <stdio.h>
#include <stdlib.h>

/* ==  => bunun anlamı eşitmidir diye sorar
   !=  => bunun anlamı eşit değilmidir diye sorar yukardakinin tam tersi
   >  = büyükmü anlamına gelir
   <  = küçükmü anlamıa gelir */

int main(void)
{
    int x , y ;
    x = 7 ;
    y = 7 ;
    printf("result: x=y: %d\n", x==y);
    printf("result: x=y: %d\n", x!=y);
    printf("result: x=y: %d\n", x>=y);
    printf("result: x=y: %d\n", x<=y);
    printf("\n\n");

    return 0 ;
}