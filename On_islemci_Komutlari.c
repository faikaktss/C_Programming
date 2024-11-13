// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #define PI 3.141592  // PI harfini büyük yazmamın sebebi define olarak yazdığımı anlamak için

// int main(void)
// {
//     const int MAX_NUMBERS2 = 100;

//     int numbers[MAX_NUMBERS2] = {1,2,3,4,5}; // dizilerin içine bir sabit koyulmaz   
//                                              // bunu sadece define ile yapılabilir   
//     printf("%d", numbers[2]);

//     return 0 ;
// }

/*MAKRO OLUŞTURMA*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #define MAX(number1,number2) (number1>number2)? number1:number2
// #define MIN(number1,number2) (number1<number2)? number1:number2 // kısa if else gibi yazabiliyoruz
// #define AREA_OF_RECTANGLE(x,y) ((x)*(y))

// int main(void)
// {
//     printf("MAX(2,7):%d\n", MAX(2,7));
//     printf("MAX(19,3):%d\n", MAX(19,3));
//     printf("MİN(13,15):%d\n", MIN(13,15));
//     printf("area :%d\n", AREA_OF_RECTANGLE(6,7));

//     return 0 ;
// }

/*UNDEF KOMUTUNU KULLANMA*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #define MYNUMBER 7 

// int main(void)
// {
//     printf("MYNUMBER:%d\n",MYNUMBER);

//     printf("MYNUMBER:%d\n",MYNUMBER);

//     #undef MYNUMBER // burda MYNUMBER I artık çalıştırma anlamına geliyor

//     return 0 ;
// }

/*if else komutu ile çalıştırmak*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MYNUMBER 70

// int main()
// {
//     #if MYNUMBER > 10
//     printf("MYNUMEBER is larger than 10");
//     #else MYNUMBER < 10
//     printf("MYNUMBER is smaller thane 10");/*yukarıdaki koşul doğru olduğu için 
//                                              burayı hiç görmez yorum satırı olarak algılar*/
//     #endif//bunu yazdığımızda ise kod çalışır
// }

/*DEFİNE NIN TANIMLI OLUP OLMADIĞINI KONTROL EDEN KOD*/

int main(void)
{
    #ifdef MYNUMBER
        printf("MYNUMBER tanimli ve degeri : %d\n",MYNUMBER);
    #else
        printf("MYNUMBER tanimli değil\n");
    #endif // bunu yazdığın zaman kod çalışır

    #undef MYNUMBER // MYNUMBER I tanımsız hale getirdik

        #ifdef MYNUMBER
        printf("MYNUMBER tanimli ve degeri : %d\n",MYNUMBER);
    #else
        printf("MYNUMBER tanimli degil\n");
    #endif // MYNUMBER

    #ifndef MYNUMBER//eğer MYNUMBER tanımlı değilse bu kod çalışır
        #define MYNUMBER 19//ve MYNUMBER ı tekrar tanımlar
    
    #endif //MYNUMBER

    return 0 ;
}