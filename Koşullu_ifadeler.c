// DERS 14...

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int score;
//     printf("Enter a score: ");
//     scanf("%d", &score);

//     if(score > 60)
//     {
//         printf("congratulations you passed the exam\n");
//         printf("your score : %d \n\n", score);
//     }
//     else
//     {
//         printf("unfortunately you did not pass the exam \n\n");
//     }

//     return 0 ;
// }

// KISA YOL LA İF BLOĞU OLUŞTURMAK

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int score;
//     printf("Enter a score");
//     scanf("%d", &score);

//     (score >= 60) ? printf("you passed to exam \n\n") : printf("you failed the exam"); //   koşul doğru ise : dan önceki printf yazdırılır yanlış ise : dan sonraki printf yazdırılır.

//     return 0 ;

// }

/* ÖRNEKLER:
    1 - SORU : kullanıcıdan alınan sayıları karşılaştır
    2 - SORU : Basit bir kitap sipariş ve indirim programı yapalım*/

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     float sayi_1 , sayi_2;
//     printf("Enter a sayi1 , sayi2 : ");
//     scanf("%f %f", &sayi_1 , &sayi_2);

//     if(sayi_1 >sayi_2)
//     {
//         printf("1. sayi 2. sayidan buyuktur ");
//     }
//     else 
//     {
//         printf("2. sayi 1. sayidan buyuktur");
//     }

//     return 0 ;
// }

        // ÖRNEKLER ...

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int bookPrice , orderQuantity; // kitabın fiyatı ve sipariş miktarı    
//     // indirim oranı , indirimsiz fiyat , kitabın indirimli fiyatı, toplam
//     float discountRate , noDiscountPrice , discountPrice , sum;
//     bookPrice = 20;     // kitabın fiyatı
//     orderQuantity = 0;  // sipariş miktarı

//     printf("kac adet siparis etmek istersiniz: ");
//     scanf("%d", &orderQuantity);

//     if(orderQuantity >= 60)
//     {
//         discountPrice = 0.30;
//     }
//     else
//     {
//         if(orderQuantity>= 30 && orderQuantity <60)
//         {
//             discountPrice = 0.20;
//         }
//         else if(orderQuantity >= 10 && orderQuantity < 30)
//         {
//             discountPrice = 0.12;
//         }
//         else 
//         {
//             discountPrice = 0.01;
//         }
//     }
//     noDiscountPrice = orderQuantity * bookPrice;
//     printf("Kitabin indirimsiz fiyati : %f TL", noDiscountPrice);

//     return 0 ;
// }

/* 1- TBMM ' inde  toplantı yeter sayısını sağlanıpsağlanmadığını 
      kontrol eden program
   2- Girilen sayinin tek mi çiftmi olduğunu bulan program */

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int partyA , partyB , partyC , currentCouncilor;
//     const int sumCouncilor = 600;   // sabiti olduğu yerde atama yapman lazim

//     printf("meslekteki partilerin milletvekili sayilarini giriniz: ");
//     scanf("%d %d %d", &partyA , &partyB , &partyC);

//     currentCouncilor = partyA + partyB + partyC;
    
//     if(currentCouncilor<200)
//     {
//         printf("gerekli toplanti sayisina  ulasilmadi ");
//         printf("toplanti yeter sayisi 200 dur\n");
//     }
//     else 
//     {
//         printf("Meclis toplantiya hazirdir");
//     }

//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

            // GİRİLEN SAYİ TEKMİ ÇİFTMİ OLDUĞUNA BAKALIM

// int main(void)
// {   
//     int h;
//     printf("Enter a h: ");
//     scanf("%d", &h);

//     if(h%2 == 0 )
//     {
//         printf("Girdigin sayi cift sayidir");
//     }
//     else 
//     {
//         printf("Girdigin sayi tek sayidir");
//     }

//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>

// //  Kullanıcıdan alınan  üç sayının en büyüğünü ve en küçüğünü koşullu 
// //  Koşullu ifadelerle tespit eden program

// int main(void)
// {
//     int number1 , number2 , number3 , max , min;
//     printf("Enter a numbers: ");
//     scanf("%d %d %d", &number1 , &number2 , &number3);

//     if(number1 >number2 && number1 >number3)
//     {
//         max = number1;
//     }
//     else if(number2 > number1 && number2 > number3)
//     {
//         max = number2;
//     }
//     else
//     {
//         max = number3;
//     }

//         if(number1 < number2 && number1 < number3)
//     {
//         min = number1;
//     }
//     else if(number2 < number1 && number2 < number3)
//     {
//         min = number2;
//     }
//     else
//     {
//         min = number3;
//     }

//     printf("girdigin max deger : %d\n", max);
//     printf("girdigin min deger : %d\n", min);

//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

