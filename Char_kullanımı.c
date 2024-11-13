// DERS 6 ...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char my_city[10] ='Van';
    // printf("My city is = %s\n", my_city);    //   %s ile olunca bütün karakterleri okuyor 
    // printf("My city is = %c\n", my_city);    //   %c ile olunca sadece baştaki karakterleri okuyor

    // return 0 ;

    char Mycity[16];
    printf("Enter a city: ");
    scanf("%s", &Mycity);            // boşluktan sonrakini okumaz
    printf("your city is : %s\n", Mycity);

    printf("\n...");

    return 0 ;
}