/*Sabitlerin olduğu bir arraydir enum . Diğer adı sabitler grubudur*/

/*TANIMLAR*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// enum month{
//     JANUARY,
//     FEBRUARY,
//     MARCH,
//     APRIL,
//     MAY,
//     JUNE,
//     JULY,
//     AUGUST,
//     SEPTEMBER,
//     OCTOBER,
//     NOVEMBER,
//     DECEMBER
// };

// int main(void)
// {
//     enum month myConst;
//     myConst = JUNE;

//     if(myConst == 6 || myConst==7 || myConst == 8)
//         printf("Welcome to summer vacation\n");
//     else
//         printf("It's scholl time again\n");

//     return 0 ;
// }

/*typedef = bir variableye takma isim takmak demektir*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// typedef struct{
//     char* name;
//     int age;
//     float weight;
// }Student;//kısaltılmasını burda kendine göre ayarlayabilirsin

// int main(void)
// {
//     Student s1 = {"Nazli",28,62.3};
//     Student s2 = {"Ceren",25,61.7};

//     printf("Your name: %s\n", s1.name);
//     printf("Your age: %d\n",s1.age);
//     printf("your weight: %f\n",s1.weight);

//     return 0 ;
// }


/*UNİON İLE STRUCT ARASINDAKİ FARK*/
//NOT: struct lar yer ayırırken bütün karakterlere ayırılar
//Not: unionlar ise sadece büyük olanlara göre yer ayırırlar
//NOT: unionlar da sadece bir elemana ulaşabilirsiniz scanf ile
//NOT: sadece yüksek olan byte ttaki değeri tutar

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// union unionS{
//     char myLetter;
//     int x;
// }uStudent;

// int main(void)
// {
//     uStudent.x = 98;
//     printf("%d\n",uStudent.x);//98 yazdırdı 
//     printf("%c\n",uStudent.myLetter);//ama bunu yazdırmadı
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
//     enum mainColors{
//         Red,
//         Blue,
//         Yellow
//     };

//     //Define variable
//     enum mainColors pixel;

//     // Set value of pixel to blue
//     //You can  set yellow or red also
//     pixel = Blue;

//     if(pixel == Red)        
//         printf("Red pixel \n");
//     else if(pixel == Blue)
//         printf("Blue pixel \n");
//     else
//         printf("Yellow pixel\n");

//     return 0 ;
// }

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// int main(void)
// {
//     //Define new data type
//     //Also define a new variable with the new data type

//     enum boolean{
//         false = 0,
//         True
//     };

//     typedef enum boolean bool; // takma isim taktım
//     bool isTrue;
//     isTrue = True;
//     if(isTrue == True)
//         printf("True \n");
//         return 0 ;
// }


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// int main(void)
// {
//     enum mainColors{
//         Red,
//         Blue,
//         Yellow
//     };

//     enum mainColors pixel;
//     pixel = Blue;
//     if(pixel == Red)
//         printf("pixel == red");
//     if(pixel == Blue)
//         printf("pixel == blue");
//     else
//         printf("Yellow pixel\n");

//     return 0 ;
// }

/*typdef kullanımı*/
// int main(void)
// {
//     enum boolean{
//         false,
//         True
//     };
//     typedef enum boolean bool; // boolean ismini bool olarak tanımladım

//     bool isTrue;
//     isTrue = True;
//     if(isTrue == True)
//         printf("True\n");
//     return 0 ;

// }

// int asalSayi(int,int);
// int main(void)
// {
//     int sayi = 29;
//     int sonuc=asalSayi(sayi,sayi/2);
//     if(sonuc == 0)
//         printf("%d asal sayi degildir\n",sayi);
//     else
//         printf("%d asal sayidir\n",sayi);
//     return 0;
// }

// int asalSayi(int x,int i)
// {
//     if(x<2)
//         return 0;
//     else if(i == 1)
//         return 1;
//     else if(x%i==0)
//         return 0;
//     return asalSayi(x,i-1);
// }

enum BOOLEAN{FALSE, TRUE};
int tek(int n)
{
    return (n%2);
}

int main(void)
{
    enum BOOLEAN sonuc;
    int x;
    printf("Bir sayi giriniz: ");
    scanf("%d",&x);
    sonuc = tek(x);
    if(sonuc==TRUE)
        puts("Girilen sayi tek");
    else
        puts("Girilen sayi cift");
    return 0;
}