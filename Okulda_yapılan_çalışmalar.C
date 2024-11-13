//(örnek1)

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int sayac , top= 0 ;

//     for(sayac= 20 ; sayac>= 0; sayac--)
//     {
//         printf("%d\n", sayac);
//         top = top + sayac;
//     }
    

//     printf("toplam = %d\n", top);

//     return 0 ; 
// }

    //(örnek2)


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int top , sayi;

//     printf("Enter a sayi: ");
//     scanf("%d\n", &sayi);

//     while(sayi != 0 )
//     {
//         top = top+sayi;
//         printf("Enter a sayi: ");
//         scanf("%d\n", & sayi);
//     }
//     printf("toplam= %d\n", top);

//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int x = 1;

//     while(x <=41)
//     {
//         printf("%3d. Masallah\n", x);
//         x+=1;
//     }
//     return 0 ;
// }

//(örnek4)

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int girilen_sayi;

//     do
//     {
//         printf("Bir sayi giriniz: ");
//         scanf("%d\n", &girilen_sayi);
//         printf("Karesi: %d \n \n", (girilen_sayi*girilen_sayi));
//     }while(girilen_sayi !=0);

//     return 0 ;

// }

    // bu örneğe bir daha bak

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i , j ;

//     for(i=4 ; i>=1 ; i--)
//     {
//         //printf("\n%3d\n",i);
//         for(j=1; j<=3; j++)
//         {
//             printf("%3d", j);
//             printf("\n%3d\n",i);
//         }
//     //printf("\n%3d\n",i);
//     }

//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int baslangic , bitis, sayac , toplam = 0;

//     printf("Enter a baslangic and bitis: ");
//     scanf("%d%d", &baslangic , &bitis);

//     for(sayac =baslangic; sayac<=bitis ; sayac++)
//     {
//         toplam = toplam + sayac;
//     }
//     printf("Toplam: %d", toplam);
//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int sayac , top;

//     for(sayac = 20 ; sayac>=0 ; sayac--)
//     {
//         printf("%d\n", sayac);
//         top = sayac + top;
//     }
//     printf("Toplam degeri : %d", top);
//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i ,j ;

//     for(i=2 ; i<50 ;i++)
//     {
//         for(j=2 ; j<i ; j++)
//         {
//             if(i%j == 0)
//                 break;
//         }
//         if(i == j)
//         printf("Asal sayi: \n%d\n",i);
//     }

//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i , top;

//     for(i=1; i<=50; i++)
//     {
//         if(i%2==0)
//         top = top + i;
//     }

//     printf("1 ile 50 arasindaki sayilarin toplami: %d\n", top);
//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i , toplam;

//     for(i=1;i<=50;i++)
//     {
//         if(i%2==0)
//         toplam = toplam + i;
//     }
//     printf("1 ile 50 arasindaki sayilarin toplami: %d\n", toplam);

//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i , number;
//     int faktoriyel =  1;

//     printf("Enter a number value: ");
//     scanf("%d", &number);

//     if(number >= 0)
//     {
//         for(i=number ; i>0 ; i--)
//         {
//             faktoriyel= faktoriyel * i;
//         }
//         printf("\n%d = %d dir\n", number , faktoriyel);
//     }
//     else
//         printf("HATA: sayi 0 dan kucuk olamaz !\n");
//     return 0 ;

// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int sayi = 0;
//     while(sayi>5)
//         sayi -=2;
//         printf("%d\n", sayi);
//     return 0 ;
// }

// int main(void)
// {
//     int sayi= 0;
//     while(sayi!=9)
//     {
//         sayi+=3;
//         printf("%d\n", sayi);
//     }
//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i = 0 , j;
//     while(i<5)
//     {
//         j = 0;
//         while(j<i+1)
//         {
//             printf(" * ");
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i, j, k;

//     for(i = 1 ; i<=5; i++)
//     {
//         printf("i: %d\n", i);
//         for(j=1; j<=10; j++)
//         {
//             printf("\t j: %d\n",j);
//         }
//     }
//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int ornek_dizi[5];
//     int i ;

//     for(i=0;i<5;i++)
//     {
//         ornek_dizi[i] = i * 3;
//     }
//     for(i=0;i<5;i++)
//     {
//         printf("%d. dizi eleman degeri: %d\n", i , ornek_dizi[i]);
//     }

//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int dizi[10];
//     int i , j;

//     for(i=0; i<10; i++)
//     {
//         printf("%d. sayiyi giriniz: ", i);
//         scanf("%d", &dizi[i]);
//         if(dizi[i] == 0)
//             break;
//         j = i;
// //     }

// //     for(i=0; i<=j; i++)
// //         printf("%d\n", dizi[i]);

// //     return 0 ;
// // }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i , j , N, temp;
//     printf("N degerini giriniz: ");
//     scanf("%d", &N);
//     printf("\n");