//     // Kenar uzunluklari girilen üçgenin hangi tür üçgen olduğunu bul?

// int main(void)
// {
//     int a , b , c;
//     char en_uzun_kenar;

//     printf("Ucgenin kenar uzunluklarini giriniz: ");
//     scanf("%d %d %d", &a , &b ,&c);

//     if(a > b && a >c)
//     {
//         en_uzun_kenar = 'a';
//     }
//     else if(b>a && b>c)
//     {
//         en_uzun_kenar = 'b';
//     }
//     else
//     {
//         en_uzun_kenar = 'c';
//     }
     
//     // ---------------------------

//     if(en_uzun_kenar == 'a')
//     {
//         if(a*a == b*b + c*c)
//         {
//             printf("Dik acili ücgen");
//         }
//         else if(a*a > b*b + c*c)
//         {
//             printf("Genis acili ücgen");
//         }
//         else if(a*a < b*b + c*c)
//         {
//             printf("Dar acili ücgen");
//         }
//         else
//         {
//             printf("Girdigin degerde ücgen tanimli degil");
//         }
//     }
//     // -------------------------
//     else if(en_uzun_kenar == 'b')
//     {
//                 if(b*b == a*a + c*c)
//         {
//             printf("Dik acili ücgen");
//         }
//         else if(b*b > a*a + c*c)
//         {
//             printf("Genis acili ücgen");
//         }
//         else if(b*b < a*a + c*c)
//         {
//             printf("Dar acili ücgen");
//         }
//         else
//         {
//             printf("Girdigin degerde ücgen tanimli degil");
//         }
//     }
//     // -------------------

//     else if(en_uzun_kenar == 'c')
//     {
//         if(c*c > a*a + b*b)
//         {
//             printf("Girdigin ücgen genis acili ücgendir");
//         }
//         else if(c*c == a*a + b*b)
//         {
//             printf("Dik acili bir ücgendir");
//         }
//         else if(c*c < a*a + b*b)
//         {
//             printf("Girdigin ücgen dar acili ücgendir");
//         }
//         else
//         {
//             printf("Girdigin degerlerle ücgen olusturulmaz");
//         }
//     }   

//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int number , newnumber , part1 , part2 ;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     //abcd
//     part1 = number / 100;
//     part2 = number % 100;
//     newnumber = (part1 + part2) * (part1 + part2);

//     if(newnumber == number)
//     {
//         printf("%d aradigimiz sayi ozel sayidir", newnumber);
//     }
//     else
//     {
//         printf("%d aradigimiz sayi ozel sayi değildir hatta hiç bisey degildir",newnumber);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     int number , squarteRoot ; 

//     printf("Enter a number: ");
//     scanf("%ld",&number );

//     if(number < 0 )
//     {
//         printf("plase do not do this...");
//     }
//     else 
//     {
//         squarteRoot = sqrt(number);
//         if(squarteRoot * squarteRoot == number)
//         {
//             printf("square root of %d is an integer\n", squarteRoot);
//         }
//         else
//         {
//             printf("No it is not \n");
//         }
//     }
    

//     return 0 ;

// }


/*SORU : Bir gsm operatörü  4 dk kadar konuşma ücretini 0.30 tl olarak belirlemiştir
     ancak konuşma süresi  4 dakikayı aşarsa bundan sonraki her dakika için  ek olarak  0.07 tl  almaktadır
     telefon görüşmesinin süresini dakika cinsinden girdi olarak alan ve konuşmasını ücretini hesaplayanC programını oluşturlaım*/ 


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     float talkTime , fee;

//     printf("Enter a talkTime : ");
//     scanf("%f", & talkTime);

//     if(talkTime <= 4)
//     {
//         fee = 0.30;
//     }
//     else 
//     {
//         fee = 0.30 + (talkTime - 4)*0.07;
//     }

//     printf("odedigin ucret : %f", fee);

//     return 0 ;
// }

/* bir üçgenin açılarını girdi olarak alan ve bu üçgenin  eş kenar ikiz kenar  veya çeşit kenar ğçgen olup
    olmadığında bak*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int aci_1 , aci_2 , aci_3;

    printf("Lutfen aci degerlerini giriniz : ");
    scanf("%d %d %d", &aci_1 , & aci_2 , &aci_3);

    if(aci_1 + aci_2 + aci_3 != 180)
    {
        printf("Bu degerlerle ucgen olusturulmaz...");
    }

    else if(aci_1 == aci_2 == aci_3)
    {
        printf("Bu ucgen es kenar ucgendir...");
    }
    else if(aci_1 == aci_2 || aci_2 == aci_3)
    {
        printf("Bu ucgen ikiz kenar ucgendir");
    }
    else
    {
        printf("Bu ucgen cesit kenar ucgendir...");
    }

    return 0 ;
}