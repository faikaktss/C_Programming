// #include <stdio.h>
// #include <stdlib.h>

// void myMassage()        // return ile 0 a dönmek istemiyorsak void fonksiyonunu kullanırız                        // bir fonkisyon sadece çağırıldığında çalı                        // fonksiyonları istediğimizca kullanabilirz
// {
//     printf("Now I can  write  a function");
// }
// void nameList(char name[], int age) //ilk başta burda tanımlıyosun allta okutuyosun 
// {
//     printf("%s. you are %d year old\n",name,age);
// }


// int main()
// {

//     nameList("fehmi",32);
//     nameList("Emre",12);
//     nameList("Faik",14);
//     myMassage();
//     return 0 ;
// // }

// #include <stdio.h>
// #include <stdlib.h>
// void theMassage();
// int sumNumber(int,int);

// int main()
// {
//     int result = sumNumber(5,15);
//     printf("result is %d \n",result);
//     theMassage();
//     return 0 ;
// }

// void theMassage()       // void olduğu için yukarıda tanımlamak lazım okutmak için
// {
//     printf("I love C language");
// }

// int sumNumber(int x,int y)
// {
//     return x+y;
// }



// int sumNumber(int i);

// int main()
// {
//     int result= sumNumber(10);

//     printf("%d\n", result);

//     return 0 ;
// }

// int sumNumber(int i)
// {
//     if(i>0)
//         return i+sumNumber(i-1);
//     else
//     {
//         return 0 ;
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>

// float ust_alma(float x, float y);

// int main()
// {
//     float taban = 0 ,result = 0;
//     int üst = 0;
//     printf("Enter a üst and taban: ");
//     scanf("%f%d", &taban , &üst);
//     result = üst_alma(taban, üst);
//     printf("Result: %f\n", result);
//     printf("Result: %f\n", üst_alma(2,7));
//     return 0 ;
// }

// float ust_alma(float x, int y)
// {
//     float  result = 1;
//     int i ;
//     if(y<0)
//     {
//         for(i=0;i<-y;i++){
//             result*=1/x;
//         }
//         else{    
//             for()
//         }
//     }
    
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>

// void myMassage()
// {
//     printf("Now I can write a funtion");
// }
// void nameList(char name[]){ // burda istediğin kadar parametre alabilirsin  
//     printf("Hello %s\n", name);
// }
// int main()
// {
//     nameList("Faik");   // bunun içine yazdığın şey aslında 
//                         // char name[] olan kısma yazılmış oluyo ordanda pritnf ile yazdırıyosun
//     nameList("Beyza");
//     nameList("Emir taha");
//     myMassage();
//     return 0 ;
// } 


// #include <stdio.h>
// #include <stdlib.h>

// void allNumbers(int myNumbers[6])    // void kullanımında return ile geriye değer döndüremezsin
// {
//     for(int i=0;i<6;i++)
//     {
//         printf("%d\n", myNumbers[i]);
//     }
// }

// int showMe(int x)   /*burda aşağıda x in içine 2 değerini atar sonra return değeriyle fonkisyonu döndürür*/
// {
//     return 5+x;
// }

// int main()
// {
//     // int myNumbers[6] = {10,20,30,40,50,60};
//     // allNumbers(myNumbers);
//     printf("Result is %d\n", showMe(2));
//     return 0 ;
// }

/* VOİD İLE İNT FONSKİYONUN FARKI*/

// #include <stdio.h>
// #include <stdlib.h>

// int showMe(int x)
// {
//     return x+5;
// }

// int sumNumbers(int x, int y)
// {
//     return x+y;
// }

// int main()
// {
//     int myNumber = sumNumbers(1,6)*5;

//     printf("Result is %d\n", myNumber);

//     return 0 ;
// }


// USTA YAZILIMCILARIN YAPTIĞI FONKSİYONLAR

// #include <stdio.h>
// #include <stdlib.h>

// int sumNumber(int,int); // fonskiyonu burda tanımladık

// int main()
// {
//     int result = sumNumber(5,11);
//     printf("result id %d\n", result);
//     return 0 ;
// }
// int sumNumber(int x, int y)
// {
//     return x + y;
// }

