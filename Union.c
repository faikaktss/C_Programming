/*
ÖRNEK: 
        union test
        {
            int x;
            char y[10]; 
        }p*
        
        -Bu tanıma göre x tma sayısı için 4 baytlık yer ayırlmıştır
        -y değişkeni için 10 baytlık yer ayrılmıştır
        -Bu durumda birlik için en fazla 10 baytlık yer ayrılmıştır
        
        NOT: unionlarda sadece en büyük olan byte kadar yer ayırtır*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// union bir{
//     int id;
//     double dd;
//     char cd;
// }bd;

// int main(void)
// {
//     bd.id = 21;
//     bd.cd ='A';
//     printf("%d%c\n",bd.id,bd.cd); //1 sadece bir tanesi ayrılan bellekte kullanılabilir
//     bd.id = 127;
//     printf("%d%c\n",bd.id,bd.cd); //2   o yüzden sadece bir tanesini ekrana yazdırı
//     bd.dd = 34.75;
//     printf("%d%f",bd.id,bd.dd);

//     return 0 ;
// }
        


/*ÖRNEK*/
// void fonk1(char cd);
// char fonk2(char cd1);
// int main(void)
// {
//     char cd1 = 87;/*'W'01010111*/
//     char cd2;
//     printf("Karakter degeri: %c %d",cd1,cd1);
//     fonk(cd1);
//     cd2 = fonk2(cd1);
//     printf("Karakter degeri:%c%d",cd2,cd2);/*'u'01110101*/
//     fonk1(cd2);
//     return 0;
// }

// void fonk1(char cd)
// {
//     int id;
//     for(id=128;id>0;i++){
//         if(cd&id)printf("1 ");
//         else printf("0 ");
//         printf("\n");
//     }
// }

/*NULL ÖRNEK*/
// int main(void)
// {
//     int *p;
//     p = NULL;  //null işaretcisinin atandığı bir yere başka bir şey atanamaz

//     printf("\n p isaretcisinin adresi: %p\n\n",p);//adresi bulurken %p yi kullanırız

//     if(p)
//         printf("p isaretcisi null degil...\n");
//     else
//         printf("p isaretcisi null ....\n");

//         return 0 ;

// }

/*ÖRNEK*/

int main(void)
{
    int *ab;
    int m;
    m = 17;
    printf("\n\nPointer kullanimi\n\n");
    printf("ab = int pointer'i int m=17\n\n");
    printf("m'nin adresi:%p\n",&m);
    printf("m'nin degeri : %d\n",m);
    ab = &m;
    printf("m'nin adresi ab'ye atandi\n");
    printf("ab'nin adresi:%p\n",ab);
    printf("ab'nin icerigi:%d\n\n",*ab);
    m = 35;
    printf("m'ye 35 degeri atandi\n");
    printf("ab'nin adresi:%p\n",ab);
    printf("ab'nin icerigi :%d\n\n",*ab);
    *ab = 8;
    printf("ab'nin isaret ettigi degiskenin degeri 8 olarak atadi\n");
    printf("m'nin adresi:%p\n",&m);
    //ab m'nin adresini içerdigi için m nin degeri 8 olarak değişti
    printf("m'nin degeri :%d\n\n",m);
    return 0 ;
}