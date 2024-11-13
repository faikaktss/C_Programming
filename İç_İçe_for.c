// İÇ İÇE FOR DÖNGÜSÜ

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i , j;

//     for(i=1 ; i<= 4; i++)
//     {

//         for(j=1 ; j<=3 ; j++)
//         {
//             printf("Hello C \n");
//         }
//             printf(".......\n");
//     }
//     return 0 ;

// }


// SORU ÇÖZÜMÜ

//  #include <stdio.h>
//  #include <stdlib.h>

//  int main(void)
//  {
//     int i,j,sharp=0;

//     printf("Enter the number of sharp: ");
//     scanf("%d\n", &sharp);

//      for(i=1; i<=sharp ; i++)
//      {
//         for(j=1; j<=i; j++)
//         {
//             printf("#");
//         }
//             printf("\n");
//      }

//         for(i=1; i<=sharp ; i++)
//      {
//         for(j=sharp; j>=i; j--)
//         {
//             printf("#");
//         }
//             printf("\n");
//      }

//     return 0 ;
//  }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int number, i=1 ,smallestNumber= 0 , largestNumber = 0;

//     do
//     {
//         printf("Enter the number: ");
//         scanf("%d\n", &number);

//         if(number == 0) break;
//         if(number<smallestNumber) smallestNumber
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int first ,second, third , i ,number;
//     first = 1;
//     second = 1;
//     third = 1;

//     printf("Enter a number: ");
//     scanf("%d\n", &number);
//     printf("1 1");
//     for(i=1; i<=number ; i++)
//     {
//          first = second;
//          second = third;
//          third = first + second;
//             if(i<=number-2)
//                 printf("%d ", third);
//     }

//     printf("\n\n %d. eleman: %d\n", i-1, first);
//     return 0 ;
// }


    /* 1
       22
       333
       4444 bunun yap */


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i ,j , number;

//     printf("Enter a number valoue: ");
//     scanf("%d" ,&number);

//     for(i=1; i<=5 ; i++)
//     {
//         for(j=1 ; j<= i ; j++)
//         {
//             printf("%d", i);
//         }
//         printf("\n");
//     }
//     return 0 ;
// }


/*1
  22
  333
  4444
  55555  */

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i , j , number;

//     printf("Enter a number value: ");
//     scanf("%d\n", &number);

//     for(i=1 ; i<=number ; i++)
//     {
//         for(j=1 ; j<= ; j++)
//         {
//             printf("%d", i);
//         }
//     printf("\n");
//     }

//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i , j , number;

//     printf("Enter anumber value: ");
//     scanf("%d", &number);

//     for(i=0; i<3 ; i++)
//     {
//         for(j=1 ; j<=number-i; j++ )
//         {
//             printf("%d", i+1);
//         }
//         printf("\n");
//     }
//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i ,j ,number;

//     printf("Enter a number value: ");
//     scanf("%d\n", &number);

//     for(i=1 ; i<=number ; i++)
//     {
//         for(j=1 ; j<=number; j++)
//         {
//             if(i==1 || i== number || j==1 || j==number)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i,j,number;

//     printf("Enter a number value: ");
//     scanf("%d", &number);

//     for(i=1; i<=number; i++)  // satır sayısını belli eder
//     {
//         for(j=1;j<=number-i;j++)
//         {
//             printf("  ");
//         }
//         for(j=1;j<=i*2-1;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// int main(void)
// {
//     int space , i ,rows;

//     printf("Enter a number of rows: ");
//     scanf("%d", &rows);

//     for(i=0; i<rows ;i++)
//     {
//         for(space=1 ; space<=rows-i; space++)
//         {
//             printf("  ");
//         }
//     printf("7\n");
//     }
//     return 0 ;
// }

#include <stdio.h>
#include <stdlib.h>
#define ORAN 1.609344

// int main()
// {
//     char secim;
//     float mesafe, sonuc;

//     printf("Hangisi? (Mil:M/m veya Kilometre: K/k): ");
//     gets(secim);
//     printf("\n");

//     if((secim=='M')||(secim=='m')){
//         printf("Kac mil yol aldiniz: ");
//         scanf("%f",&mesafe);
//         sonuc =mesafe*ORAN;
//         printf("\n%6.2f Mil = %6.2f Kilometre\n",mesafe,sonuc);
//     }
//     else if{
//         printf("Kac kilometre yol aldiniz: ");
//         scanf("%f",&mesafe);
//         sonuc = mesafe/oran;
//         printf("\n%6.2f Kilometre = %6.2f Mil\n",mesafe,sonuc);
//     }
//     else{
//         printf("Yanlis harf girildi...\n");
//     }
//     return 0 ;
// }



// int main(void)
// {
//     int i=0,j;
//     while(i<5){
//         j = 0;
//         while(j<i+1){
//             printf(" * ");
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
// }

int main(void)
{
    int sayi = 0;
    int n = 0;

    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    printf("\n");
    do{
        n++;
        printf("%d",n);
    }while(n<sayi);
    printf("\n");
    return 0 ;
}