//     int dizi[N];
//     for(i=0; i<N ; i++);
//     {
//         printf("%d. sayiyi giriniz: ");
//         scanf("%d", &dizi[i]);
//     }
//     for(i=0; i<N-1; i++)
//     {
//         for(j=0; j<N-i-1; j++)
//         {
//             if(dizi[j]>dizi[j+1])
//             {
//                 temp= dizi[j];
//                 dizi[j] = dizi[j+1];
//                 dizi[j+1] = temp;
//             }
//         }
//     }
//     printf("\n");
//     for(i=0; i<N; i++)
//     printf("%d \t", dizi[1]);
//     printf("\n");
//     return 0 ;
// 


//}


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i , n;
//     printf("bir tam sayi giriniz: ");
//     scanf("%d",&n);

//     int dizi[n];
//     for(i=1;i<=n;i++)
//     {
//         dizi[i] =i;
//         printf("%d\n",dizi[i]*dizi[i]);
//     }
//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int ornek_dizi[5]; // DİZİ TANIMLAMA
//     int i;

//     for(i=0; i<5;i++)
//     {
//         ornek_dizi[i] = i * 3;
//     }

//     for(i=0; i<5; i++)  
//     {
//         printf("%d. dizi eleman degeri : %d\n", i , ornek_dizi[i]);
//     }

//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int sayi_dizisi[10];     // sayi_dizisinin içine 10 tane karakter soktuk
//     int i,j;

//     for(i=0; i<10; i++)
//     {
//         printf("Lütfen bir sayi girniz: ");
//         scanf("%d",&sayi_dizisi[i]);
//         if(sayi_dizisi[i] == 0)
//             break;
//         j=i;
//     }
//     for(i=0; i<=j; i++)
//     {
//         printf("%d\n", sayi_dizisi[i]);
//     }

//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i, j, N, temp;
//     printf("N degerini giriniz: "); //5 girdiğini var say
//     scanf("%d", &N);    // dizini kaç elemanlı olacağını belirtir
//     printf("\n");

//     int dizi[N]; // 5 elemanlı bir dizi tanımladın
//     for(i=0; i<N; i++) // N yi yazmaktaki amaç Dizi eleman sayisi olduğu için
//     {
//     printf("%d. sayiyi giriniz: ", i+1);
//     scanf("%d", &dizi[i]);
//     }
//     for(i=0; i<N-1; i++)
//     {
//         for(j=0; j<N-1-i;j++)
//         {
//             if(dizi[j]>dizi[j+1])
//             {
//                 temp = dizi[j];
//                 dizi[j] = dizi[j+1];
//                 dizi[j+1] = temp;
//             }
//         }
//         printf("\n");
//         for(i=0; i<N; i++)
//         {
//             printf("%d\t", dizi[i]);
//         }
//     }
//     printf("\n");
//     return 0 ;
    
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i , N ;
//     printf("Bir N tam sayisi giriniz: "); // 5 girdiğimizi varsayalım
//     scanf("%d", &N);
//     printf("\n");

//     int dizi[N]; // 5 elemanlı bir dizi oluşur burda

//     for(i=1; i<=N; i++)
//     {
//         dizi[i] = i;  // N tam sayisina kadar olan sayıları bir diziye eşitledik
//     }
//     for(i=1;i<=N;i++){
//         printf("%d",i,dizi[i]);
//         printf("\n");
//         }


//     printf("\n");
    

// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i ,dizi[10], en_buyuk;

//     for(i=0;i<10;i++)
//     {
//         printf("%2d. sayiyi girinz:",i+1);
//         scanf("%d", &dizi[i]);
//         printf("\n"); 
//     }
//     en_buyuk = dizi[0];
//     for(i=1;i<=10;i++)
//     {
//         if(dizi[i]>en_buyuk)
//             en_buyuk = dizi[i];
//     }
//     printf("\n En büyük deger = %d\n", en_buyuk);
//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i , N;
//     printf("Lütfen N tam sayisini giriniz: ");
//     scanf("%d" ,&N);
//     printf("\n");
    
//     int dizi[N]; // Diziyi tanımlamayı unutma

//     for(i=1;i<N; i++)
//     {
//         dizi[i] = i;
//     }
//     for(i=1; i<N;i++)
//     {
//         printf("%d = %d \t", i , dizi[i]*dizi[i] );
//     }
//     printf("\n");
//     return 0 ;

    
// }

//#include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i ,N, sayacTek=0, sayacCift=0;
//     printf("Bir N degeri giriniz: ");   // dizinin kaç elemalı olduğunu kullanıcıdan almak için N kullandık
//     scanf("%d", &N);            // 5 girdiğini var say
//     printf("\n");

//     int dizi[N] , tek[N], cift[N];  // burda dizileri tanımladık

//     for(i=1; i<=N; i++)
//     {
//         dizi[i] = i;
//     }
//     for(i=0;i<=N;i++)
//     {
//         if(dizi[i]%2==0)
//         {
//             cift(sayacCift) = i;
//             sayacCift++;
//         }
//         else{
//             tek[sayacTek] = i;
//             sayacTek++;
//         }
//     }
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     const int BUYUK = 10;
//     int grafik[10] = {19, 3, 15,7,11,9,13,5,17,1};  // dizi elemanları
//     int i,j;    // bunlarda sayaçlar