//GERİ ÇAĞIRICI FONKSİYONLAR

// #include <stdio.h>
// #include <stdlib.h>

// int sumNumber(int i) ; // burda noktalı virgül kullanmak zorundayız çünkü tanım yapıyorz

// int main()
// {
//     int result = sumNumber(5);
//     printf("Result is %d\n", result);

//     return 0 ;
// }

// int sumNumber(int i)
// {
//     if(i>0)
//         return i+sumNumber(i-1);
//     else
//         return 0;
// }


// ÜS ALMA
// #include <stdio.h>
// #include <stdlib.h>

// int exponentiation(float x , int y);

// int main()
// {
//     float base=0 , result=0; //taban
//     int exponent =0; //üs
//     printf("enter a base and exponent value: ");
//     scanf("%f%d",&base ,&exponent);
//     result = exponentiation(base ,exponent);
//     printf("Result : %f\n", result);
    
//     return 0 ;
// }

// float exponentiation(float x , int y)
// {
//     float result = 1;
//     int i ;
//     if(y<0)
//     {
//         for(i=0;i<-y;i++)
//             result *=1/x;
//     }
//     else{
//     for(i=0;i<y;i++)
//         result*=x;
//     }
//     return result;
// }


// MATEMATİKSEL İŞLEMLER
// #include <stdio.h>
// #include <stdlib.h>

// void menu();    // geriye return dönmeyeceği için void yaptık
// int min(int,int);
// int max(int,int);
// int square(int);
// int cube(int);
// int absolute(int);

// int main()
// {
//     int choose=0,x,y;
//     menu();
//     printf("\nChoose a number(1-5)");
//     scanf("%d",&choose);
//     printf("\n");
//     switch(choose)
//     {
//         case 1 : printf("Enter two numbers: ");
//                  scanf("%d%d", &x,&y);
//                  printf("Min: %d\n",min(x,y));
//         break;
//         case 2 : printf("Enter two numbers: ");
//                  scanf("%d%d", &x,&y);
//                  printf("Max: %d\n", max(x,y));
//         break;
//         case 3: printf("Enter a number: ");
//                 scanf("%d", &x);
//                 printf("Square: %d\n", square(x));
//         break;
//         case 4: printf("Enter a number: ");
//                 scanf("%d", &x);
//                 printf("cube: %d\n", cube(x));
//         break;
//         case 5: printf("Enter a number: ");
//                 scanf("%d",&x);
//                 printf("absolute: %d\n", absolute(x));
//         break;
//     default: printf("Yanlis bir sayi degeri girdiniz!!!");
//     }

//     return 0 ;
// }

// void menu()
// {
//     printf("\n");
//     printf("*********\n");
//     printf("*    MENU    *\n");
//     printf("*********\n\n");
//     printf("1- Minimum\n");
//     printf("2-Maksimum\n");
//     printf("3-Kare al\n");
//     printf("4- Küp al\n");
//     printf("5- Mutlak değer al\n");
// }

// int min(int x , int y)
// {
//     if(x<y)
//         return x;
//     else    
//         return y;
// }

// int max(int x , int y)
// {
//     if(x>y)
//         return x;
//     else
//         return y;
// }
// int square(int x)
// {
//     return x*x;
// }
// int cube(int x)
// {
//     return x*x*x;
// }
// int absolute(int x)
// {
//     if(x<0)
//         return x*(-1);
//     else
//         return x;
// }


// YEREL VE GLOBAL DEĞİŞKENLER
// #include <stdio.h>
// #include <stdlib.h>

// void Increase();
// void Decrease();
// int x = 7;

// int main()
// {
//     printf("x: %d\n",x);
//     Increase();
//     printf("x:%d\n",x);
//     Decrease();
//     Decrease();
//     Decrease();
//     printf("x:%d\n",x);
// }

// void Increase()
// {
//     x++;
// }
// void Decrease()
// {
//     x--;
// }

// DÖRT BASAMAKLI SAYIYI YAZIYA ÇEVİRME

// #include <stdio.h>
// #include <stdlib.h>

// void BirlikCevir();
// void OnlukCevir();

