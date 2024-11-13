#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// int main(void)
// {
//     int notes[3];
//     notes[0] = 7;
//     notes[1] = 19;  // dizileri bu şekildede tanımlayabiliriz...
//     notes[2] = 24;

//     int i, sum;     
//     sum = notes[0] + notes[2];  //dizilerde toplama yapabiliriz...
//     printf("%d\n",sum);

//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     // double avarage=0, numbers[3];

//     // printf("Enter three numbers: ");
//     // scanf("%lf %lf %lf", &numbers[0], &numbers[1], &numbers[2]);

//     // avarage = (numbers[0] +numbers[1] +numbers[2]) /3 ;
//     // printf("avarage: %.3f\n", avarage);

//     // return 0 ;

//     int i , Square[5];      // girilen sayıya kadar olan tüm sayıların karelerini alan bi c programı

//     for(i=0;i<5;i++)
//     {
//         Square[i] = i*i;
//         printf("Square[%d]:%d\n",i,Square);
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     double Degerim , Dizim[10];
//     int Secim,index;
//     do
//     {
//         printf("Make a choice (-1 to Exit )\n");
//         printf("\t1. Write to array\n");
//         printf("\t2. Read from array\n");
//         scanf("%d", &Secim);
//         if(Secim ==-1) break;
//         if(Secim != 1 && Secim !=2)
//         {
//             printf("Benimle dalga mi geciyon aq ?");
//             continue;
//         }
//         printf("Dizinin kac elemanli olacagini giriniz: ");
//         scanf("%d", &index);
//         if(index<0 || index >9)
//         {
//             printf("Söylenen deger araliginda bir index degeri giriniz");
//             continue;
//         }
//         switch(Secim)
//         {
//             case1: printf("\n Enter the Degerim: ");
//                    scanf("%lf", &Degerim);
//                    Dizim[index] = Degerim;
//                    printf("Yazdirma isleminiz basarili\n\n:)");
//                    break;
//             case2: printf("Dizim[%d]: %.2f\n\n", index, Dizim[index]);
//                    break;
//         }
        
//     }while(Secim !=-1);      // döngünün devam etme koşulunu buraya yazıyosun  
//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     char name[20];
//     printf("Enter your name: ");
//     gets(name);     /*gets scanf görevinde kullanılır fakat scanf boşluktan sonrasını 
//                       okumadığı için gets kullanılır bu sayede istedğimiz kadar karakter yazabiliriz  */

//     printf("\n Your name is %s\n", name);

//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     int i,dice,howMany[7];
//     srand(time(NULL));  // rastgele sayılarda bunları anlattı zar çekildiği zaman rastgele sayı gelmesini sağlıyor

//     for(i=1; i<=100; i++)
//     {
//         dice = rand()%6+1; // 1 ile 6 arasında rastgele sayıları getirir
//     }
// }


// int main(void)
// {
//     int numbers[7],i;

//     printf("Enter array numbers: ");
//     for(i=0;i<7;i++)
//     {
//         scanf("%d", &numbers[i]);
//     }
//     printf("\n Original order: ");
//     for(i=0;i<7;i++)
//     {
//         printf("%d ", numbers[i]);
//     }
//     printf("Reverese order: ");
//     for(i=6;i<=0;i--)
//     {
//         printf("%d ", numbers[i])
//     }
//     return 0 ;

// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// /*Dışarıdan arraya girilecek eleman sayisi girilsin ve bu sonra array sayilarini girsin
//   Bunun sonucunda  tek sayilarla cift sayiları ayrı ayrı ekrana yazdırın.   */

// int main(void)
// { 
//     int i , unit;       //unit burda dizinin kaç elemanlı olacağını belirtiyor
//     int numbers[100];

//     printf("Enter a positive unit: ");
//     scanf("%d", &unit);

//     printf("\n Enter array numbers: ");
//     for(i=0;i<unit;i++)
//     {
//         scanf("%d", &numbers[i]);
//     }
//     printf("Odd numbers:");
//     for(i=0;i<unit;i++)
//     {
//         if(numbers[i]%2==1)
//         printf("%d ", numbers[i]);
//     }
//     printf("\nEven numbers: ");
//     for(i=0;i<unit;i++)
//     {
//         if(numbers[i]%2==0)
//         printf("%d ", numbers[i]);
//     }

