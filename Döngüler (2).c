// WHILE DÖNGÜSÜ

#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
//     int i = 1;

//     while(i <= 5)           /* bunun içine giren sayı döngüye giriyor
//                                yani i 5 den küçük veya eşit olana kadar 
//                                while döngüsünün içinde dönmeye devam ediyor
//                                5 ten büyük olduğu zaman ise döngüden çıkıyor */
//     {
//         printf("%d\n", i);
//         i++;
//     }
//     return 0 ;
// }


// int main(void)
// {
//     int i = 1;

//     while(i<=7)         /*bunun mantığıda i sayısı 7 den küçük veya eşit olana kadar 
//                           printf ile yazılan şeyi yazdır demek istiyo*/
//     {
//         printf("C is fantastic leangueage\n");
//         i++;
//     }
//}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i;
//     i = 2;         

    // yazımı şu şekildedir               // do while ın özelliği normalde bu koşul döngüye girmez 
                                          // ama do whlie ile ilk başta doğruluğuna bakmaksızın döngüye alır
//     do                                    // sonra doğruluğuna bakar aradaki ince fark bu                       // ilk başta döngüye girmez ama do komutuyla doğruu veya yanlış olmasına bakmaz                             // direk içine alır
//     {
//         printf("%d\n", i);
//         i++ ;
//     }
//     while(i<=7);

//     return 0 ;                             

// }


// FOR DÖNGÜSÜ

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i ;

//     for(i = 0; i < 7 ; i++) /* for içinde 3 tane değere ayrılır:
//                                 ilk değer benim ifadem hani değerle başlıyor anlamına gelir
//                                 2. değerde koşulu belirtir
//                                 3. değerde sayacı belirtir*/
//     {
//         printf("%d\n",i);
//     }

//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

//  int main(void)
//  {
//      int i ;
//      for(i=0; i<=10 ; i++)
//      {
//          if(i==7)
//          {
//              continue;  /*continue ifadesinden sonraki ifadeleri görmez ve bi kereliğine onu atlar amacı budur*/
//          }
//      printf("%d\n", i);
//      }
//  }
//     return 0 ;
// }

// int main(void)
// {
//     int i ;
//     i = 0;

//     while(i<=10)
//     {
//         if(i == 5)
//         {
//             break;
//         }
//     printf("%d\n", i);
//     i++;
//     }
// }


/* GİRİLEN SAYININ ASAL OLUP OLMADIĞIN BULAN PROGRAM*/

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int number , i ;
//     number = 0;
//     i = 2;

//     printf("Enter a number: ");
//     scanf("%d\n", &number);

//     if( number < 0 )
//     {
//         printf("please enter a positive number");
//         return 0 ;
//     }

//     while(i < number / 2)
//     {
//         if(number%i == 0)
//         {
//             printf("%d divided by %d so it can't  be a prime", number, i);
//             return 0 ;
//         }
//         i++;
//     }
//     printf("%d is a prime number",number);
//     return 0 ;
// }


/* GİRİLEN SAYININ ASAL OLUP OLMADIĞIN BULAN PROGRAM*/

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i , j , number , control;
//     printf("Enter a number: ");
//     scanf("%d\n", &number);

//     for(i=2 ; i<=number; i++)
//     {
//         control = 1;
//         for(j=2 ; j<=i/2 ; j++)
//         {
//             if(i%j==0)
//             {
//                 control = 0;
//                 break;
//             }
//         }
//     if(control != 0 )
//     {
//         printf("%d\n", i);
//         break;
//     }
//     }
//     return 0 ;
// }

// GİRİLEN NOTLARIN ORTALASMINI BULAN PROGRAM

// #include <stdio.h>
// #include <stdlib.h>

// int main(void){
//     int i ;
//     float  examGrade , sumGrade, avarage;

//     i = 1;
//     examGrade = 0.0;
//     sumGrade = 0.0;
//     avarage = 0.0;

//     do{
//         printf("%d the exam grade: ",i);
//         scanf("%f\n", &examGrade);
//         if(examGrade == 0){
//             break;
//         }
//         if(examGrade < 0 ){
//             printf("please enter a positive number...\n");
//             continue;
//         }
//         else{
//             sumGrade += examGrade;
//         }
//         i++;
        
//     }while(examGrade != 0); // girilen sayi 0 a eşit olana kadar çalıtır demektir bunun anlamı
//     avarage = sumGrade / (i-1);
//     printf("\n you entered %d exam grades\n", (i-1));
//     printf("avarege %f\n",avarage);


//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i ;
//     double wheat = 1;
//     double sumWheat = 0;

//     for(i = 1 ; i <= 64; i++)
//     {
//         printf("%d kare icin bilgine verilecek bugday sayisi : %20.f\n", i , wheat);
//         sumWheat += wheat;
//         wheat *= 2;
//     }
//     printf("\n bilgine verliecek toplam bugday sayisi : %20.f\n", sumWheat);

//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i , factoriel , number;
//     factoriel = 1;

//     printf("Enter a number: ");
//     scanf("%d\n", &number);

//     for(i=1; i<= number ; i++)
//     {
//         factoriel *= i ;
//     }
//     printf("%d = %d\n", number , factoriel);
//     return 0 ;
// }

        // pascal üçgeni yapımı

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int space , i , rows,j,number;
//     printf("Enter the number of rows: ");
//     scanf("%d",&rows);

//     for(i=0; i<rows; i++)   // bu for döngüsünün amacı satır sayısını belirlemek
//     {
//         for(space=1; space<=rows-i;space++){
//             printf("  ");
//         }
//         for(j=0;j<=i; j++){
//         if(j==0 || i ==0)
//         number = 1;
//         else
//         number = number*(i-j+1)/j;
        
//         printf("%4d",number);
// //         }
// //     printf("\n");
// //     }
// //     return 0 ;
// // }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i, j, row, a=0;     // a değişkeni burda boşlukları tutsun
//     char myLitter;

//     printf("Enter a myLitter: ");   // Hangi harfi gireceğimizi seçiyoruz
//     scanf("%c" ,&myLitter);
//     printf("Please enter the number of row (odd number): ");    // kaç satır olacağını seçiyorz
//     scanf("%d", &row);
//     for(i=0;i<row;i++)
//     {
//         if(i<=row/2)    /*bu if else sayesinde boşlukları belirtmiş olduk*/
//             a++;        
//         else
//             a--;
//         for(j=1; j<a; j++)
//             printf("  ");

//         printf("%c\n", myLitter);

//     }

//     return 0 ;
// }