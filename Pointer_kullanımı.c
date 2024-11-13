// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// // int main(void)
// // {
// //     char name = 'F'; // 1 byte
// //     int x = 7; // 4 byte
// //     printf("%c", name);

// //     return 0 ;
// // }

// /* Bellekten adres okuma */
// int main(void)
// {
//     int x = 7;
//     float y = 3.14;
//     double z=4.23456;
//     char name='F';

//     printf("x variable:%d\n",x);
//     printf("y variable:%f\n",y);
//     printf("z variable:%f\n",z);
//     printf("name variable:%c\n\n", name);

//     printf("x variable address:%x\n",&x);/*Adres öğrenmek için printf in içine & işaretini koymamız lazım!!!*/
//     printf("y variable address:%x\n",&y);
//     printf("z variable address:%x\n",&z);
//     printf("name variable address:%x\n\n",&name);
    
//     return 0 ;
// }

/* POİNTER TANIMLAMASI*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     int x = 7;      /*pointerlerin türleri yoktur*/
//     int* ptr= &x;   /*pointerler böyle yıldız ile tanımlanır pointerler sadece bellek adresini tutarlar*/
//     printf("x:%d\n",x);
//     printf("x variable address:%x\n",&x); // x in adresini öğrenmek için & koyduk
//     printf("x variable address:%x\n", ptr);
//     printf("ptr variable address:%x\n",&ptr);//burdada ptr nin adresini bulak için & bu işareti koyduk
//     printf("x variable:%d\n",*ptr);//* ise o adresdeki değeri getirmeni sağlar                

//     return 0 ;
// }

/*POİNTERLERİN KULLANIMI*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     int x=7;
//     int* ptr;
//     ptr = &x;
//     printf("x variables %d\n", x);
//     *ptr=19; // x değişkenini kullanmadan x değerini değiştirdik
//     printf("x variables new value %d\n",x);
//     /*NOT: birden fazla pointer tek bir adresi aynı anda alabilir*/
//     return 0 ;
// }