// int main()
// {
//     int number = 0 ,d1,d2,d3,d4;
//     while(number!=-1)
//     {
//         printf("Enter a four digit number: ");
//         scanf("%d",&number);
 //        if(number==-1) break;
//         d1=number%10; // birler
//         d2=(number%100)/10; //onlar
//         d3=(number%1000)/100; //yüzler
//         d4=number/1000; //binler
//         if(d4!=1) BirlikCevir(d4);
//         printf(" Bin ");
//         if(d3!=1) BirlikCevir(d3);
//         if(d3!=0) printf(" Yuz ");
//         OnlukCevir(d2);
//         printf(" ");
//         BirlikCevir(d1);
//         printf("\n\n");
//     }

//     return 0 ;
// }

// void BirlikCevir(int number)
// {
//     switch(number)
//     {
//         case 1:printf("Bir"); break;
//         case 2:printf("İki"); break;
//         case 3:printf("Uc"); break;
//         case 4:printf("Dort"); break;
//         case 5:printf("Bes"); break;
//         case 6:printf("Alti");break;
//         case 7:printf("Yedi");break;
//         case 8:printf("Sekiz");break;
//         case 9:printf("Dokuz");break;
//     }
// }

// void OnlukCevir(int number)
// {
//     switch(number)
//     {
//         case 1:printf("on"); break;
//         case 2:printf("Yirmi"); break;
//         case 3:printf("Otuz"); break;
//         case 4:printf("Kirk"); break;
//         case 5:printf("Elli"); break;
//         case 6:printf("Altmis");break;
//         case 7:printf("Yetmis");break;
//         case 8:printf("Seksek");break;
//         case 9:printf("Doksan");break;
//     }
// }
// #include <stdio.h>
// #include <stdlib.h>

// void BirlikCevir();
// void OnlukCevir();

// int main(void)
// {
//     int number , d1,d2,d3,d4,d5;
//     while(number!=-1){
//     printf("Bes basamakli bir sayi giriniz: ");
//     scanf("%d",&number);
//     if(number==-1) break;
//     d1= number%10; //birler
//     d2= (number%100)/10; //onlar
//     d3= (number%1000)/100; //yüzler
//     d4= (number%10000)/1000; // binler
//     d4= number /10000;
//     if(d5!=1) OnlukCevir(d5);
//     if(d4!=0) BirlikCevir(d4);
//     printf(" Bin ");
//     if(d3!=1) BirlikCevir(d3);
//     if(d3!=0) printf(" Yuz ");
//     OnlukCevir(d2);
//     printf("\n");
//     BirlikCevir(d1);
//     printf("\n\n");
//     }
//     return 0 ;
// }

// void BirlikCevir(int number)
// {
//     switch(number)
//     {
//         case 1:printf("Bir");break;
//         case 2:printf("İki");break;
//         case 3:printf("Uc");break;
//         case 4:printf("Dort");break;
//         case 5:printf("Bes");break;
//         case 6:printf("Alti");break;
//         case 7:printf("Yedi");break;
//         case 8:printf("Sekiz");break;
//         case 9:printf("Dokuz");break;
//     }
// }

// void OnlukCevir(int number)
// {
//     switch(number)
//     {
//         case 1:printf("On");break;
//         case 2:printf("Yirmi");break;
//         case 3:printf("Otuz");break;
//         case 4:printf("Kirk");break;
//         case 5:printf("Elli");break;
//         case 6:printf("Altmis");break;
//         case 7:printf("Yetmis");break;
//         case 8:printf("Seksen");break;
//         case 9:printf("Doksan");break;
//     }
// }

// FAKTÖRİYEL HESAPLAMA

// #include <stdio.h>
// #include <stdlib.h>

// int factorial();

// int main(void)
// {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d",&number);

//     printf("%d = %d\n", number , factorial(number));
//     return 0 ;
// }

// int factorial(int number)
// {
//     if(number == 0)
//         return 1;
//     else
//         return number*factorial(number-1);
// }

// SICAKLIK BİRİMİ DÖNÜŞTÜRME

// #include <stdio.h>
// #include <stdlib.h>

// int CelToFah(int);
// int FahToCel(int);