//     printf("\n");
//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// /*Bir sınıf en fazla 100 öğrenciden oluşabilir sınıfta bulunan öğrenci sayisini girdi olarak alıp
//   her öğrencinin okul numarasi ile notunu iki ayrı arraya okutalım sonuc olarak en düşük ve en yüksek notu alan
//   öğrenciler ekrana yazdirilsin  */

// int main(void)
// {
//     int size , i,big=0,small=100,bigIndex,smallIndex;
//     int notes[100], studentNo[100];

//     printf("Enter class of size: ");
//     scanf("%d", &size);

//     for(i=0;i<size;i++)
//     {
//         printf("Student No and note: ");
//         scanf("%d %d", &studentNo[i],&notes[i]);    
//     }
//     for(i=0;i<size;i++)
//     {
//         if(notes[i]>big)
//         {
//             big = notes[i];
//             bigIndex = i;
//         }
//         if(notes[i]<small)
//         {
//             small = notes[i];
//             smallIndex = i;
//         }
//     }
//     printf("%d numarali ogrenci en yüksek notu %d almistir\n", studentNo[bigIndex],big);
//     printf("%d numarali ogrenci en düsük notu %d almistir", studentNo[smallIndex], small);

//     return 0 ;
// }

/*Dizimizin kaç elemanlı olduğunu bulmak için kurduğumuz program*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// int main(void)
// {
//     int i,dizi[5] = {10,20,30,40,50};
//     for(i=0;i<5;i++){
//         dizi[i] = 3*dizi[i];
//         printf("dizinin carpilmis hali: %d\n",dizi[i]);
//     }

//     return 0 ;
// }

// int main(void)
// {
//     int dizi[10];
//     int i,j;

//     for(i=0; i<10; i++){
//         printf("%d. sayiyi giriniz:",i+1);
//         scanf("%d",&dizi[i]);
//         if(dizi[i] == 0 )
//             break;
//         j = i;
//     }

//     for(i=0 ;i<=j;i++){
//         printf("%d \n",dizi[i]);
//     }

//     return 0 ;
// }


// int main(void)
// {
//     int i,j,N,temp;
//     printf("N degerini giriniz: ");//dizinin kaç terimli olacağını gösterir
//     scanf("%d",&N);
//     printf("\n");

//     int dizi[N];//dizi  = 10
//     for(i=0;i<N;i++){//dizinin elemanlarını burda sıralıyosunuz
//         printf("%d. sayiyi giriniz:",i+1);
//         scanf("%d",&dizi[i]);
//     }

//     for(i=0;i<N-1;i++){
//         for(j=0;j<N-i-1;j++){
//             if(dizi[j]>dizi[j+1]){
//                 temp =dizi[j];
//                 dizi[j] = dizi[j+1];
//                 dizi[j+1] = temp;
//             }
//         }
//     }
//     printf("\n");
//     for(i=0;i<N;i++){
//         printf("%d\t",dizi[i]);
//     }
//     printf("\n");
//     return 0 ;
// }

// int main(void)
// {
//     int i,N;
//     printf("Bir n degeri giriniz:");
//     scanf("%d",&N);
//     printf("\n");

//     int dizi[N];

//     for(i=0;i<N;i++){
//         dizi[0] = 0;
//     }
//     for(i=0;i<N;i++){
//         printf("%d",i,dizi[i]);
//     }
//     printf("\n");
//     return 0 ;
// }


/*Kullanıcı tarafıdan girilen 10 farklı sayının en büyük olanını bulmak için oluşturulan fonkisyon*/

// int main(void)
// {
//     int i,dizi[10],EnBuyuk;
    
//     for(i=0;i<10;i++){
//         printf("%2d. sayiyi giriniz: ",i+1);
//         scanf("%d",&dizi[i]);
//     }

//     EnBuyuk = dizi[0];
//     for(i=1;i<10;i++){
//         if(dizi[i]>EnBuyuk)
//             EnBuyuk = dizi[i];
//     }
//     printf("Dizinn en buyuk elemani : %d",EnBuyuk);
//     return 0 ;
// }


