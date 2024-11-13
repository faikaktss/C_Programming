// DERS 5..

#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
//     int My_number;
//     printf("Enter a number : ");
//     scanf ("%d", &My_number);
//     printf("The number you entered is %d", My_number);

//     return 0 ;

    /* dairenin çevresini ve alanını bulan program
        1- ihtiyacımız olan variablesi bul ve tanımla
        2- variables type bul
        3-formülü tanımla
        4- kullanıcıdan veri al
        5- işlem yap
        6- return
    */

    // float r, cevre , alan ;
    //     printf("Lutfen yaricap bilgisini giriniz: ");
    //     scanf("%f", &r);

    //     const float PI = 3.14;          // const ile sabit bir değere atadığımız için yukarda tekrar tanımlamaya gerek yok
    //     cevre = 2*PI*r;         // constun amacı aynı değeri farkı bir sayıya atamamak için kullanılır
    //     alan = PI*r*r;

    //     printf("Dairenin  cevresi = %f \n", cevre);
    //     printf("Dairenini alani = %f", alan);

    //     return 0 ;






// }


int main(void)
{

    /* 4 adet sayı  alıp bunların karesini ve küpünü alan program
        - ihtiyacımız olan variablesi bul ve tanımla
        - variables type bul
        - formülü tanımla
        -kullanıcıdan veri al
        - işlem yap
        -çıktı ver    
    */

    float My_number1 , My_number2 , My_number3 , My_number4;
        My_number1 = 0;
        My_number2 = 0;
        My_number3 = 0;
        My_number4 = 0;

        printf("Enter four numbers : ");
        scanf ("%f %f %f %f", &My_number1, &My_number2 , &My_number3 , & My_number4);

        printf("The number\t\t");
        printf("Square of number \t\t");
        printf("Cube of number \t\t\n");

        printf("----------\t\t");
        printf("----------\t\t\t");
        printf("----------\t\t\n");

        printf("%f\t\t", My_number1);
        printf("%f\t\t", My_number1*My_number1);
        printf("%f \t\t\n", My_number1*My_number1*My_number1);

        printf("%f\t\t", My_number2);
        printf("%f\t\t", My_number2*My_number2);
        printf("%f \t\t\n", My_number2*My_number2*My_number2);

        printf("%f\t\t", My_number3);
        printf("%f\t\t", My_number3*My_number3);
        printf("%f \t\t\n", My_number3*My_number3*My_number3);

        printf("%f\t\t", My_number4);
        printf("%f\t\t", My_number4*My_number4);
        printf("%f \t\t\n", My_number4*My_number4*My_number4);

        return 0 ;




}