// int main(void)
// {
//     char choose;
//     int number;
//     printf("Fahrenheit -> Celcius icin c\n");
//     printf("Celcius --> Fahrenheit icin f\n");
//     printf("Seciminizi yapiniz: ");
//     scanf("%c", &choose);
//     switch(choose)
//     {
//         case 'c': printf("Fahrenheit degerini giriniz: ");
//                   scanf("%d",&number);
//                   printf("Celceius degeri : %d\n", FahToCel(number));
//                   break;
//         case 'f': printf("Celcius degerini girinz:");
//                   scanf("%d", &number);
//                   printf("Fahrenheit degeri : %d\n",CelToFah(number));
//                   break;
//         default:printf("Yanlis bir deger girdiniz !!!");  
//     }
// }

// int CelToFah(int c)
// {
//     return (c*9/5+32);
// }
// int FahToCel(int f)
// {
//     return ((f-32)*5/9);
// }


// BAZI MATEMATİKSEL FONKSİYONLAR



// int main(void)
// {
//     int i ;
//     for(i=0;i<5;i++)
//     {
//         printf("e uzeri %d:%.2f\n",i,exp2(i)); // exp(i)= e nin i. kuvveti ,exp2(i) = 2nin i. kuvveti
//     }
//     return 0 ;
    
// }
// int main(void)
// {
//     int i ;
//     for(i=0;i<20;i++)
//     {
//         printf("karekok %d:%f\n",i,sqrt(i)); // karekök fonksiyonuda sqrt fonskiyonu ile çalışır
//     }
//     return 0 ;
// }
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// int main(void)
// {
//     int number1 , number2;
//     printf("Enter two number : ");
//     scanf("%d %d", &number1, &number2);
//     printf("%d uzeri %d: %.2f\n", number1, number2,pow(number1 ,number2)); // üs alma fonksiyonları

//     return 0 ;
// }
 
// int main(void)
// {
//     double x = 6.20, result;
//     result = cbrt(x);   // küp kök alma fonksiyonu
//     result = ceil(x);   // ondalıklı sayıyı yukarı yuvarlamak için kullanılır
//     result = floor(x);  // ondalıkıl olan sayiyi bir alt sayıya yuvarlar
//     result = fabs(x);   // girilen sayiyinin mutlak değerini verir bize
//     printf("Result:%.2f\n", result);

//     return 0 ;   
// }

// FDİM KODU NASIL ÇALIŞIR

// int main(void)
// {
//     double x=7 , y=19 , z = 3 ,result;
//     result = fabs(x);
//     printf("%.2f ve %.2f sayilarinin farki: %.2f\n",x,y,fdim(x,y));
//     printf("%.2f ve %.2f sayilarinin farki: %.2f\n",x,z,fdim(x,z));
//     /*fdim kodu iki float değeri çıkartır pozitif se aynen söyler negatifse 0 değerine eşitler*/
//     // hypot fonksiyonuda girdiğin sayıların hipotenüslerini alır
//     return 0 ;
// }

// isfinite fonksiyonu

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// /*FOnksiyonun amacı sonsuz bir sayı olup olmadığını kontrol etmek 
//   Eğer sonsuz bir sayı değilse 1 sonsuz bir sayıysa 0 değerini döndürür*/

// // isgreater fonksiyonu iki şeyi karşılaştırmak için kullanılır
// int main(void)
// {
//     double x=19,y=0.12,z=7.14/0.00;

//     printf("%.2f degeri sonsuz  bir deger %s\n",x,isfinite(x)? "degildir":"dir");
//     printf("%.2f degeri sonsuz  bir deger %s\n",y,isfinite(y)? "degildir":"dir");
//     printf("%.2f degeri sonsuz  bir deger %s\n",z,isfinite(z)? "degildir":"dir");

//     return 0 ;
// }


// RASTGELE SAYI ÜRETME FONKSİYONU

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     int i , number;
//     srand(time(NULL));  // bu ise her sayiların farklı okunması için yazılan koddur
//     for(i=0;i<10;i++)
//     {
//         number = rand()%10; //%10 un anlamı 0 ile 9 arasında rastgele sayı üretmek anlamına gelir
//         //number = rand();
//         number = rand()%6+1; //buda 1 ile 6 arasında bir sayi verir 
//         printf("%d. rasgele sayi : %d\n", i, number);
//     }
//     return 0 ;
// }