// int main(void)
// {
//     int i ,N;
//     printf("Lütfen bir N tam sayisi giriniz:");
//     scanf("%d",&N);
    
//     int dizi[N];
//     for(i=0;i<N;i++){
//         dizi[i] = i;
//     }
//     for(i=0;i<N;i++){
//         printf("%d. sayisinin karesi = %d\t",i,dizi[i]*dizi[i]);
//     }
//     printf("\n");
//     return 0 ;
// }

int main(void)
{
    const BOYUT=10;
    int grafik[10]  = {19,3,15,7,11,9,13,5,17,1};
    int i,j;

    for(i=0;i<=BOYUT-1;i++){
        printf("%4d. elemanin degeri -->",i,grafik[i]);
    for(j=1;j<=grafik[i];j++){
        printf("*");
    }
    printf("\n");
    }
    return 0 ;
}

/*Kelimelerin baş harfini alma*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// void ozet(char* message);

// int main(void)
// {
//     char message[100];
//     puts("Enter a sentence: ");
//     gets(message);
//     ozet(message);
//     return 0 ;
// }

// void ozet(char* message)
// {
//     int i = 0;
//     while(*(message+i) != '\0')
//     {
//         if(i==0) putchar(*message);//getchar sadece tek bir karatker almak için kullanılır
//         if(*(message+i) == ' ')
//             putchar(*(message+i+1));
//             i++;
//     }
// }


/*KELİMELERİ TERSTEN YAZDIRMA*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// void printReverse(char*);

// int main(void)
// {
//     char message[100];

//     puts("Enter a sentence: ");
//     gets(message);

//     printReverse(message);
//     return 0 ;
// }

// void printReverse(char* message)
// {
//     int i = 0 ,lenght = 0;
//     lenght = strlen(message);
//     for(i=(lenght-1);i>=0;i--)
//     {
//         putchar(*(message+i));
//     }
// } 

/*Girilen cümlede harflerin kaçar kez kullanıldığını bulma*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// void calculate(char*);

// int main(void)
// {
//     char message[100];
//     puts("Enter a sentence: ");//kullanıcıdan girdi aldın
//     gets(message);
//     calculate(message);//fonksiyonun içine gönderdin
//     return 0 ;
// }

// void calculate(char* ptr)
// {
//     int letters[26], i=0, lenght;
//     char activeLitter;
//     lenght=strlen(ptr);//cümlenin uzunluğunu bulmak için kullandık


// }

// int main(void)
// {
//     char dizi[50];
//     int i;
//     printf("Lütfen metni giriniz:");
//     gets(dizi);

//     printf("\n Karakterleri tek tek yazdir\n");
//     for(i=0;i<=dizi[i];i++){
//         printf("%c\n",dizi[i]);
//     }
//     printf("\n Tüm karakterleri yazdir \n");
//     printf(dizi);
//     printf("\n");
//     return 0 ;
// }

// int main(void)
// {
//     int dizi[2][3] = { 5,3,1,
//                        2,4,6};
//     int satir,sutun,enk,i,m,enk_satir,enk_sutun;
//     enk_sutun = 0;
//     enk_satir = 0;
//     enk=dizi[0][0];
//     for(i=0;i<2;i++){
//         for(m=0;m<3;m++){
//             if(enk>dizi[i][m]){
//                 enk = dizi[i][m];
//                 enk_satir = i;
//                 enk_sutun = m;
//             }
//         }
//     }
//     printf("En kucuk elemanin indisi[%d,%d]\n",enk_satir,enk_sutun);
//     return 0 ;
// }

// /*iki matrisin çarpımı*/
// int main()
// {
//     int a[3][3] = { 5,7,9, 
//                     0,3,0, 
//                     7,5,1};
//     int b[3][3] = { 3,3,1, 
//                     2,1,3, 
//                     1,0,0};
//     int c[3][3];
//     int i,j,k,toplam;

//     printf("C matrisi: ");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             toplam = 0;
//             for(k=0;k<3;k++){
//                 toplam += a[i][k]*b[k][j];
//             }
//             c[i][j] = toplam;
//             printf("%4d",c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

