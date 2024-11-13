// DERSLİK 3 ...
/*NOTLAR: 
        char = 1 byte yer tutar  '' bu işaretle saklar  tek bir karakter tutar
        int =  4 bytes yer tutar. tüm tam sayıları tutar
        float = 4 bytes yer tutar. bir veya daha fazla ondaliklı sayıları tutar
        double = 8 bytes yer tutar. çok ondalıklı sayı tutar


        char =  veri tipini yazarken %c ifadesi kullanılır
        int = veri tipi yazılırken %d  ifadesi kullanılır , %ld ise uzun int ifadeler için kullanılır.
        float = veri tipini yazarken % f ifadesi kullanılır
        metinsel ifade = leri ise %s ile yazdırırız
        unsigned = int veri tipini % u ile yazdırırz
        double = veri tipini %lf ile yazdırırız.
        
*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    char My_litter = 'C';
    int My_number = 37974;  // unsigned çok yüksek sayı girdiğin zaman kullanilir
    float My_number1 = 89.42;
    double My_number2 = 89.387269;

    // metinsel ifadeleri yazdıralım
    printf("%s\n","where have you been?");      // %s ile metinsel ifadeleri yazdırabilirz. 


    // Metinlerin boyutlarına bakmak için sizeof() ifadesi kullanılır.

    printf("size char = %d\n", sizeof(char));
    printf("size int = %d\n", sizeof(int));
    printf("size float = %d\n", sizeof(float));
    printf("size double = %d\n", sizeof(double));

    return 0 ;
}