//     for(i=0; i< BUYUK ;i++)
//         printf("%4d. elemanin degeri = %5d -->",i,grafik[i]);

//     for(j=1;j<=grafik[i]; j++)
//     {
//         printf("*");
//     }
//     printf("\n");

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i, j;
//     int x[3] [4] = {11,34,42,60,    //1. satır elemanları   //ilk [3] ifadesi kaç satırlı olacağını belli eder
//                     72,99,10,50,    //2. satır elemanları   //ikinci [4] ifadesi o satırda kaç eleman olacağını belli eder
//                     80,66,21,38} ;   //3. satır elemanları
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<4; j++ )
//             printf("%4d", x[i] [j]);
        
//         printf("\n");
        
//     }

//     return 0 ;
// }


//  2 MATRİSİN TOPLAMI

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int a[2] [3] = {5,3,7, 0,1,2};
//     int b[2] [3] = {1,2,3, 4,5,6};
//     int c[2] [3];
//     int i, j;

//     printf("A Matrisi: \n");    // A matrisi burda yapıyoruz
//     for(i=0;i<2;i++)    // bu for satır sayısını ifade ediyor
//     {
//         for(j=0;j<3;j++)
        
//             printf("%4d", a[i] [j]);    //a[0] [0] yani ilk satırdaki ilk terim demek
//             printf("\n");
        
//     }
//     printf("B Matrisi: \n");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<3;j++)
//             printf("%4d", b[i] [j]);
//             printf("\n");
//     }
//     printf("C Matrisi: \n");
//     for(i=0; i<2;i++)   // burdaki c matrisinin satır sayısını ifade eder
//     {
//         for(j=0; j<3; j++)
//         {
//             c[i] [j] = a[i] [j] + b[i] [j];
//             printf("%4d ", c[i] [j]);
//         }
//         printf("\n");
//     }
//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// { 
//     int ogrNotlar[3] [3];   // dizileri tanımlamayı unutma
//     int i, j;
//     for(i=0; i<3; i++)  // dış for hangi öğrenciin notunu alacağımızı belirliyor
//     {
//         for(j=0; j<3; j++)  // iç for öğrencinin hangi sınavı alacağını söylüyor
//         {
//             printf("%d. ogrencinin %d. notunu giriniz: ", i+1, j+1);
//             scanf("%d", &ogrNotlar[i] [j]);
//         }
//     }

//     int cikti1 = ogrNotlar[0] [0] + ogrNotlar[1] [1] + ogrNotlar[2] [2];
//     printf("Ekran ciktisi 1:%d\n\n", cikti1);

//     for(i=0; i<3; i++)
//     {
//         printf("%d. sinav ortalamasi:%d\n", i+1, (ogrNotlar[0][i] +ogrNotlar[1][i] + ogrNotlar[2][i])/3);
//     }

//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
//     char dizi[50];      // 50 karakterli bir dizi tanımladın
//     int i ;
//     printf("Lutfen metni girinz: ");
//     gets(dizi);         // gets fonksiyonu scanf yerine kullanılıyo string ifadeler için scanf yerine kullanabilirs

//     printf("\n Karekterleri tek tek yazdir\n");
//     for(i=0; i<=dizi[i]; i++)
//     {
//         printf("%c \n", dizi[i]);
//     }

//     printf("Tum karakterleri yazdir\n");
//     printf(dizi);
//     printf("\n");

//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
//     int enkucuk_satir, enkucuk_sutun,i ,j;
//     int dizi[2] [3] = {5,3,1,2,4,6};
//     en_kucuk = dizi[0][0];

//     for(i=0; i<2; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             if(en_kucuk>dizi[i][j])
//                 {en_kucuk = dizi[i][j];
//                 printf("dizideki en kucuk sayi : %d", en_kucuk);
//                 }

//         }
//     }

//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
            // burda 
// int main(void)
// {
//     int i , j ,toplam1, toplam2, toplam3, toplam4;
//     int dizi[5][4] = {1,2,3,4,5 ,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

//     toplam = 0;

//     for(i=1;i<=5; i++)
//     {
//         toplam += dizi[i][1];
//         printf("1. sutundaki sayilarşn toplami: %d", toplam);
//     }
//     for(j=1;j<=5;j++)
//     {
//         toplam2 += dizi[j][2];
//         printf("2. sutundaki sayilarin toplami: %d", toplam);
//     }
//         for(i=1;i<=5; i++)
//     {
//         toplam3 += dizi[i][3];
//         printf("3. sutundaki sayilarşn toplami: %d", toplam);
//     }
//         for(i=1;i<=5; i++)
//     {
//         toplam4 += dizi[i][4];
//         printf("4. sutundaki sayilarşn toplami: %d", toplam);
//     }
//     return 0 ;
// }


