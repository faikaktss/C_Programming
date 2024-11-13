// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int day = 7;
//     switch(day)
//     {
//         case 1 : printf("Monday \n");
//             break; 
//         case 2 : printf("Thusday\n");
//             break;
//         case 3 : printf("Wendasyd\n");
//             break;
//         case 4 : printf("Thursday\n");
//             break;
//         case 5 : printf("Friday\n");
//             break;
//         case 6 : printf("Saturday\n");
//             break;
//         case 7 : printf("Sunday\n");
//             break;
//         default : printf("There is no such day \n");
        
//     }
//     return 0 ;
// }

/* SORU : x == 7 ? 19:(y==12?10:-90)*/

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int x , y , z;
    
//     x = 3;
//     y = 12;

//     switch(x)
//     {
//         case 7 : z  =19;
//             break;
//         default : switch(y)
//                 {
//                     case 12 : z  = 10;
//                         break;
//                     default : z = -20;
//                 }
//     }
    
//     printf("%d\n", z);
//     return 0 ;
// }

/* 2,5,7,10,15,19,25*/

//#include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int urun_sayisi , gün;
//     char dayName ;          // string bir ifade olduğu için char tanımlaması yaptık

//     printf("gün sayisini giriniz(1-7) : ");
//     scanf("%d\n", &gün);

//     switch(gün)
//     {
//         case 1 : urun_sayisi += 2;
//             dayName ="Monday";
//                 break;
//         case 2 : urun_sayisi += 5;
//             dayName = "Thuesday";
//                 break;
//         case 3 : urun_sayisi += 7;
//             dayName = "Wendsday";
//                 break;
//         case 4 : urun_sayisi += 10;
//             dayName = "Thursday";
//                 break;
//         case 5 : urun_sayisi += 15;
//             dayName = "Friday";
//                 break;
//         case 6 : urun_sayisi += 19;
//             dayName = "Saturday";
//                 break;
//         case 7 : urun_sayisi += 25;
//             dayName = "Sunday";
//                 break;
//     }

//     return 0 ;

// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     char my_Operator;
//     int number1 , number2;

//     printf("Operator bilgisini giriniz (/,*,+,-): ");
//     scanf("%c", &my_Operator);

//     printf("Lutfen iki sayiyi giriniz: ");
//     scanf("%d %d",&number1 , &number2);



//     switch(my_Operator)
//     {
//         case '/' : printf("%d", (number1/number2));
//             break;
//         case '*' : printf("%d",(number1 * number2));
//             break;
//         case '+' : printf("%d", (number1 + number2));
//             break;
//         case '-' : printf("%d", (number1 - number2));       // %f girersen çalışmaz çünkü integer bir veridir bu
//             break;
//         default : printf("\nyanlis bir operatör girdiniz");
//             break;
//     }
    
//     return 0 ;
// }

// TEK SAYI VE ÇİFT SAYI BULMA

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int sayi1  ;

//     printf("Lutfen istenen sayi degerini giriniz: ");
//     scanf("%d", &sayi1);

//     switch(sayi1%2)
//     {
//         case 1: printf("Girdigin sayi tek bir sayidir...");
//             break;
//         case 0: printf("Girdigin sayi cit bir sayidir...");
//             break; 
//     }

//     return 0 ;
// }

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    switch(letter)
    {
        case 'a':
        case 'e':
        case 'u':
        case 'o':
        case 'i': 
        printf("%c harfler sesli bir harftir...",letter);
        break;
        default:
        printf("Girdigin harf sessiz bir harf veya harf degil...");
        break;
    }

    return 0 ;
}