/*POİNTERLERDE DEĞER ARTIRMA (UZMANLIK İŞİ)*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     char name='f';
//     double y=3.109;
//     int x = 7;

//     char* nameptr=&name;
//     double* yptr=&y;
//     int* xptr=&x;

//     printf("First adress: \n\n");

//     printf("name's firts adress:%x\t value:%c\n",nameptr,*nameptr);
//     printf("y's first adress: %x\t value: %f\n",yptr,*yptr);
//     printf("x's first adress: %x\t value: %d\n\n",xptr ,*xptr);// *xptr o bayttaki değeri sana verir

//     nameptr++;  // 1 byte
//     yptr+=4;    // 32 byte
//     xptr-=3;    // 12 byte
    
//     printf("next adress : \n\n");   // adres değiştirdik 
//     // ama bilmediğimiz bir şeyi değiştirirsek kodumuzu mahvetmil oluruz
//     printf("name 's next adress:%x\t value%c\n",nameptr,*nameptr);
//     printf("y's next adress: %x\t value%f\n", yptr,*yptr);
//     printf("x's next adress: %x\t value%d\n", xptr,*xptr);

//     return 0 ;
// }


/*POİNTERLER İLE FONKSİYOLARI KULLANMA*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// double getSquare(double *ptr);

// int main(void)
// {
//     double number, result;

//     printf("Enter a number: ");
//     scanf("%d",&number);

//     result = getSquare(&number);

//     printf("Square of number %.2f\n\n", result);

//     return 0 ;
// }

// double getSquare(double *ptr)
// {
//     return  *ptr  *  *ptr;
// }

/*BİR FONKSİYON İLE ADRES GÖNDERME*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// float* squareRoot(float* ptr); // karekök alma fonksiyonu

// int main(void)
// {
//     float number;
//     float* ptr; // number in türüne göre yazıyoruz

//     printf("Enter the number: ");
//     scanf("%d",&number);

//     ptr=squareRoot(&number);    // adres gönderiyoruz
//     printf("Square root of number: %.2f\n\n", *ptr);
//     return 0 ;
// }

// float* squareRoot(float* ptr)
// {
//     *ptr = sqrt(*ptr);
//     return ptr;
// }

/*POİNTERLER İLE ARRAYLAR*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     char myLitters[7] = {'a','b','c','d','e','f','h'};
//     // bir arrayın ismi o arrayın ilk elemanının bellek adresini tutar !!!

//     printf("Ilk elemanin adresi: %x\n",&myLitters[0]);//& bu işaret o elemanın adresini söyler
//     printf("Ilk elemanin adresi: %x\n", myLitters);
//     // dizinin adresini iki şekildede alabiliriz
//     printf("ikinci elemanin adresi: %x\n",&myLitters[1]);
//     printf("ikinci elemanin adresi: %x\n", myLitters);

//     printf("ücüncü elemanin adresi: %x\n",&myLitters[2]);
//     printf("ücüncü elemanin adresi: %x\n", myLitters);
//     // Dizinin değerini iki şekilde alabiliriz
//     printf("Ilk elemanin degeri:%c\n",myLitters[0]);//iki farklı şekildede alabiliriz
//     printf("Ilk elemanin degeri:%c\n",*myLitters);

//     printf("Ikinci elemanin degeri:%c\n", myLitters[1]);
//     printf("Ikinci elemanin degeri:%c\n",*(myLitters+1));
//     return 0 ;
// }

/*POİNTERLERİ DÖNGÜLERDE KULLANMAK*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     char myLetter[5] = {'x','y','z','a','f'};
//     int myNumbers[5] = {7,1,19,23,5};
//     int i;

//     printf("MY LETTER\n");
//     printf("-----------\n");
//     for(i=0;i<5;i++)
//     {
//         printf("myLetter[%d]:%c\n",i,*(myLetter+i));//*(myLetter+i) o adresteki değeri verir
//     }

//     printf("myNumbers Array\n");
//     printf("----------------\n");
//     for(i=0;i<5;i++)
//     {
//         printf("myNumbers[%d]:%d\n",i,*(myNumbers+i));
//     }
//     // adresler arraylerde yan yana dizilir diğerleri gibi rastgele değil
//     return 0 ;
// }

/*DİZİ FONKSİYON ÖRNEKLERİ*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// void myArray(int*);// fonksiyonu burda tanımladık

// int main(void)
// {
//     int numbers[6]={15,32,6,7,14,31};
//     int i ;
//     int size,array;
//     size = sizeof(numbers)/sizeof(numbers[0]); //numberın kaç elemanlı olduğunu buluyor
//     printf("Önceki durum\n");
//     printf("---------------\n");
//     for(i=0;i<size;i++){// ilerleyen zamanda karakter sayısı değişebilceği için 6 yerine size yazmak daha iyi
//         printf("Number[%d]:%d\n",i,numbers[i]);
//     }
//     myArray(numbers);
//     printf("\nSonraki durum\n");
//     for(i=0;i<size;i++){
//         printf("Number[%d]:%d\n",i,numbers[i]);
//     }
//     array = sizeof(numbers[0]);
//     printf("sizeof: %d",array);
//     return 0 ;

// }

// void myArray(int* numbers)  // tanımlamayı unutma
// {
//     int j=0;
//     for(j=0;j<6;j++){
//         *(numbers+j)*=3;
//     }
// }

// /*örnek*/
// // #include <stdio.h>
// // #include <stdlib.h>
// // #include <math.h>

// // void characterScroll(char* , int); //burda tam tanımlamaya gerek yok
// // int main(void)
// // {
// //     char characters[] = {'H','a','s','a','n'};
// //     int size = sizeof(characters)/sizeof(characters[0]);
// //     characterScroll(characters,size);
// //     return 0 ;
// // }

// // void characterScroll(char* characters, int size)
// // {
// //     int i=0,j=0;
// //     for(i=0;i<size+1;i++){
// //         for(j=i;j<size;j++){//0123456  1234560 2345601
// //             printf("%c", *(characters +j));
// //         }
// //         for(j=0;j<i;j++){// 0 01 012 0123 01234
// //             printf("%c",*(characters + j));
// //         }
// //         printf("\n");
// //     }
// // }



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
//     int *p;
//     int **pp;
//     int val=1903;
//     //p işaretcisine val değeri atanıyor
//     p = &val;
//     // pp işaretcisine p işaretcisinin adresi atanıyor
//     pp = &p;

//     printf("Degerler:\n*************\n");
//     printf("val = %d\n",val);
//     printf("*p = %d\n",*p);
//     printf("**pp = %d\n",**pp);
//     printf("Adresler:\n************\n");
//     printf("&val = %d\n",&val);
//     printf("p = %d\n",p);
//     printf("&p = %d\n",&p);
//     printf("pp = %d\n",pp);

//     return 0 ;
// }


#include <stdio.h>
#include <stdlib.h>

//int main(void)
// {
//     char *pk,k='a';
//     int *pt,t = 22;
//     double *pg,g=5.5;
     
//     pk = &k;
//     pt = &t;
//     pg = &g;

//     printf("Onceki adresler: pk = %p pt = %p pg \n= %p",pk,pt,pg);
//     printf("Onceki degerler: *pk = %c *pt = %d pg \n= %f\n\n",*pk,*pt,*pg);

