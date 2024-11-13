// #include <stdio.h>
// #include <stdlib.h>

    /*Kapalı bir kaptaki gazın basıncını hesaplayana algoritma
        basınç = (n * R sabiti * sıcaklık) / hacim*/


    // float n , R , T, V;
    // float basinc;
    // printf("Istenen degerleri giriniz :");
    // scanf("%f %f %f %f", &n , &R , &T ,&V);

    // basinc  = (n * R * T) / V;

    // printf("kapali kabin basinci : %f\n", basinc);

    // return 0 ; 

    /* Bir eletkrik dağıtım şirketi verdikleri  hizmet karşılığında 
    müşterilerinde aylık olarak harcanan toplam kilowat saat miktarınca
    ve belirli ibr abonelik ücreti talep etmektedir
    birim kilowat saat ücreti ve abonelik ücreti her ay aylık enflasyon oranında artırmaktadır
    buna göre müşterilerinin bir aya ait ödeyeceği elektirk faturasının miktarını hesaplayan program
    FATURA MİKTARI = HARCANAN ELEKTİRK * BİRİM FİYAT  + ABONE ÜCRETİ*/

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     float odenecekFatura , eskiBirimFiyat , yeniBirimFiyat;
//     float enflasyon , eskiAboneUcreti , yeniAboneUcreti;
//     int yeniOkuma , eskiOkuma , toplamHarcananElektrik;

//     printf("Enflsayon miktarini giriniz: ");
//     scanf("%f", &enflasyon);
//     printf("Önceki aya ait birim fiyat miktarini giriniz: ");
//     scanf("%f", &eskiBirimFiyat);
//     printf("Önceki aya ait abonelik ucretini giriniz: ");
//     scanf("%f", &eskiAboneUcreti);
//     printf("Bir önceki aya ait okuma değerini giriniz: ");
//     scanf("%d", &eskiOkuma);
//     printf("Bu aya ait okuma degerini giriniz: ");
//     scanf("%d", &yeniOkuma);
//     toplamHarcananElektrik = yeniOkuma - eskiOkuma;
//     yeniBirimFiyat = eskiBirimFiyat*(1+enflasyon/100);
//     yeniAboneUcreti = eskiAboneUcreti*(1+enflasyon/100);
//     odenecekFatura = toplamHarcananElektrik*yeniBirimFiyat+yeniAboneUcreti;
//     printf("\n ödeceyeginiz fatura tutuari : %f\n\n", odenecekFatura);

//     return 0 ;
// }

/*1- Girilen sayinin onlar ve birler basamağını bulan program
  2- Girilen  4 sayinin aritmetik ortalamasini bulan progrma*/

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int sayi_1, onlar_basamagi , birler_basamagi;
//     printf("Enter a sayi_1 : ");
//     scanf("%d", &sayi_1);

//     onlar_basamagi = (sayi_1 % 100) / 10;
//     birler_basamagi = sayi_1 %10;

//     printf("Sayinin onlar basamagi : %d\n", onlar_basamagi);
//     printf("Sayinin birler basamagi : %d\n", birler_basamagi);

//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int a , b , c , d;
//     int aritmetik_ortalama;
//     printf("Lütfen istenen degerleri giriniz: ");
//     scanf("%d %d %d %d", &a , &b , &c ,&d);
//     aritmetik_ortalama = (a + b + c + d) / 4;
//     printf("Girilen sayilarin aritmetik ortalamasi : %d\n", aritmetik_ortalama);

//     return 0 ;


// }

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,k;

    for(i=1; i<=5 ;i++)
    {
        printf("i: %d\n",i);

        for(j=1;j<=10;j++)
        {
            printf("\t j: %d\n",j);
        }
    }

    return 0 ;
}