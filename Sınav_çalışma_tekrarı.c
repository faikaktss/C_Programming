// strlen() = yapılan karakterin uzunluğunu bulmada yarıdmcı olur
/*strlen() = yapılan karakteirn uzunluğunu bbulamda yardımcı olur
  içerdeiği en son karakter olan null karakterini göz önüne almaz   */ 
  

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char dizi[50];
//     int i;
//     printf("Lütfen metni girinz:");
//     gets(dizi);

//     printf("Uzunluk: %d", strlen(dizi));
//     printf("\n");
//     return 0 ;
//     rand
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char metin1[50], metin2[50];

//     printf("Lütfen 1. metni girinz: ");
//     gets(metin1);

//     printf("lütfen 2. metni giriniz: ");
//     gets(metin2);

//     strcat(metin1 , metin2);
//     printf("\n Birleştirilmiş metin:  ");
//     printf(metin1);
//     printf("\n");
//     return 0 ;

// }


// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char metin1[50], metin2[50];

//     strcpy(metin1, "Algoritma ");
//     strcpy(metin2, "ve programlama");

//     strcat(metin1, metin2);

//     printf(metin1);
//     printf("\n");
//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int x, i;
//     srand(500);
//     for(i=1;i<=5;i++)
//     {
//         x = 1 + rand()%6;
//         printf("%d. sayi = %d\n",i,x);
//     }
//     return 0 ;
// }

#include <stdio.h>
#include <stdlib.h>

int us(int sayi, int ussu); // burda fonksiyonu tamamladık
const 
sayi1 = 10

int main()
{

    int a , b;
    printf("\n Taban = ");
    scanf("%d", &a);
    printf("\n Us = ");
    scanf("%d", &b);

    printf("\n Ussu = %d\n", us(a,b));
    return 0 ;
}

int us(int sayi, int ussu)
{
    int sonuc=1;
    int i;
    for(i=0 ;i<ussu; i++)
        sonuc *= sayi;
    return(sonuc);
}