/* Sayı tahmin oyunu*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     int randomNumber, guessNumber,guessCount,score=100;
//     srand(time(NULL));
//     randomNumber = (rand()%100) +1;
//     printf("1 ile 100 arasinda bir sayi tuttum\n");
//     printf("Tahmin et :)\n");

//     while(guessNumber!=1)
//     {
//         printf("Tahmin sayisini giriniz: ");
//         scanf("%d", &guessNumber);
//         if(guessNumber==-1) break;
//         if(guessNumber<1 || guessNumber >100)
//         {
//             printf("i ile 100 arasinda bir sayi gir dedim pezevenk\n");
//             continue;
//         }// if end
//         guessCount++;
//         if(guessNumber==randomNumber){
//             printf("Afferin amk %d. defada sonunda bildin", guessCount);
//             break;}
//         else{
//             if(guessNumber>randomNumber)
//                 printf("Daha kücük bir sayi girmelisin!!!\n");
//             else
//                 printf("Daha büyük bir sayi girmelisin!!!\n");
//             score-=10;
//         }

//     }// while end
//     printf("\n Puanin 100 üzerinden %d\n", score<0 ? 0: score);
//     return 0 ;
// }

/*getchar ve putchar fonksiyonunun kullanımı*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     char myKey;
//     printf("Bir tusa basiniz:");
//     myKey = getchar();  // ekrana bir harf yazdırmak için bu fonksiyonu kullanırız
//     myKey = putchar(54);  // buda o sayinin ascıı kodunu söyler 
//     printf("%c tusuna bastiniz\n", myKey);
//     printf("tusun ASCII kodu : %d\n", myKey);
//     printf("%c tusuna bastiniz\n",&putchar);
//     printf("tusun ASCII kodu : %d\n", myKey);
//     putchar(65);
//     return 0 ;
// }

/*TİP SORGULAMA FONSKİYONLARI*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <ctype.h>

// int main(void)
// {
//     int number;
//     printf("Enter a number (0-255): ");
//     scanf("%d",&number);
//     printf("\n the character you entered:%c\n", number);
//     if(isalnum(number)) // A-Z , a-z, 0-9
//                         // isalpha da ise sadece büyük ve küçük harfler vardır
//                         // isdigit ise sadece rakamları ister
//                         // islower sadece küçük harf olup olmadığını kontrol eder
//                         // toupper küçük harfi büyük harfe çevirir
//                         // tolower büyük harfi küçük harfe çevirmektir
//         printf("correct\n");
//     else
//         printf("wrong\n");

//     return 0 ;
    
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int maximum(int,int,int);
// int main(void)
// {
//     int a,b,c;
//     printf("3 tam sayi giriniz: ");
//     scanf("%d%d%d",&a,&b,&c);
//     printf("Maximum:%d\n",maximum(a,b,c));
//     return 0 ;
// }

// int maximum(int x,int y,int z)
// {
//     int max = x;
//     if(y>max)
//         max =y;
//     if(z>max)
//         max = z;
//     return max;
// }

// #include <stdio.h>
// void bNotu(int vize, int final)
// int main(void)
// {
//     int vize, final;
//     printf("Yil sonu notu hesaplanacak ogrencinin\n");
//     printf("vize ve final notunu giriniz");
//     scanf("%d%d",vize,final);
//     bNotu(vize,final);
//     return 0 ;
// }
// void bNotu(int vize, int final)
// {
//     float ort;
//     ort = vize*0.4 + final*0.6;
//     printf("Basari notu = %2.f\n",ort);
// }


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// void kelimeBirlestir(char c1[], char c2[]);
// int main(void)
// {
//     char kelime1[50],kelime2[50];
//     printf("Lütfen 1. kelimeyi giriniz: ");
//     gets(kelime1);
//     printf("Lütfen 2. kelimeyi giriniz: ");
//     gets(kelime2);
//     kelimeBirlestir(kelime1,kelime2);
//     return 0 ;
// }

// void kelimeBirlestir(char c1[], char c2[])
// {
//     int i,j=0;
//     for(i=strlen(c1);i<strlen(c1) + strlen(c2);i++)//i=4 4<9
//     {
//         c1[i] = c2[j];
//         j++;
//     }
//     printf("\nEkran ciktisi: %s\n",c1);
// }

// int func(int num)
// {
//     int res = 0;
//     if(num<0){
//         printf("\nhata!\n");
//     } 
//     else if(num == 1)
//     return num;
//     else{
//         res = num * func(num-1);
//         return res;
//     }
// }

// int main(void)
// {
//     int num = 5;
//     int fact = func(num);
//     if(fact > 0)
//     printf("\n[%d] in faktöriyeli : [%d]\n",num,fact);
//     return 0 ;
// }

// int Fibonacci(int);

// int main(void)
// {
//     int n,i=0,c;
//     scanf("%d",&n);
//     printf("Fibonacci Sayilari: \n");
//     for(c=1;c<=n;c++){
//         printf("%d\n",Fibonacci(i));
//         i++;
//     }
//     return 0 ;
// }

// int Fibonacci(int n)
// {
//     if(n==0)
//         return 0 ;
//     else if(n == 1)
//         return 1;
//     else
//         return(Fibonacci(n-1)+Fibonacci(n-2));
// }
// int usAlma(int ,int);
// int main(void)
// {
//     int taban = 4;
//     int us = 3;
//     int sonuc;
//     sonuc = usAlma(taban,us);
//     printf("(%d)^%d = %d\n",taban,us,sonuc);
//     return 0 ;
// }

// int usAlma(int taban, int us)
// {
//     if(us==0)
//         return 1;
//     return taban* usAlma(taban,(us-1));
// }

// int carpmaIslemi(int x, int y);
// int main(void)
// {
//     int sayi1 = 15;
//     int sayi2 = 6;
//     int sonuc = carpmaIslemi(sayi1,sayi2);
//     printf("%d * %d = %d\n",sayi1,sayi2,sonuc);
//     return 0 ;
// }

// int carpmaIslemi(int x ,int y)
// {
//     if(y==0)
//         return 0 ;
//     return x + carpmaIslemi(x,(y-1));
// }


// int asalSayi(int,int);
// int main(void)
// {
//     int sayi=29;
//     int sonuc = asalSayi(sayi,sayi/2);
//     if(sonuc == 0)
//         printf("%d asal sayi degildir",sayi);
//     else
//         printf("%d asal sayidir",sayi);
//     return 0 ;
// }

// int asalSayi(int x, int i)//x=29 , i = 29/2
// {
//     if(x<2)
//         return 0;
//     if(i == 1)
//         return 1;
//     if(x%i ==0) 
//         return 0;
//     return asalSayi(x,i-1);
// }
#include <stdio.h>
#include <stdlib.h>
/*toupper = küçük harfleri büyük harfşere döndürme*/
// int main(void)
// {
//     char cumle[100];
//     int i;