//     pk++;
//     pt--;
//     pg= pg+10;

//     printf("Sonraki adresler: pk = %p pt = %p pg \n= %p",pk,pt,pg);
//     printf("Sonraki degerler: *pk = %c *pt = %d pg \n= %f\n\n",*pk,*pt,*pg);

//     return 0 ;
// }


// int main(void)
// {
//     int i;
//     int b[] = {10,20,30,40};

//     int *pb = b;

//     printf("YONTEM 1 : DIZI INDISLERI\n");
//     for(i=0;i<=3;i++){
//         printf("b[%d]:\t%d\n",i,b[i]);
//     }

//     printf("\nYONTEM 2: ISARETCI OFFSET\n");
//     for(i=0;i<=3;i++){
//         printf("*(pb+ %d):\t%d\n",i,*pb+i);
//     }

//     printf("\nYONTEM 3: DIZI/ISARETCI OFFEST\n");
//     for(i=0;i<=3;i++){
//         printf("*(b+%d):\t%d\n",i,*(b+i));
//     }

//     return 0 ;
// }


// int main(void)
// {
//     int *ip;
//     int idizi[5] = {6,20,30,65,95};
//     printf("isaretci bellek adresi: %p\n\n",&ip);
//     ip = &idizi[4];
//     printf("isaretcinin icerdigi adres:%p\n",ip);
//     printf("isaretcinin gosterdigi degisken degeri:%d\n\n",*ip);
//     ip-=2;//ip-=(4*sizeof(int));
//     printf("isaretcinin icerdigi adres :%p\n",ip);
//     printf("isaretcinin gosterdigi degisken degeri:%d\n\",*ip);
// }

#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

// int main(void)
// {
//     int *p;
//     p = NULL;

//     printf("\n p isaretcisinin adresi = %p\n\n",p);
//     if(p){
//         printf("p isaretcisi  NULL degil\n");
//     }
//     else
//         printf("p isaretcisi NULL dur");
//     return 0 ;
// }


// int main(void)
// {
//     int *p;
//     int **pp;
//     int val = 1903;

//     //p işaretcisine val adresi atanıyor
//     p = &val;
//     //pp işaretcisine p işaretcisinin adresi atanıyor
//     pp = &p;
    
//     printf("Degerler: \n******\n");
//     printf("val = %d \n",val);
//     printf("*p = %d\n",*p);
//     printf("**pp = %d\n",**pp);
//     printf("Adresler\n**********\n");
//     printf("&val = %p\n",&val);
//     printf("p = %p\n",p);
//     printf("&p = %p\n",&p);
//     printf("pp = %p\n",pp);

//     return 0 ;
// }

/*pointerlerde arttıram işlemi değerin cinsine bağlıdır
    eğer int ise = 4 artar
    eğer char ise = 1 artar
    eğer doubel ise = 8 artar*/
// int main(void)
// {
//     int *ip;
//     int idizi[5] = {6,20,30,65,95};
//     printf("isaretci bellek adresi: %p\n\n",&ip);
//     ip = &idizi[4];
//     printf("isaretcinin icerdigi adres: %p\n\n",ip);
//     printf("isaretcinin gosterdigi degsiken degeri: %d\n\n",*ip);
//     ip-=2;//ip-=(4*sizeof(int))
//     printf("isaretcinin icerdigi adres:&p\n",ip);
//     printf("isaretcinin gosterdigi degisken degeri: %d\n\n",*ip);
//     return 0 ;
// }    

// int main(void)
// {
//     char s[80],*p;
//     p = &s[0];
//     printf("Kucuk harfleri kullanarak bir kelime giriniz: ");
//     gets(s);
//     while(*p){//*p == 0 olana kadar çalışmasını sağlar
//         printf("%c",toupper(*p++));
// //     }
// // }

// int* MinSayiBul(int a[],int boyut);

// int main(void)
// {
//     int a[5] = {4,7,-3,-5,9};
//     int *p,k;
//     //indis dizi ve adresini ekrana bas
//     for(k=0;k<5;k++){
//         printf("%d\t%d\t%p\n",k,a[k],&a[k]);
//     }
//     p = MinSayiBul(a,5);
//     printf("\n En kucuk deger: %d\n",*p);
//     printf("\nEn kucun adres: %p\n",p);
//     return 0 ;
// }

// int* MinSayiBul(int a[],int boyut)
// {
//     int i;
//     int ek, *pek;
//     ek = a[0];
//     for(i=1;i<boyut;i++){
//         if(*(a+i)<ek){
//             ek = *(a+i);
//             pek= (a+i);
//         }
//     }
//     return pek;
// }