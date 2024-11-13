// DERS 8 ..

/*ÖRNEKLER :    x += 2  x = x + 2
                x -= 2  x = x - 2
                diyer örneklerde bunlar gibi */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // int myNumber;
    //     myNumber = 7;
    //     myNumber += 12;
    //     printf("myNumber is : %d\n", myNumber);

    // return 0 ;

    // NOTLAR: 
    /* & opertaörü şöyle çalışır : 
        - 12 sayisini bilgisayar diliyle yazalım
        - 12 = 0 0 0 0 1 1 0 0   2nin kuvvetleri şeklinde yazılıp toplamı 12 etmesi lazım
        -  7 = 0 0 0 0 0 1 1 1  7 nin yazımıda bu 
        -  & de 1 ile 1 1 eder ona göre sonucu çıktı olarak karşımıza çıkar
        - xor = ^ da ise biri başarılı diyeri başarısız olduğu zaman sadece 1 değeri döner
        - << bunlar ise sola kaydırmak demektir yani (devamı alt satırda)
        - 7 = 0 0 0 0 0 1 1 1  7 <<= 2 demek bitleri 2 birim sola kaydır demek
        - sonuç : 7 = 0 0 0 1 1 1 0 0 bitler 2 birim kayar ve görüntü bu olur 
        - pekiştirme yap !!!*/

    /*SORU : KULLANICIDAN 4 BASAMAKLI BİR SAYI ALIP BU SAYININ RAKAMLARI 
    TOPLAMINI BULAN ALGORİTMA ?*/

    int myNumber , sum  , bolum , kalan;
        sum  = 0;
        printf("Enter a myNumber: ");
        scanf("%d", &myNumber);

    // 4. basamağı bul
    bolum  =myNumber / 1000;
    sum += bolum;
    kalan  = myNumber % 1000; 

    // 3. basamağı bul
    bolum  =kalan / 100;
    sum += bolum;
    kalan  = kalan % 100;

    // 2. basamağı bul
    bolum  =kalan / 10;
    sum += bolum;
    kalan  = kalan % 10; 

    // 1. basamağı bul
    bolum  =kalan / 1;
    sum += bolum;
    kalan  = kalan % 1000; 
    
    printf("girilen sayinin rakamlari toplami : %d\n", sum);

    return 0 ;




}