//     printf("Lutfen cumleyi giriniz: ");
//     gets(cumle);

//     cumle[0] = toupper(cumle[0]);
//     for(i=0;i<strlen(cumle);i++){
//         if(cumle[i] == ' ')
//             cumle[i+1] = toupper(cumle[i+1]);
//     }
//     printf("\n Duzenlenen Cumle: %s\n",cumle);
//     return 0 ;
// }

/*tersten yazdırma*/
// int main(void)
// {
//     char cumle[100];
//     int i;

//     printf("Lutfen bir cumle giriniz: ");
//     gets(cumle);//10 karakterli bir cümle girdiğimizi varsayalım

//     for(i=strlen(cumle);i>=0;i--){
//         printf("%c",cumle[i]);
//     }
//     return 0 ;
// }


/*Girilen cümlede istediğin harfi bulmak*/
// int main(void)
// {
//     char cumle[100], harf;
//     int i,harf_sayisi = 0,harf_Pozisyon[50];
//     printf("Lutfen cumleyi giriniz: ");
//     gets(cumle);
//     printf("\n");
//     printf("Lutfen aranacak harfi giriniz: ");
//     scanf("%c",&harf);
//     for(i=0;i<=strlen(cumle);i++){
//         if(cumle[i] == harf){
//             harf_Pozisyon[harf_sayisi] = i;
//             harf_sayisi++;
//         }
//     }
//     if(harf_sayisi == 0){
//         printf("aradiginiz harf bunulanamadi...");
//     }
//     else{
//         printf("Toplam bulunan harf sayisi: %d\n",harf_sayisi);
//         for(i=0;i<harf_sayisi;i++){
//             printf("Cumledeki pozisyon: %d\n",harf_Pozisyon[i]);
//         }
//     }
//     return 0 ;
// }


/*srand fonksiyonu*/

// int main(void)
// {
//     int x,i;
//     srand(500);
//     for(i=1;i<=5;i++){
//         x = 1 + rand()%6;
//         printf("%d. sayi =%d\n",i,x);
//     }
//     return 0 ;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*dışarıdan girilen 3 değerin hangisi daha büyüktür*/
// int maximum(int, int ,int);
// int main(void)
// {
//     int a,b,c;
//     printf("3 tam sayi giriniz: ");
//     scanf("%d%d%d",&a,&b,&c);
//     printf("Maximum: %d\n",maximum(a,b,c));
//     return 0 ;
// }

// int maximum(int x, int y, int z)
// {
//     int max = x;
//     if(y>max)
//         max = y;
//     if(z>max)
//         max = z;
//     return max;
// }

/*void değer döndğrmeyen fonksiyonlar*/
// void kare();
// int main()
// {
//     kare();
// return 0 ;
// }
// void kare()
// {
//     int x,karesi;

//     printf("Karesi hesaplanacak sayiyi giriniz: ");
//     scanf("%d",&x);
//     karesi = x*x;
//     printf("%d nin karesi %d\n",x,karesi);
// }

/*iki kelime birleştirme*/

// void Kelime_Birlestir(char c1[], char c2[]);
// int main(void)
// {
//     char kelime1[50], kelime2[50];
//     printf("Lütfen 1. kelimeyi giriniz: ");//4 kelime girdik farzet
//     gets(kelime1);
//     printf("Lütfen 2. kelimeyi giriniz: ");//5 kelime girdik farzet
//     gets(kelime2);

//     Kelime_Birlestir(kelime1,kelime2);
//     return 0 ;
// }

// void Kelime_Birlestir(char c1[], char c2[])
// {
//     int i, j= 0;
//     for(i=strlen(c1); i<strlen(c1) + strlen(c2);i++){
//         c1[i] = c2[j];
//         j++;
//     }
//     printf("\nEkran Ciktisi: %s\n",c1);
// }

/*kutu çizmek*/
// void kutu_ciz(int satir, int sutun);
// int main(void)
// {
//     kutu_ciz(10,30);
//     return 0;
// }

// void kutu_ciz(int satir, int sutun)
// {
//     int j;
//     for(; satir>0; satir--){
//         for(j=sutun;j>0;j--){
//             printf("*");
//             printf("\n");
//         }
//     }
// }


// int Fibonacci(int);
// int main(void)
// {
//     int n, i = 0,c;
//     scanf("%d",&n);
//     printf("\nFibonacci sayilari\n");
//     for(c=1;c<=n;c++){
//         printf("%d\n",Fibonacci(i));
//     i++;
//     }
//     return 0;
// }

// int Fibonacci(int n)
// {
//     if(n==0)
//         return 0 ;
//     else if(n==1)    
//         return 1;
//     else 
//         return (Fibonacci(n-1)+Fibonacci(n-2));
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>

// int ekok(int a, int b);

// int main(void)
// {
//     int a,b,s;
//     printf("Iki tam sayi giriniz: ");
//     scanf("%d%d",&a,&b);
//     if(a>b)
//     s=ekok(a,b);
//     else
//     s=ekok(b,a);
//     printf("Girilen sayilar icin ekok:%d\n",s);
//     return 0 ;
// }

// int ekok(int a, int b)
// {
//     static int temp= 0;
//     if(temp%b==0 && temp%a==0)
//     return temp;
//     temp++;
//     ekok(a,b);
//     return temp;
// }