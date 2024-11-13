#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*FONKSİYONLAR*/
// char Nout_Harfe_Donustur(int ogrenci_notu);

// int main(void)
// {
//     printf("Not: 75, Harf: %c\n",Nout_Harfe_Donustur(75));
//     printf("Not: 56, Harf: %c\n",Nout_Harfe_Donustur(56));
//     return 0 ;
// }

// char Nout_Harfe_Donustur(int ogrenci_notu)
// {
//     if(ogrenci_notu>= 0 && ogrenci_notu<50)return 'F';
//     if(ogrenci_notu>= 50 && ogrenci_notu<70)return 'D';
//     if(ogrenci_notu>= 70 && ogrenci_notu<80)return 'C';
//     if(ogrenci_notu>= 80 && ogrenci_notu<90)return 'B';
//     if(ogrenci_notu>= 90 && ogrenci_notu<100)return 'A';


// }





// int maximum(int,int,int);
// int main(void)
// {
//     int a,b,c;
//     printf("3 tam sayi giriniz: ");
//     scanf("%d%d%d",&a,&b,&c);
//     printf("Maksimum: %d\n",maximum(a,b,c));
//     return 0 ;
// }

// int maximum(int x, int y ,int z)
// {
//     int max = x;
//     if(y>max)
//         max = y;
//     if(z >max)
//         max = z;
//     return max;
// }




// void kare();
// int main(void)
// {
//     kare();
//     return 0;
// }

// void kare()
// {
//     int x, karesi;

//     printf("karesi hesaplanacak sayiyi giriniz: ");
//     scanf("%d",&x);
//     karesi = x*x;
//     printf("%d nin karesi %d\n",x,karesi);
// }




// void dizi_yaz(float x[],int n);

// int main(void)
// {
//     float dizi[5] = {8.471,3.674,9.123,8.123,1.423};
//     dizi_yaz(dizi,5);
//     return 0 ;
// }

// void dizi(float x[], int n)
// {
//     int i;
//     for(i=0; i<n;i++)
//         printf("%2.f\n",x[i]);
//     printf("\n");
// }





// void Kelime_Birlestir(char c1[], char c2[]);

// int main(void)
// {
//     char kelime1[50],  kelime2[50];
//     printf("Lütfen 1. kelimeyi giriniz: ");
//     gets(kelime1);

//     printf("Lütfen 1. kelimeyi giriniz: ");
//     gets(kelime2);

//     Kelime_Birlestir(kelime1, kelime2);
//     return 0;
// }

// void Kelime_Birlestir(char c1[], char c2[])
// {
//     int i, j= 0;
//     for(i = strlen(c1); i<strlen(c1) + strlen(c2); i++)
//     {
//         c1[i] = c2[j];
//         j++;
//     }
//     printf("Ekran ciktisi: %s\n",c1);
// }







// void kutu_ciz(int satir, int sutun);

// int main(void)
// {
//     kutu_ciz(10,30);
//     return 0 ;
// }
// void kutu_ciz(int satir, int sutun)
// {
//     int j;
//     for( ; satir>0;satir--)
//     {
//         for(j = sutun ; sutun>0 ; sutun--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }





// int func(int num)
// {
//     int res = 0;
//     if(num<=0)
//         printf("Hata\n");
//     else if(num == 1)
//         return num;
//     else
//     {
//         res = num*func(num - 1);
//         return res;
//     }
//     return -1;
// }

// int main(void)
// {
//     int num = 5;
//     int fact = func(num);
//     if(fact> 0)
//         printf("\n[%d]in faktöriyeli: [%d]\n",num,func);
//     return 0;
// }




// int count = 1;
// void func(int sum)
// {
//     sum = sum + count;
//     count++;

//     if(count<=20)
//         func(sum);
//     else
//     printf("\nSum is[%d]\n",sum); return;


//     int main(void)
//     {
//         int sum = 0;
//         func(sum);
//         return 0 ;
//     }
// }   





// int Fibonacci(int);
// int main(void)
// {
//     int n, i = 0,c;
//     scanf("%d",&n);
//     printf("Fibonacci sayilari\n");
//     for(c=1;c<=n;c++)
//     {
//         printf("%d\n",Fibonacci(i));
//         i++;
//     }
//     return 0;
// }

// int Fibonacci(int n) 
// {
//     if(n == 0)
//         return 0;
//     else if(n == 1)
//         return 1;
//     else
//         return(Fibonacci(n-1)+Fibonacci(n-2));
// }





// int ekok(int a, int b)
// {
//     static int temp= 1;
//     if(temp%b == 0 && temp%a == 0)
//         return  temp;
//     temp++;
//     ekok(a,b);
//     return temp;
// }

// int main(void)
// {
//     int a,b,s;
//     printf("İki pozitif tam sayi girniz: ");
//     scanf("%d%d",&a,&b);
//     if(a>b)
//     s = ekok(a,b);
//     else
//     s = ekok(b,a);
//     printf("Girilen sayilar için ekok: %d\n",s);
//     return 0 ;
// }





// int usAlma(int,int);
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
//     if(us == 0)
//         return 1;
//     return taban *usAlma(taban,us-1);
// }





// int main(void)
// {
//     char s[80],*p;
//     p = &s[0];
//     printf("Kücük harfleri kullanarak bir kelime giriniz: ");
//     scanf("%s",&s);
    
//     while(*p) printf("%c",toupper(*p++));
// }




// int main(void)
// {
//     double x[6] = {1.1,3.3,7.1,2.4,5.1,1.2};
//     double *p;
//     int k;
//     // indis dizi ve adresi bul
//     for(k=0; k<6;k++)
//     {
//         printf("%d %lf %p\n",k,x[k],&x[k]);
//     }
//     p = maxAdr(x,6);

//     printf("En buyuk deger: %f\n",*p);
//     printf("En buyuk adres : %p\n",p);

//     return 0 ;
// }

// double* maxAdr(double a[] , int boyut)
// {
//     double ebd = a[0];
//     double *eba = &a[0];
//     int i;
//     for(i=1; i<boyut ; i++)
//     {
//         if(a[i]>ebd)
//         {
//             ebd = a[i];
//             eba = &a[i];
//         }
//     }
//     return eba;
// }



/*DEĞİŞKENLERDE POİNTER ATAMALARI*/
// int main(void)
// {
//     int a, *p;
//     float x, *q;
//     char *k,y;
//     p = &a;q = &x;
//     *p = 10;// a = 10
//     x = 10.0/3;//*q = 10/3w
//     //*(p+1) = 3;
//     printf("\nAdresler: %u %u %u %u\n",p,&a,q,&p);
//     printf("\nNicelikler: %d %f %f %d %f\n",*p,*q,x,a,*(q+1));
//     k = &y;
//     y='w';
//     printf("\n %c %c \n",y,*k);
// }



/*FONKSİYONLARA POİNTERLE DEĞER GÖNDERME*/
// void deneme1(int*, float*);
// int main(void)
// {
//     int i = 7;
//     float j = 20/3;
//     printf("\n %d %f",i,j);
//     deneme1(&i,&j);
//     printf("\n %d %f",i,j);
// }

// void deneme1(int *p , float *q)
// {
//     *p = 20;
//     *q = *p + *q;
// }



// int main(void)
// {
//     int b[] = {9,7,15,64,17};
//     int *p;
//     char *q,u[] = "yazilim";
//     p = b;
//     q = u;
//     printf("\n%d %d %d %s %c\n",*p,*(p+1),*p+3,q,*(q+1),q+2);
// }





// int topla(int*);
// int main(void)
// {
//     int a[3] = {7, 20, 30},c;
//     c = topla(a); //c = topla(&a[0])
//     printf("%d",c);
// }

// int topla(int* p)
// {
//     int s;
//     *p = 15;
//     s = *p +*(p+1);
//     return(s);
// }


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// void findFactorial(int,int*);
// int main(void)
// {
//     int fact;
//     int num1;
//     printf("bir tam sayi giriniz: ");
//     scanf("%d",&num1);
//     findFactorial(num1, &fact);
//     printf("%d sayisinin faktöriyeli: %d\n\n",num1,fact);
//     return 0 ;
// }

// void findFactorial(int n ,int *f)
// {
//     int i;
//     *f = 1;
//     for(i=1;i<=n;i++)
//     *f = *f*i;
// }



/*Pointer kullanarak bir diziyi küçükten büyüğe doğru sıralayan c programını yazınız*/
// int main(void)
// {
//     int *a,i,j,tmp,n;
//     printf("Eleman sayisini giriniz: ");
//     scanf("%d",&n);
//     printf("%d tane sayi giriniz: \n",n);
//     for(i=0;i<n;i++)
//     {
//         printf("%d. eleman: ",i+1);
//         scanf("%d",a+1);
//     }

//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(*(a+1)>*(a+j))
//             {
//                 tmp = *(a+i);
//                 *(a+i) = *(a+j);
//                 *(a+j) = tmp;
//             }
//         }
//     }
//     printf("\n siralama sonrasi elemanlar");
//     for(i=0;i<n;i++){
//         printf("eleman -%d: %d\n",i+1,*(a+i));
//     }
//     printf("\n");
// }


/*BİR DİZİNİN ELEMANLARINI POİNTER KULLANARAK TERSTEN YAZDRIMA*/
// int main(void)
// {
//     int n,i,arr1[15];
//     int *pt;
//     printf("Eleman sayisini giriniz: ");
//     scanf("%d",&n);
//     pt = &arr1[0]; //pt arr1 in başlangıç adresini gösteriyo
//     printf("%d adet sayi girinz: ",n);
//     for(i=0;i<n;i++)
//     {
//         printf("eleman - %d;",i+1);
//         scanf("%d",pt);
//         pt++;
//     }
//     pt = &arr1[n-1];
//     printf("\n arrayin teresten siralanmis elemanlari: ");
//     for(i=n;i>0;i++)
//     {
//         printf("\n eleman - %d: %d",i,*pt);
//         pt--;
//     }
//     printf("\n\n");
// }







/*DOSYA İŞLEMLERİ*/

// int main(void)
// {
//     FILE *fptr;
//     fptr = fopen("C:\\Users\\faika\\Desktop\\data\\data.txt.txt","w");
//     fclose(fptr);//w modu ile açarsan eski verileri kaybolur
//     return 0 ;
// }



/*YAZMA MODU*/
//  void main()
//  {
//      FILE *dd;
//      int i,no;
//      dd = fopen("d:\\rakam.txt","w");
//      // dosya yazma modunda açılıyor
//      if(dd = NULL)
//          printf("Sürücü bulunamadi");
//      else
//     {
//          for(i=1;i<=5;i++){
//             printf("%d. sayiyi giriniz: ",i);
//            scanf("%d",&no);
//              fprintf(dd,"%d\n",no);
//          }
//           fclose(dd);
//      }
//  }



/*OKUMA MODU*/
// void main()
// {
//     FILE *dd;
//     int no; /*dosya okuma modunda açılıyor*/
//     if(dd == fopen("d:\\rakam.txt","r")= NULL)
//     printf("Surucu veya dosya bulunamadi");
//     else
//     {
//         while(fscanf(dd,"%d",&no)!= EOF)
//         printf("%d\n",no);
//         fclose(dd);
//     }
// }




/*fprintf ile dosyaya veri yazdırma*/
// int main(void)
// {
//     FILE *fp;

//     fp = fopen("hangiyildayiz.txt","w+");
//     if(fp==NULL){
//         printf("hangiyildayiz.txt dosyasi acilmadi. ");
//         exit(1);
//     }
//     else
//     {
//         fprintf(fp,"%s %d %s","Bu sene ",2022,"yilindayiz");
//         fclose(fp);
//     }
// }



/*fscanf ile dosyadan veri okuma*/
// int main(void)
// {
//     FILE *fp;
//     fp = fopen("hangiyildayiz.txt","r");

//     if(fp ==NULL)
//     {
//         printf("Dosya okunamadi");
//         exit(1);
//     }

//     int yil;
//     char s1[10];
//     char s2[10];
//     fscanf(fp,"%s %d %s",s1,&yil,s2);
//     printf("Yil: %d",yil);
//     return 0 ;
// }



//ASCII TABLOSU
// int main(void)
// {
//     char x;
//     x = 'a';
//     printf("%d \n",x);
//     printf("%c \n",x);

//     x = x+ 5;
//     printf("%d \n",x);
//     printf("%c\n",x);

//     printf("Gulen yuz : %c\n",2);
//     return 0 ;
// }


// int main(void)
//  {
// FILE *fp;
// fp = fopen("dosya.txt","w");

// if(fp == NULL)
// {
//     printf("Dosya olusturulurken hata olustu ...");
//     exit(1);
// }
// fputc('a',fp);
// fclose(fp);

// fp = fopen("dosya.txt","r");
// if(fp == NULL)
// {
//     printf("Dosya olsuturulurken bir hata olustu");
//     exit(1);
// }

// char okunan;
// okunan = fgetc(fp);
// if(okunan==EOF)
// {
//     printf("Karakter okunamadi");
// }
// else
// printf("Okunan karakter:%d",okunan);

// fclose(fp);

// return 0;
// }



// int main(void)
// {
//     FILE *fp;
//     int i;

//     if(fp=fopen("dosya.txt","w") == NULL)
//     {
//         printf("Dosya açma hatasi");
//         exit(1);
//     }
//     for(i=0;i<10;i++)
//     {
//         fputc('a',fp);//dosyaya bişey yazarken kullanılır
//     }
//     fclose(fp);

//     if(fp=fopen("dosya.txt","r") == NULL)
//     {
//         printf("Dosya açilirken bir hata olustu");
//         exit(1);
//     }
//     for(i=0;i<10;i++)
//     printf("%c",fgetc(fp));//fgetc dosya okunurken kullanılır
//     fclose(fp);

//     return 0;   
// }



// void main(void)
// {
//     char dizi[41];
//     FILE *fp;
//     char *cp;
//     int i;
    
//     printf("Bir karakter dizisi giriniz: ");
//     gets(dizi);

//     if((fp=open("dosya.txt","w")) == NULL)
//     {
//         printf("Dosya acma hatasi");
//         exit(1);
//     }
//     cp =dizi;
//     while(*cp)//bir bir arttırıyo \0 a gelene kadar kod çalışır
//     {
//         if(fputc(*cp,fp) == EOF)
//         {
//             printf("Dosya yazma hatasi");
//             exit(1);
//         }
//         cp++;
//     }
//     fclose(fp);

//     if((fp = fopen("dosya.txt","r")) == NULL)
//     {
//         printf("Dosya acma hatasi\n");
//         exit(1);
//     }

//     for( ; ; )
//     {
//         i = fgetc(fp);
//         if(i == EOF) break;
//         putchar(i);
//     }
//     fclose(fp);
// }





// int main(void)
// {
//     char ch[80];
//     FILE *fp1, *fp2;

//     if((fp1 = fopen("test.doc","r")) == NULL)
//     {
//         printf("test.doc okuma icin acilmadi");
//         exit(0);
//     }
//     if((fp2 = fopen("test1.doc","w"))==NULL)
//     {
//         printf("test1.doc yazdirma icin acilmadi");
//         exit(0);
//     }

//     fgets(ch,80,fp);
//     printf("okunan karakter dizi: %s\n",ch);
//     fclose(fp2);
// }




// int main(void)
// {
//     FILE *dd;
//     int i;
//     char ad[20];
//     if((dd = fopen("d:\\isimler.txt","w"))==NULL)
//     /*dosya yazma modunda açılıyor*/
//     printf("Sürücü bulunamadi\n");
//     else
//     {
//         for(i=1;i<=5;i++){
//             printf("%d. adi giriniz: ",i);
//             fgets(ad,20,stdin);
//             fputs(ad,dd);
//         }
//         fclose(dd);
//     }

// }



// int main(void)
// {
//     FILE *dd;
//     char ad[20];
//     dd = fopen("d:\\isimler.txt","r");
//     if(dd==NULL) printf("Sürücü veya dosya bulunamadi");
//     /*dosya okuma modunda açılıyor*/
//     else
//     {
//         while(!feof(dd))
//         {
//             fgets(ad,20,dd);
//             printf("%s",ad);
//         }
//         fclose(dd);
//     }
// }


// void main(void)
// {
//     FILE *fp;
//     int ud1;

//     if((fp = fopen("dosya.txt","rb"))== NULL)
//     {
//         printf("Dosya acilmadi");
//         exit(1);
//     }
//     ud1 = 0;
//     while(!feof(fp))
//     {
//         if(fgetc(fp) != EOF)
//         ud1++;
//         if(ferror(fp))
//         {
//             printf("Dosyadan okuma hatasi");
//             exit(1);
//         }
//     }
//     printf("Verilen dosya uzunlugu : %d byte\n",ud1);
//     fclose(fp);
// }




// int main(void)
// {
//     FILE *fp;
//     int a = 5;
//     int b;

//     fp = fopen("deneme.txt","w");
//     fwrite(&a,sizeof(int),1,fp);
//     fclose(fp);

//     fp = fopen("deneme.txt","r");
//     fread(&b,sizeof(int),1,fp);

//     printf("b: %d",b);
//     fclose(fp);

//     return 0;
// }





// int main(void)
// {
//     FILE *fp;
//     int sayilar[100];
//     int i;
//     fp = fopen("d:\\ornek.txt","wb");
//     for(i=0;i<100;i++)
//     sayilar[i] = i*i;
//     fwrite(sayilar,sizeof(sayilar),1,fp);
//     fclose(fp);
// }


// int main(void)
// {
//     FILE *fp;
//     int dizi[5];
//     int i;

//     for(i=0;i<5;i++)
//     {
//         printf("%d. int degerini giriniz :");
//         scanf("%d",&dizi[i]);
//     }

//     if((fp = fopen("deneme.txt","wb"))==NULL)
//     {
//         printf("Dosya acilmadi!\n");
//         exit(1);
//     }
//     for(i = 0; i<5;i++)
//     {
//         if(fwrite(&dizi[i], sizeof(int),1,fp))
//         {
//             printf("Yazma hatasi");
//             exit(1);
//         }
//     }
//     fclose(fp);

//     if((fp = fopen("deneme.txt","rb"))== NULL)
//     {
//         printf("Dosya acilamdi");
//         exit(1);
//     }
//     printf("\n Degerleri silinmis dizi elemanlari:\n");
//     for(i =0; i<5;i++)
//     {
//         dizi[i] = 0;
//         printf("%d",dizi[i]);
//     }
//     printf("\n");

//     for(i=0;i<5;i++){
//         if(fread(&dizi[i],sizeof(int),1,fp) != 1)
//         {
//             printf("Okuma hatasi");
//             exit(1);
//         }
//     }
//     fclose(fp);

//     printf("Dosyada okunan dizi degerleri: \n");
//     for(i=0;i<5;i++){
//         printf("%d", dizi[i]);
//     }

//     return 0 ;
// }





#include <stdio.h>
#include <conio.h>
#include <errno.h>

// typedef struct
// {
//     int hesapNo;
//     char isim[100];
//     float bakiye;
// }stHesap;

// int main(void)
// {
//     FILE *fp;
//     stHesap hesap;

//     if((fp = fopen("musteri.txt","wb+"))== NULL)
//     {
//         printf("Dosya acilamadi");
//         exit(1);
//     }
//     printf("\n---------------- Hesap veri girisi ----------------");
//     while(1 == 1)
//     {
//         printf("Hesap no:");
//         scanf("%d",&hesap.hesapNo);

//         if(hesap.hesapNo == 0)
//             break;
//         printf("Isim:");
//         scanf("%s",hesap.isim);
//         printf("Bakiye: ");
//         scanf("%f",&hesap.bakiye);

//         if(fwrite(&hesap, sizeof(hesap),1,fp)!=1)
//         {
//             printf("Yazma hatasi !\n");
//             exit(1);
//         }
//         printf("\n");
//     }
//     rewind(fp);

//     stHesap hesap2;
//     printf("\n---------------- Hesap listesi ----------------");
//     while(fread(&hesap2,sizeof(hesap2),1,fp) == 1)
//     {
//         printf("Hesap.no: %d\n",,hesap2.hesapNo);
//         printf("Isim:%s\n",hesap2.isim);
//         printf("Bakiye :%f\n",hesap2.bakiye);
//         printf("\n");
//     }

//     return 0 ;
// }



// typedef struct
// {
//     int hesapNo;
//     char isim[100];
//     float Bakiye;
// }stHesap;

// int main(void)
// {
//     FILE *fp;
//     stHesap hesap;
//     if((fp = fopen("musteri.txt","wb+")) == NULL)
//     {
//         printf("Dosya acilmadi");
//         exit(1);
//     }

//     printf("\n-------  HESAP VERİ GİRİSİ(1-100 ARASI) ");
//     while(1)
//     {
//         printf("Hesap No(1-100 arasi)");
//         scanf("%d",&hesap.hesapNo);

//         if(hesap.hesapNo == 0)
//             break;
//         printf("Isim: ");
//         scanf("%s",hesap.isim);
//         printf("Bakiye");
//         scanf("%f",&hesap.Bakiye);
//         fseek(fp,(hesap.hesapNo-1)*sizeof(hesap),SEEK_SET);
//         if(fwrite(&hesap,sizeof(hesap),1,fp)!= 1)
//         {
//             printf("Yazma hatasi");
//             exit(1);
//         }
//         printf("\n");
//     }
//     rewind(fp);
//     stHesap hesap2;
//     printf("------- HESAP LİSTESİ-------");
//     while(fread(&hesap2,sizeof(hesap2),1,fp))
//     {
//         printf("Hesap No : %d\n",hesap2.hesapNo);
//         printf("Isim: %s\n",hesap2.isim);
//         printf("Bakiye:%f\n",hesap2.Bakiye);
//         printf("\n");
//     }
//     return 0 ;
// }




#include <conio.h>

// int main(void)
// {
//     FILE *fp;
//     if((fp = fopen("d:\\musteri.txt","w"))==NULL)
//     {
//         printf("Dosya acilamadi ");
//         exit(1);
//     }
//     else
//     printf("muster.txt dosyasi basarili bir sekilde olusturuldu\n\n");
//     fclose(fp);
//     printf("Dosya silinceke Eminmisiini(E/H)?");
//     if(toupper(getchh())=='E')
//         remove("musteri.txt");
//     return 0 ;
// }




// int main(void)
// {
//     FILE *fp , *fp2;
//     char okunan;
//     fp = fopen("metin.txt","r");
//     fp2 = fopen("kelimeler.txt","w");
//     while((okunan = fgetc(fp))!= EOF)
//     {
//         if((okunan = ' ')|| (okunan = ','))
//         fputc("\n",fp2);
    
//         else
//             fputc(okunan,fp2);
//     }
//     fclose(fp);
//     return 0; 
// }



// int main(void)
// {
//     int *ip;
//     //int veri türü boyutu kadar bellek tahsisi
//     ip = (int*)malloc(sizeof(int));//burda int veri türüne döndürüyon ve adresi tutuyor ip
//     *ip = 126;
//     printf("Tahsis edilen bellek adres baslangici: %p\n",ip);
//     printf("Tahsis edilen bellekteki degisken degeri: %d\n",*ip);
//     free(ip);
//     return 0 ;
// }



// int mainm(void)
// {
//     int *ip , id;
//     ip = (int*)calloc(5,sizeof(int));//tahsis edilen belleği sıfırlar
//     for(id=0;id<5;id++){
//         *(ip+id) = (id+1)*10;
//         printf("%p adresindeki deger : %d\n ",(ip+id),*(ip+id));
//     }

//     free(ip);
//     return 0;
// }



// int main(void)
// {
//     int *p, i;
//     p = calloc(15,sizeof(int));
//     //p = (int*)malloc(sizeof(int)*15);

//     for(i=0;i<15;i++){
//         printf("%d. eleman ---> %d\n",i+1,p[i]);
//     }

//     free(p);
//     return 0 ;
// }


#include  <stdio.h>
#include <stdlib.h>
#include <string.h>


// int main(void)
// {
//     char *pdizi[5];
//     int id;
//     //Bellek tahsisi
//     for(id=0;id<5;id++)
//     {
//         pdizi[id] =(char *)malloc(20*sizeof(char));
//     }
//     //Dizi atama
//     for(id=0;id<5;id++)
//     {
//         strcpy = (pdizi[id],"Karakter dizisi");
//     }
//     //yazdırma
//     for(id= 0;id<5;id++)
//     {
//         printf("%s\n",pdizi[id]);
//     }
//     //bellek boşaltma
//     for(id = 0;id<5;id++)
//         free(pdizi[id]);

//         return 0 ;
// }



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(void)
// {
//     char *cp;
//     cp = (char*)malloc(40);
//     if(!cp){// bellek tahsisi başarısızsa burda kod hatası verir
//     // yani if bloğu içinde dönen değer null sa burda kd hatası verir ve if bloğu çalışır
//         printf("Bellek hatasi");
//         exit(1);
//     }
//     strcpy(cp,"Bilgisayar");
//     printf("%s",cp);
//     free(cp);

//     return 0 ;
// }



// int main(void)
// {
//     int *ip, id;
//     ip = (int *)malloc(5*sizeof(int));
//     for(id=0;id<5;id++)
//     {
//         *(ip+id) = id+1;
//         printf("%p adresindeki deger : %d\n",(ip+id),*(ip+id));
//     }
//     ip = (int *)realloc(ip,10*sizeof(int));
//     printf("Genisletilmis bellek degeri: ");
//     for(;id<10;id++)//burada id değişken degeri 5 olarak başlar
//     {
//         *(ip+id) = id+1;
//         printf("%p adresindeki deger: %d\n",(ip+id),*(ip+id));
//     }

//     free(ip);
//     return 0 ;
// }




// int main(void)
// {
//     int *dizi , i;
//     int n; // dizi boyutu
//     float toplam = 0;

//     print("Dizi boyutunu giriniz: ");
//     scanf("%d",&n);

//     dizi=(int *)malloc(sizeof(int)*n);

//     for(i=0;i<n;i++)
//     {
//         printf("%d. elemani giriniz: ,",i+1);
//         scanf("%d",&dizi[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         toplam += dizi[i];
//     }
//     printf("\n Toplam : %1.f \n",toplam);
//     printf("Ortalama: %3.f\n",(toplam/n));

//     free(dizi);
//     return 0 ;
// }




// char *SubString(char* ,int,int);
// int main(void)
// {
//     char dizi[100],*pointer;
//     int pozisyon,uzunluk;
//     printf("karakter dizisi giriniz:");
//     gets(dizi);
//     printf("Kopyalama baslangic pozisyonunu giriniz: ");//10
//     scanf("%d",&pozisyon);
//     printf("Kopyalanacak karakter sayisini giriniz: ");//13
//     scanf("%d",&uzunluk);
//     pointer=SubString(dizi,pozisyon,uzunluk);
//     printf("Sonuc: \"%s\"\n",pointer);
//     //free(pointer)
//     return 0 ;
// }

// char *SubString(char*dizikopya,int pozisyon,int uzunluk)
// {
//     char *pointer;
//     int i;
//     pointer = (char *)malloc(sizeof(char)*(uzunluk+1));
//     if(pointer==NULL)
//     {
//         printf("Bellekte yer tahsis edilmedi");
//         exit(1);
//     }
//     //dizikopya pozisyonundan itibaren uzunluk  kadar pointer işaretçisine kopyalanıyor
//     for(i=0;i<uzunluk;i++)
//     {
//         *(pointer+i) = *(dizikopya+pozisyon);
//         dizikopya++;
//     }
//     //NULL KARAKTERİ EKLENİYOR
//     *(pointer+i ) = '\0';
//     return pointer;
// }


#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// void bNotu(int vize, int final)
// {
//     float ort;
//     ort = vize*0.4 + final* 0.6;
//     printf("Basari Notu: %2.f\n",ort);
// }

// int main(void)
// {
//     int vize, final;
//     printf("Yil sonu notu hesaplanacak ogrencinin");
//     printf("vize ve final notunu giriniz: ");
//     scanf("%d%d",&vize,&final);
//     bNotu(vize,final);

//     return 0 ;

// }



// void Kelime_Birlestir(char c1[], char c2[]);
// int main(void)
// {
//     char kelime1[50], kelime2[50];
//     printf("Lütfen 1. kelimeyi giriniz: ");
//     gets(kelime1);

//     printf("LÜtfen 2. kelimeyi giriniz: ");
//     gets(kelime2);
    
//     Kelime_Birlestir(kelime1,kelime2);
//     return 0 ;
// }
// //kelime1 = 10 , kelime2= 20

// void Kelime_Birlestir(char c1[], char c2[])
// {
//     int i ,j=0;
//     for(i = strlen(c1); i<strlen(c1)+strlen(c2);i++)
//     {
//         c1[i] = c2[j];
//         j++;
//     }
//     printf("Ekran ciktisi: %s\n",c1);
// }





// int seriHesapla(int N , int M);
// int main(void)
// {
//     int N,M;

//     printf("\n N sayisini giriniz: ");
//     scanf("%d",&N);
//     printf("\n M sayisini giriniz: ");
//     scanf("%d",&M);
//     printf("\n Sonuc: %d\n",seriHesapla(N,M));
//     return 0 ;
// }
// // N = 5  M=7
// int seriHesapla(int N, int M)
//  {
//     int i , j;
//     int toplam = 0;
//     for(i=1 ; i<=N ; i++)
//     {
//         for(j=1; j<=M;j++)
//         {
//             toplam += ((i*i)+(2*i*j)+(j*j));
//         }
//     }
//     return toplam;
//  }




// void kutu_ciz(int satir, int sutun);
// int main(void)
// {
//     kutu_ciz(10,30);
//     return 0 ;
// }

// void kutu_ciz(int satir, int sutun)
// {
//     int j;
//     for(; satir>0; satir--)
//     {
//         for(j = sutun;j>0;j--)
//             printf("*");
//         printf("\n");
//     }
// }   




// int func(int num)
// {
//     int res = 0;
//     if(num <=0)
//     {
//         printf("\n Hata \n");
//     }
//     else if(num == 1)
//     return num;

//     else{
//         res = num*fuc(num-1);
//         return res;
//     }
//     return -1;
// }

// int main(void)
// {
//     int num = 5;
//     int fact = func(num);
//     if(fact > 0)
//         printf("\n[%d]in faktöriyeli : [%d]\n",num,fact);
//     return 0;
// }



// int count =1;
// void func(int sum)
// {
//     sum = sum + count;
//     count++;

//     if(count<=20)
//     func(sum);
//     else
//     printf("\n Sum[%d]\n",sum);return;

//     int main(void)
//     {
//         int sum = 0;
//         func(sum);
//         return 0;
//     }
// }



// int Fibonacci(int);
// int main(void)
// {
//     int n,i=0,c;
//     scanf("%d",&n);//5
//     printf("Fİbonacci sayilari:\n ");
//     for(c=1;c<=n;c++)//n=5
//     {
//         printf("%d\n", Fibonacci(i));
//         i++;
//     }
//     return 0 ;
// }

// int Fibonacci(int n)
// {
//     if(n==0)
//     return 0 ;
//     else if(n==1)
//     return 1;
//     else
//     return(Fibonacci(n-1)+Fibonacci(n-2));
// }



// int ekok(int a, int b)
// {
//     static int temp = 1;
//     if(temp%b == 0 && temp %a == 0)
//     return temp;
//     temp++;
//     ekok(a,b);
//     return temp;
// }

// int main(void)
// {
//     int a,b,s;
//     printf("İki pozitif tam sayi giriniz: ");
//     scanf("%d %d",&a,&b);
//     if(a>b)//a = 5 b = 3
//     s = ekok(a,b);
//     else
//     s = ekok(b,a);
//     printf("Girilen sayilar için ekok: %d",s);
//     return 0;
// }





// int usAlma(int,int);
// int main(void)
// {
//     int taban = 4;
//     int us = 3;
//     int sonuc;
//     sonuc = usAlma(taban,us);
//     printf("(%d)^(%d) = %d\n",taban,us,sonuc);
//     return 0 ;
// }

// int usAlma(int taban, int us)
// {
//     if(us == 0)
//         return 1;
//     return taban*usAlma(taban,us-1);
// }




// int carpmaİslemi(int x, int y);
// int main(void)
// {
//     int sayi1 = 15;
//     int sayi2 = 6;
//     int sonuc = carpmaİslemi(sayi1,sayi2);
//     printf("%d*%d = %d\n",sayi1,sayi2,sonuc);
//     return 0 ;
// }

// int carpmaİslemi(int x, int y)
// {
//     if(y==0)
//         return 0;
//     return x + carpmaİslemi(x,y-1);
// }




// int asalSayi(int,int);
// int main(void)
// {
//     int sayi = 29;
//     int sonuc = asalSayi(sayi,sayi/2);
//     if(sonuc == 0)
//         printf("%d asal sayi degildir\n",sayi);
//     else
//         printf("%d asal sayidir \n",sayi);
//     return 0 ;
// }

// int asalSayi(int x,int i)
// {
//     if(x<2)
//         return 0;
//     if(i==1)
//         return 1;
//     if(x%i==0)
//         return 0;
//     return asalSayi(x,i-1);
// }



// enum BOOLEAN{FALSE,TRUE};
// int tek(int n)
// {
//     return(n%2);
// }

// int main(void)
// {
//     enum BOOLEAN sonuc ;
//     int x;
//     printf("Bİr sayi giriniz: ");
//     scanf("%d",&x);
//     sonuc=tek(x);
//     if(sonuc == TRUE)
//         puts("Girilen sayi tek");
//     else
//         puts("Girile sayi cift");
//     return 0 ;
// }



// struct deneme
// {
//     int yas;
//     char ad;
// }mn;

// struct deneme fonk(void);
// int main(void)
// {
//     mn = fonk();
//     printf("yas: %d\n ad:%c\n",mn.yas,mn.ad);
//     return 0 ;
// }

// struct deneme fonk(void)
// {
//     struct deneme mn;
//     mn.yas = 21;
//     mn.ad = 'A';
//     return mn;
// }




// int main(void)
// {
//     int *p;
//     p = NULL;

//     printf("\n p isaretcisinin adresi = %p\n\n",p);
//     if(p)
//         printf("p isaretcisi NULL degil");
//     else
//         printf("p isaretcisi NULL ... \n");
//     return 0 ;
// }



// int main(void)
// {
//     int i;
//     int b[] = {10,20,30,40};

//     int *pb = b;

//     printf("YONTEM 1 : DIZI INDISLERI\n");
//     for(i=0;i<=3;i++)
//     printf("b[%d]:\t%d\n",i,b[i]);

//     printf("\n YONTEM 2: ISARETCİ OFFSET\n");

// }



#include <stdio.h>
#include <ctype.h>

// int main(void)
// {
//     char s[80],*p;
//     p = &s[0];
//     printf("Kucuk harfleri kullanarak bir kelime giriniz: ");
//     scanf("%s",s);
//     while(*p)//\0 karakterine gelene kadar çalışır
//         printf("%c"toupper(*p++));
// }



// int *BuyukBul(int a, int b);
// int main(void)
// {
//     int s1, s2;
//     int *p;

//     printf("s1: ");
//     scanf("%d",&s1);

//     printf("s2: ");
//     scanf("%d",&s2);

//     p = BuyukBul(s1,s2);

//     printf("Buyuk sayi: %d",*p,p);
//     return 0 ;
// }

// int *BuyukBul(int a, int b)
// {
//     return(a>b) ? &a:&b;
// }




// int main(void)
// {
//     double x[6] = {1.1,3.3,7.1,5.4,0.2,-1.5};
//     double *p;
//     int k;

//     // indis dizi ve adresini ekrana bas
//     for(k=0;k<6;k++)
//     printf("%d %lf %p\n",k,x[k],&x[k]);

//     p = maxAdr(x,6);
    
//     printf("En buyuk deger: %f\n",*p);
//     printf("En buyuk adres: %p\n",p);

//     return 0 ;
// }

// double* maxAdr(double a[], int boyut)
// {
//     double ebd = a[0];
//     double *eba = &a[0];
//     int i;
//     for(i=1;i<boyut;i++)
//     {
//         if(a[i]>ebd)
//         {
//             ebd = a[i];
//             eba = &a[i];
//         }
//     }
//     return eba;
// }



// typedef struct
// {
//     char isim[50];
//     int yas;
// }Kisi;

// int main(void)
// {
//     Kisi k;
//     Kisi*pk;

//     pk = &k;
//     strcpy(k.isim,"ahmet");
//     k.yas = 19;

//     pk->yas = 20;
//     printf("yas: %d\n",pk->yas);

//     (*pk).yas  = 21;
//     printf("yas: %d\n",pk->yas);
//     return 0;
// }



// struct yap
// {
//     int id;
//     char cd;
// }yd;
// void fonk(struct yap *yp);
// int main(void)
// {
//     struct yap *yp;
//     yd.id = 21;
//     yd.cd = 'A';
//     yp = &yd;
//     fonk(yp);
//     printf("%d %c",yd.id,yd.cd);
//     return 0 ;
// }
// void fonk(struct yap *yp)
// {
//     yp->id+=15;
//     yp->cd+=5;
//     printf("%d %c\n",yp->id,yp->cd);
// }


// int f(int n)
// {
//     int f=1, i;
//     for(i=1;i<n;i++)
//     f*=i;
//     return f;
// }

// int main(void)
// {
//     int (*pf)(int);
//     pf = &f;

//     printf("Fonksiyonun adresi = %p\n",&f);
//     printf("Fonksiyonun adresi = %p\n",pf);

//     int sonuc = pf(4);//f(4)
//     printf("sonuc: %d\n",sonuc);

//     return 0 ;
// }



// int main(void)
// {
//     int a,*p;
//     float x,*q;
//     char *k,y;
//     p = &a; q=&x;
//     *p = 10;
//     x = 10.0/3;
//     //*(p+1) = 3;
//     printf("\n Adresler: %u %u %u %u\n",p,&a,q,&p);
//     printf("\n nicerikler: %d %f %f %d\n",*p,*q,x,a,*q+1);

//     k = &y;
//     y = 'w';
//     printf("\n%c %c\n",y,*k);
// }



// int main(void)
// {
//     int b[] = {9,7,15,64,17};
//     int *p;
//     char *q,u[] = "yazilim";
//     p = b; //yada p=&b[0]
//     q = u; // yada q=&u[0]
//     printf("\n %d %d %s %c %s\n",*p,*(p+1),*q+3,q,*(q+1),q+2);
// }


#include <stdio.h>
#include <conio.h>

// int topla(int *);
// int main(void)
// {
//     int a[3] = {7,20,30},c;
//     c = topla(a);//c = topla(&a[0])
//     printf("%d",c);
// }
// int topla(int *p)
// {
//     int s;
//     *p=15;//dizinin ilk elamaını 15 yapar
//     s = *p+*(p+1);
//     return(s);
// }


// birlestir(char *p,char *q)
// {
//     while(*p)*p++;
//     while(*q){
//         *p=*q;
//         p++;q++;
//     }
//     *p = NULL;}
//     int main(void)
//     {
//         char s1[15];
//         char s2[15];
//         printf("ilk metni giriniz: ");
//         gets(s1);
//         printf("ikinci metni giriniz:");
//         gets(s2);
//         birlestir(s1,s2);
//         puts(s1);
//     }

#include <time.h>

// int i,j,k; 
// int *p[3],x,d[3][4];

// int main(void)
// {
//     srand(time(NULL));
//     for(i=0;i<3;i++){
//         for(j=0;j<4;j++){
//             d[i][j] = rand()%100;
//             printf("%d\t"d[i][j]);
//         }
//         printf("\n");
//         p[i] = d[i];}
//     for(i=0;i<3;i++)
//     for(j=0;j<4;j++)
//     for(k=j+1;k<4;k++)
//     if(*(p[i]+j))
// }


// void findFactorial(int,int*);
// int main(void)
// {
//     int fact;
//     int num1;
//     printf("Bir sayi giriniz: ");//5
//     scanf("%d",&num1);
//     findFactorial(num1,&fact);
//     printf("%d sayisinin faktöriyeli: %d\n\n ",num1,fact);
//     return 0 ;
// }

// void findFactorial(int n,int* f)
// {
//     int i;
//     *f = 1;
//     for(i=1;i<=n;++)
//     *f = *f*i;
// }


// int main(void)
// {
//     int *a,i,j,tmp,n;
//     printf("Bir eleman sayisi giriniz: ");
//     scanf("%d",&n);
//     printf("%d tane sayi giriniz: ",n);
//     for(i=0;i<n;i++)
//     {
//         printf("%d.eleman",i+1);
//         scanf("%d",a+1);
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(*(a+i)>*(a+j))
//             {
//                 tmp = *(a+i);
//                 *(a+i) = *(a+j);
//                 *(a+j) =tmp;
//             }
//         }
//     }
//     printf("\n Siralama sonrasi elemanlar:\n");
//     for(i=0;i<n;i++)
//     {
//         printf("eleman-%d: %d\n",i+1,*(a+i));
//     }
//     printf("\n");

// }



// int main(void)
// {
//     int n,i,arr1[15];
//     int *pt;
//     printf("Eleman sayisini giriniz: ");
//     scanf("%d",&n);

//     pt = &arr1[0];//pt arr1 in  baslangıç adresini gösteriyor
//     printf("%d adet sayi giriniz: ");
//     for(i=0;i<n;i++)
//     {
//         printf("eleman- %d :",i+1);
//         scanf("%d",&pt);  
//         pt++;
//     }
//     pt = &arr1[n-1];
//     printf("\n arrayin tersten siralanmis hali:");
//     for(i=n;i>0;i++)
//     {
//         printf("\n eleman -%d : %d",i,*pt);
//         pt--;
//     }
//     printf("\n\n");
// }



// int main(void)
// {
//     FILE *fp;

//     if((fp=fopen("text.doc","r"))==NULL)
//     {
//         printf("text.doc dosyasi acilamadi...\n");
//         printf("Program kapatiliyor");
//         exit(0);
//     }  
//     else
//     {
//         printf("text.doc dosyasi acildi\n");
//         printf("fp nin degeri : 0x%p\n",fp);//hexadecimal şekilde yazdırır
//         printf("dosya kapatilyior");
//         fclose(fp);
//     }
// }



/*FONKSİYON KULLANIMI: FPRİNTF=(fptr,"%d",sayi)*
                       FSCANF= (fptr,"%d",&sayi) */



// void main(void)
// {
//     FILE *dd;
//     int i,no;
//     dd = fopen("d:\\rakam.txt","w");
//     //dosya. yazma modunda açılıyor
//     if(dd = NULL)
//     printf("Surucu bulunamadi");
//     else
//     {
//         for(i=1;i<=5;i++)
//         {
//             printf("%d. sayiyi giriniz: ",i);
//             scanf("%d",&no);
//             fprintf(dd,"%d\n",no);
//         }
//     }
//     fclose(dd);
// }



// void main(void)
// {
//     FILE *dd;
//     int no;//dosya okuma modunda açılıyor
//     if((dd = fopen("d:\\rakam.txt","r"))==NULL)
//     printf("Surucu veya dosya bulunamadi");
//     else
//     while(fscanf(dd,"%d",&no)!=EOF)
//     {
//         printf("%d\n",no);
//         fclsoe(dd);
//     }
// }



// void main(void)
// {
//     FILE *dd;
//     int i,no;   // dosya ekleme modunda açılıyor
//     if((dd=fopen("d:\\rakam.txt","a"))==NULL)
//     printf("surucu  bulunamadi");
//     else
//     {
//         for(i=1;i<3;i++)
//      {
//             printf("%d. sayiyi  giriniz: ");
//             scanf("%d",&no);
//             fprintf(dd,"%d\n",no);
//      }   
//      fclose(dd);
//     }

// }


// int main(void)
// {
//     FILE *fp;

//     fp = fopen("hangiyildayiz.txt","w+");
//     if(fp==NULL)
//     {
//         printf("hangiyildayiz.txt dosyasi acilamamistir");
//         exit(1);
//     }
//     fprintf(fp,"%s %d %s","Bu sene ",2022,"yilindayiz");
//     fclsoe(fp);

//     return 0 ;
// }


// int main(void)
// {
//     FILE *fp;
//     fp = fopen("hangiyildayiz.txt","r");

//     if(fp ==NULL)
//     {
//         printf("Dosya okunamadi");
//         exit(1);
//     }

//     int yil;
//     char s1[10];
//     char s2[10];
//     fscanf(fp,"%s %d %s",s1,&yil,s2);
//     printf("Yil: %d",yil);

//     return 0 ;
// }



// int main(void)
// {
//     FILE *fp;
//     fp = fopen("sayilar.txt","r");
//     if(fp = NULL)
//     {
//         printf("Dosya acarken bir hata olustu");
//         exit(1);
//     }
//     int crs,sayac = 0;
//     int sayi, enBuyuk,enKucuk;
//     while(crs!=EOF)
//     {
//         crs =fscanf(fp,"%d",&sayi);
//         if(crs!=EOF)
//         {
//             if(sayac==0)
//             {
//                 enBuyuk = sayi;
//                 enKucuk = sayi;
//             }
//             else
//             {
//                 if(sayi>enBuyuk)
//                 enBuyuk = sayi;
//                 if(sayi<enKucuk)
//                 enKucuk = sayi;
//             }
//             sayac++;
//         }
//     }
//     printf("En buyuk sayi: %d\n",enBuyuk);
//     printf("En kucuk sayi: %d\n",enKucuk);
//     fclsoe(fp);
//     return 0 ;
// }



// void Dosyayaz()
// {
//     int ogr_sayisi = 2, i=0;
//     char Ad[10];
//     int no, Not;
//     FILE *pDosya;
//     pDosya = fopen("ogrenci.txt","w");
//     if(pDosya==NULL)
//     {
//         printf("ogrenci.txt. dosyasyi bulunamadi");
//         exit(1);
//     }
//     printf("Ogrenci bilgilerini giriniz: ");
//     while(i++<ogr_sayisi){
//         printf("%d. OGRENCİ NO :",i);
//         scanf("%d",&no);
//         printf("%d. Ogrenci adi",i);
//         scanf("%d",&Ad);
//         printf("%d. ogrenci notu",i);
//         scanf("%d",&Not);
//         printf("\n");

//         fprintf(pDosya,"%5d %10s %3d\n",no,Ad,Not);

//     }
//     printf("Ogrenci bilgileri kaydedildi");
//     fclose(pDosya);

// }

// void DosyaOku()
// {   char Ad[10];
//     int no ,Not;
//     FILE *pdosya;
//     pdosya=fopen("ogrenci.txt","r");
//     if(pdosya==NULL)
//     {
//         printf("ogrenci.txt dosyasi acilamadi");
//         exit(1);
//     }
//     int c;
//     printf("Ogrenci bilgileri dosyadan okunuyor");
//     printf("ogrenci bilgileri");
//     while(c!=EOF)
//     {
//         c = fopen(pdosya,"%d %s %d",&no,&Ad,&Not);
//         if(c!=EOF)
//         printf("No = %d \n ad= %s\n not = %d",no,Ad,Not);
//     }
//     fclose(*pdosya);
// }

// int main(void)
// {
//  Dosyayaz();
//     DosyaOku();
//     return 0 ;
// }


// int main(void)
// {
//     char x;

//     x = 'a';
//     printf("%d\n",x);
//     printf("%c\n",x);

//     x = x + 5;
//     printf("%d\n", x);
//     printf("%c\n",x);
    
//     printf("Gülen yüz: %c\n",2);

//     return 0 ;

// }


// int main(void)
// {
// FILE *fp;
// fp = fopen("dosya.txt","w");

// if(fp == NULL)
// {
//     printf("Dosya olusturulurken hata olustu");
//     exit(1);
// }

// fputc('a',fp);
// fclose(fp);

// fp = fopen("dosya.txt","r");
// if(fp == NULL)
// {
//     printf("dosya olusturulurken bir hata olustu");
//     exit(1);
// }

// char okunan ;
// okunan = fgetc(fp);//dosyadan okuma işlemi yapar
// if(okunan==EOF)
//     printf("Karakter okunamadi");
// else
//     printf("Okunan karakter : %d",okunan);

// fclose(fp);

// return 0 ;
// }



// int main(void)
// {
//     FILE *fp;
//     int i;

//     if((fp = fopen("dosya.txt","w"))==NULL)
//     {
//         printf("Dosya acma hatasi");
//         exit(1);
//     }

//     for(i=0;i<10;i++)
//     fputc('a',fp);

//     fclose(fp);

//     if((fp = fopen("dosya.txt","r")) == NULL)
//     {
//         printf("dosya acma hatasi");
//         exit(1);
//     }

//     for(i=0;i<10;i++)
//     printf("%c",fgetc(fp));
//     fclose(fp);

//     return 0;
// }


// void main(void)
// {
//     char dizi[41];
//     FILE *fp;
//     char *cp;
//     int i;

//     printf("Karakter dizisini giriniz: ");
//     gets(dizi);

//     if((fopen("dosya1.txt","w")) == NULL)
//     {
//         printf("Dosya acma hatasi");
//         exit(1);
//     }

//     cp = dizi;
//     while(*cp)
//     {
//         if(fputc(*cp,fp) == EOF)
//         {
//             printf("Dosya yazma hatasi\n");
//             exit(1);
//         }
//         cp++;
//     }
//     fclose(fp);
// }


// int main(void)
// {
//     char ch[80];
//     FILE *fp1, *fp2;

//     if((fp1 = fopen("test.doc","r")) == NULL)
//     {
//         printf("test.doc okuma için açilamadi");
//         exit(0);
//     }
//     if((fp2 = fopen("test1.doc","w"))==NULL)
//     {
//         printf("test1.doc yazdirma icin acilamadi");
//         exit(0);
//     }

//     fgets(ch,80,fp1);
//     printf("Okunan karakter dizi: %s\n",ch);
//     fclose(fp1);

//     fputs(ch,fp2);
//     printf("yazilan karakter dizisi: %s\n",ch);
//     fclose(fp2);
// }


// int main(void)
// {
//     FILE *dd;
//     int i;
//     char ad[20];
//     if((dd = fopen("d:\\isimler.txt","w"))==NULL)
//     printf("sürücü bulunamadi");

//     else
//     {
//         for(i=1;i<=5;i++)
//         {
//             printf("%d. adi giriniz: ");
//             fgets(ad,20,stdin);
//             fputs(ad,dd);
//         }
//         fclose(dd);
//     }
// }


// int main(void)
// {
//     FILE *dd;
//     char ad[20];
//     dd = fopen("d:\\isimler.txt","r");
//     if(dd==NULL) printf("sürücü bülünamadi");

//     else
//     {
//         while(!feof(dd))
//         {
//             fgets(ad,20,dd);
//             printf("%s",ad);
//         }
//         fclose(dd);
//     }
// }


// void main(void)
// {
//     FILE *fp;
//     int ud1;

//     if((fp=fopen("dosya.txt","rb")) == NULL)
//     {
//         printf("Dosya acilamadi\n");
//         exit(1);
//     }
//     ud1 = 0;
//     while(!feof(fp))
//     {
//         if(fgetc(fp) != EOF)
//         ud1++;
//         if(ferror(fp))
//         {
//             printf("Dosya okuma hatasi\n");
//             exit(1);
//         }
//     }
//     printf("Verilen dosyanin uzunlugu: %d byte\n",ud1);
//     fclose(fp);
// }



// int main(void)
// {
//     FILE *fp;
//     int a = 5;
//     int b;

//     fp = fopen("deneme.txt","w");
//     fwrite(&a, sizeof(int) ,1,fp);
//     fclose(fp);

//     fp = fopen("deneme.txt","r");
//     fread(&b,sizeof(int),1,b);

//     printf("b: %d\n",b);
//     fclose(fp);

//     return 0;
// }



// int main(void)
// {
//     FILE *fp;
//     int dizi[5];
//     int i;

//     for(i=0;i<5;i++)
//     {
//         printf("%d. int degerini giriniz: ",i+1);
//         scanf("%d",&dizi[i]);
//     }

//     if((fp = fopen("deneme.txt","wb")) == NULL)
//     {
//         printf("Dosya acilamadi");
//         exit(1);
//     }
//     for(i=0;i<5;i++)
//     {
//         if(fwrite(&dizi[i],sizeof(int),1,fp)!= 1)
//         {
//             printf("yazma hatasi");
//             exit(1);
//         }
//     }
//     fclose(fp);

//     if((fp = fopen("deneme.txt","rb"))== NULL)
//     {
//         printf("dosya acilamadi");
//         exit(1);
//     }

//     printf("degerleri silinmis dizi elemanlari");
//     for(i=0;i<5;i++)
//     {
//         dizi[i] = 0;
//         printf("%d",dizi[i]);
//     }
//     printf("\n");

//     for(i=0;i<5;i++)
//     {
//         if(fread(&dizi[i],sizeof(int),1,fp) != 1)
//         {
//             printf("Okuma hatasi\n");
//             exit(1);
//         }
//     }
//     fclose(fp);

//     printf("Dosyadan okunan dizi degerleri:\n");
//     for(i=0;i<5;i++)
//         printf("%d",dizi[i]);

//     return 0 ;
// }



// #include <stdio.h>
// #include <conio.h>
// #include <errno.h>

// struct kaytip
// {
//     char iz;
//     char ad[10];
//     char soyad[15];
//     char tel[10];
// };

// struct kaytip kayit;
// FILE *dd;
// int kayuz, kayno;
// long kaypos;
// char cevap;

// int main(void)
// {
//     dd = fopen("d:\\rehber.txt","r+");
//     if(errno = ENOENT)
//     dd = fopen("d:\\rehber.txt","w+");
//     kayuz = sizeof(kayit);

//     do
//     {
//         printf("\nKayit no:");
//         scanf("%d",&kayno);
//         kayit.iz = ' ';
//         kaypos = (kayno-1)*kayuz;
//         fseek(dd,kaypos,SEEK_SET);
//         fread(&kayit,sizeof(kayit),1,dd);
//         if(kayit.iz!='*')
//         {
//             printf("Adi: ");
//             scanf("%s"kayit.ad);
//             printf("Soyadi: ");
//             scanf("%s",kayit.soyad);
//             printf("Telefonu: ");
//             scanf("%s",kayit.tel);
//             kayit.iz = '*';
//             fseek(dd,kaypos,SEEK_SET);
//             fwrite(&kayit,sizeof(kayit),1,dd);
//         }
//         else
//         {
//             printf("Bu bolgede bir kayit var\n");
//             printf("Devam etmek istiyormusunuz(E/H)");
//             cevap = getch();
//         }
//         while(cevap!='h'&&cevap !='H')
//         fclose(dd);

//     }
// }




// typedef struct
// {
//     int hesapNo;
//     char Isim[100];
//     float bakiye;
// }stHesap;

// int main(void)
// {
//     FILE *fp;
//     stHesap hesap;

//     if((fp=fopen("musteri.txt","wb+"))==NULL)
//     {
//         printf("Dosya acilamadi");
//         exit(1);
//     }

//     printf("\n---------------Hesap veri girisi---------------");
//     while(1=1)
//     {
//         printf("Hesap no:");
//         scanf("%d",&hesap.hesapNo);

//         if(hesap.hesapNo == 0)
//             break;
//         printf("Isim: ");
//         scanf("%s",hesap.Isim);
//         printf("Bakiye: ");
//         scanf("%s",hesap.bakiye);

//         if(fwrite(&hesap,sizeof(hesap),1,fp)!=1)
//         {
//             printf("Yazma hatasi\n");
//             exit(1);
//         }
//         printf("\n");
//     }
//     rewind(fp);

//     stHesap hesap2;
//     printf("\n---------------Hesap LISTESI --------------- ");
//     while(fread(&hesap2,sizeof(hesap2),1,fp) == 1)
//     {
//         printf("Hesap no: %d\n",hesap2.hesapNo);
//         printf("Isim: : %s\n",hesap2.Isim);
//         printf("Bakiye: %d\n",hesap2.bakiye);
//         printf("\n");

//     }
//     return 0 ;
// }



// typedef struct
// {
//     int hesapno;
//     char isim;
//     float bakiye;
// }stHesap;

// int main(void)
// {
//     FILE *fp;
//     stHesap hesap;
//     if((fp = fopen("musteri.txt","wb+")) == NULL)
//     {
//         printf("Dosya acilamadi");
//         exit(1);
//     }

//     printf("\n hesap veri girisi");
//     while(1)
//     {
//         printf("Hesap no(1-100 arasi):");
//         scanf("%d",&hesap.hesapno);

//         if(hesap.hesapno == 0)
//             break;
//         printf("Isim: ");
//         scanf("%s",hesap.isim);
//         printf("Bakiye: ");
//         scanf("%f",&hesap.bakiye);
//         fseek(fp,(hesap.hesapno-1)*sizeof(hesap),SEEK_SET);

//         if(fwrite(&hesap,sizeof(hesap),1,fp)!= 1)
//         {
//             printf("Yazma hatasi");
//             exit(1);
//         }
//         printf("\n");
//     }
//     rewind(fp);stHesap hesap2;
//     printf("\nhesap listesi");
//     while(fread(&hesap2,sizeof(hesap2),1,fp))
//     {
//         printf("Hesap no: %d\n",hesap2.hesapno);
//         printf("Isim: %s\n",hesap2.isim);
//         printf("Bakiye: %f\n",hesap2.bakiye);
//         printf("\n");
//     }
//     return 0 ;
// }



// int main(void)
// {
//     FILE *fp;
//     if((fp = fopen("d:\\musteri.txt","w")) == NULL)
//     {
//         printf("Dosya acilamadi");
//         exit(1);
//     }
//     else
//     printf("musteri.txt dosyasi olusturuldu");
//     fclose(fp);
//     printf("Dosya silinecek eminmisiniz(E/H)");
//     if(toupper(getch())=='E')
//     remove("musteri.txt");
//     return 0 ;
// }


// int main(void)
// {
//     FILE *fp,*fp2;
//     char okunan;
//     fp = fopen("metin.txt","r");
//     fp2 = fopen("kelimeler.txt","w");
//     while((okunan = fgetc(fp))!=EOF)
//     {
//         if((okunan ==' ')|| (okunan == ','))
//             fputc("\n",fp2);
//         else
//             fputc(okunan,fp2);
//     }
//     fclose(fp);
//     return 0 ;
// }


// struct clientData{
//     int acctNum;
//     char lastName[15];
//     char firstname[10];
//     double balance;
// };

// int main(void)
// {
//     FILE *cfPtr;
//     struct clientData client = {0,"","",0.0};
//     if((cfPtr = fopen("d:\\ credit.dat","w+")) ==NULL)
//         printf("File could not be opened");
//     else
//     {
//         printf("Enter acoount number")
//     }
// }



/*Müşteri takip programı  bu program random access dosyası sıralı
erişim olarak okur dosyayı güncelleştirir dosyaya yeni kayıt ekler
ve kayıt siler*/

// void display(FILE *);
// void updateRecord(FILE *);
// void newRecord(FILE *);
// void deleteRecord(FILE *);
// int enterChoice(void);

// struct clientData
// {
//     int acctNum;
//     char lastname[15];
//     char firstName[10];
//     double balance;
// };
// int main(void)
// {
//     FILE *cfPtr;
//     int choice;
//     if((cfPtr = fopen("d:\\credit.dat","r+")) == NULL)
//         printf("File could not be opened");
//     else
//     {
//         while((choice = enterChoice())!=5)
//         {
//             switch(choice)
//             {
//                 case 1: 
//                 display(cfPtr);break;
//                 case 2:
//                 updateRecord(cfPtr); break;
//                 case 3:
//                 newRecord(cfPtr); break;
//                 case 4:
//                 deleteRecord(cfPtr);break;

//             }
//         }
//         fclose(fptr);
//     }
// }

// void display(FILE *readPtr)
// {
//     struct clientData client={0,"","",0.0};
//     rewind(readPtr);
//     printf("%-6s%-16s%-11s")
// }



// int main(void)
// {
//     int *ip;
//     //int veri türü boyutu kadar bir alan tahsis eder
//     ip = (int *)malloc(sizeof(int));
//     *ip= 126;
//     printf("Tahsis edilen bellek adres baslangici: %p\n",ip);
//     printf("Tahsis edilen bellekteki degsiken degeri: %d\n",*ip);
//     free(ip);
//     return 0;
// }

// int main(void)
// {
//     int *ip, id;
//     ip = (int*)calloc(5,sizeof(int));
//     for(id=0;id<5;id++){
//         *(ip+id) = (id+1)*10;
//         printf("%p adresindeki deger: %d\n",(ip+id),*(ip+id));
//     }
//     free(ip);
//     return 0;
// }


// int main(void)
// {
//     int *p,i;

//     p = calloc(15,sizeof(int));
//     p = (int *)malloc(sizeof(int)*15);
    
//     for(i=0;i<15;i++)
//     {
//         printf("%d. eleman ---> %d\n",i+1,p[i]);
//     }

//     free(p);
//     return 0 ;
// }


// int main(void)
// {
//     char *str;

//     str = (char *)malloc(10);
//     strcpy(str,"Algoritma");
//     printf("Deger = %s, Adres = %u\n",str,str);

//     str = (char *)realloc(str,25);
//     strcat(str,"veprogramlama");
//     printf("Deger = %s ,Adres = %u\n",str,str);

//     free(str);
//     return 0;
// }


// int main(void)
// {
//     char *pdizi[5];
//     int id;
//     //Bellek tahisi
//     for(id=0;id<5;id++)
//     {
//         pdizi[id] = (char *)malloc(20 *sizeof(char));
//     }
//     //Dizi atama
//     for(id=0;id<5;id++){
//         strcpy(pdizi[id] ,"Karakter dizisi");
//     }
//     //yazdırma
//     for(id=0;id<5;id++) {
//         printf("%s\n",pdizi[id]);
//     }
//     //bellek boşaltma
//     for(id=0;id<5;id++){
//         free(pdizi[id]);
//     }
//     return 0;
// }

// int main(void)
// {
//     int *ip;
//     //int veri türü boyutu kadar alan tahsisi
//     ip = (int *)malloc(sizeof(int));
//     *ip = 126;
//     printf("Tahsis edilen bellek adres baslangici:%p\n",ip);
//     printf("Tahsis edilen bellekteki adres degeri: %d\n",ip);
//     free(ip);
//     return 0 ;
// }


// int main(void)
// {
//     int *ip,id;
//     ip = (int *)calloc(5,sizeof(int));
//     for(id=0;id<5;id++){
//         *(ip+id) = (id +1)*10;
//         printf("%p adresindeki deger : %d\n",(ip+id),*(ip+id));
//     }
//     free(ip);
//     return 0;

// }


// int main(void)
// {
//     int *p , i;

//     p = (int *)malloc(sizeof(int)*15);
//     for(i=0;i<15;i++)
//         printf("%d. eleman ---> %d\n",i+1,p[i]);

//     free(p);
//     return 0 ;
// }


// int main(void)
// {
//     char *str;

//     str = (char *)malloc(10);
//     strcpy(str,"Algoritma");
//     printf("Deger = %s, Adres = %u\n",str,str);

//     str = (char *)realloc(str,25);
//     strcat(str,"Veprogramlama");
//     printf("Deger = %s, Adres = %u\n",str,str);

//     free(str);
//     return 0;
// }


// int main(void)
// {
//     char *pdizi[5];
//     int id;
//     //Bellek tahsisi
//     for(id=0;id<5;id++)
//         pdizi[id] = (char *)malloc(20*sizeof(char));
//     //dizi atama
//     for(id=0;id<5;id++)
//         strcpy(pdizi[id],"Karakter dizisi");
//     //yazdırma
//     for(id=0;id<5;id++)
//         printf("%s\n",pdizi[id]);
//     //bellek boşaltma
//     for(id=0;id<5;id++) 
//         free(pdizi[id]);
//     return 0;
// }


// int main(void)
// {
//     char *cp;
//     cp = (char *)malloc(40);
//     if(!cp){
//         printf("Bellek tahsisi hatasi");
//         exit(1);
//     }
//     strcpy(cp,"Bilgisayar");
//     printf("%s",cp);
//     free(cp);
//     return 0;
// }


// int main(void)
// {
//     char *cp1 = "İlk karakter dizisi";
//     char *cp2,*cp3;
//     char cdizi[30];
//     cp2 = "İkinci karakter dizisi";
//     cp3 = (char *)malloc(50);
//     strcpy(cp3,"Ücüncü karakter dizisi");
//     //malloc() ve free() fonksiyonları kullanılmadığında hata verir
//     strcpy(cdizi,"Dördüncü karakter dizisi");
//     printf("%s\n%s\n%s\n%s",cp1,cp2,cp3,cdizi);
//     free(cp3);
//     return 0;
// }


// int main(void)
// {
//     int *ip,id;
//     ip = (int *)malloc(5*sizeof(int));
//     for(id=0;id<5;id++){
//         *(ip+id) = id+1;
//         printf("%p adresindeki deger: %d\n",(ip+id),*(ip+id));
//     }
//     ip = (int *)realloc(ip,10*sizeof(int));
//     printf("Genisletilmis bellek degerleri \n");
//     for(;id<10;id++) { //burada id degisken degeri 5 olarak baslar
//         *(ip+id) = id+1;
//         printf("%p adresindeki deger: %d\n",(ip+id),*(ip+id));
//     }      
//     free(ip);
//     return 0;
// }

// int main(void)
// {
//     int *dizi,i;
//     int n;
//     float toplam = 0;
    
//     printf("Dizinin boyutunu giriniz: ");
//     scanf("%d",&n);

//     dizi = (int *)malloc(sizeof(int)*n);
//     for(i=0;i<n;i++){
//         printf("%d. eleman giriniz: ",i+1);
//         scanf("%d",&dizi[i]);
//     }
//     for(i=0;i<n;i++)
//         toplam +=dizi[i];
    
//     printf("\nToplama: %.lf\n",toplam);
//     printf("\nOrtalama: %.3f\n",(toplam/n));
//     return 0;
// }


// char *SubString(char*,int,int);
// int main(void)
// {
//     char dizi[100],*pointer;
//     int pozisyon,uzunluk;
//     printf("Karakter dizisini giriniz: ");//16
//     gets(dizi);
//     printf("Kopyalama baslangic pozisyonunu giriniz: ");//10
//     scanf("%d",&pozisyon);
//     printf("Kopyalanacak karakter sayisini giriniz:");//6
//     scanf("%d",&uzunluk);
//     pointer = SubString(dizi,pozisyon,uzunluk);
//     printf("Sonuc: \"%s\"\n",pointer);

//     return 0 ;
// }

// char *SubString(char*dizikopya,int pozisyon,int uzunluk)
// {   
//     char *pointer;
//     int i;
//     pointer = (char *)malloc(sizeof(char)*(uzunluk+1));
//     if(pointer ==NULL){
//         printf("Bellekte yer tahsis edilemedi\n");
//         exit(1);
//     }
//     //dizikopya pozisyonunda itibaren uzunluk kadar pointer işaretcisine kopyalanıyor
//     for(i=0;i<uzunluk;i++)
//     {
//         *(pointer+i) = *(dizikopya + pozisyon);
//         dizikopya++;
//     }

//     //NULL karakteri ekleniyor
//     *(pointer + i) = '\0';
//     return pointer;
// }   



// #include <stdio.h>
// struct deneme {
//   int yas;
//   char ad;
// } mn;
//  int main(void)
// {   printf("deneme yapisinin uzunlugu: %d\n", sizeof (struct deneme));
//   	printf("deneme yapisinin uzunlugu: %d", sizeof (mn));
//   return 0; }




// #include <stdio.h>
// void fonk1(char cd);
// char fonk2(char cd1);
// int main(void)
// {     char cd1 = 87; /* 'W' 01010111 */
//   char cd2;
//   printf("Karakter değeri: %c %d  ", cd1, cd1);  
//     fonk1(cd1);
//   cd2 = fonk2(cd1);
//     printf("Karakter değeri: %c %d  ", cd2, cd2); /* 'u' 01110101 */
//     fonk1(cd2);
//     return 0;      }
// void fonk1(char cd)
// {    int id;
//   for (id=128; id>0; id/=2) {
//        if (cd&id) printf("1 ");
//        else printf("0 ");       }
// printf("\n"); }
// char fonk2(char cd1)
// {      struct yap1 {
//     char cd1:4;
//     char cd2:4;
//   };
//   union bir1 {
//     char cd1;
//     struct yap1 yd1;
//   } bd1;
//   char cd2;
//   bd1.cd1 = cd1;             // 1
//   cd2 = bd1.yd1.cd1;         // 2
// bd1.yd1.cd1 = bd1.yd1.cd2; // 3
//   bd1.yd1.cd2 = cd2;         // 4
//   return bd1.cd1; }


// #include <stdio.h>
// int main()
// {   int *ab;    int m;
//    m = 17; 
//    printf("\n\n Pointer kullanimi:\n"); 
//    printf(" ab = int pointer'i, int m = 17\n\n"); 
//    printf(" m'nin adresi : %p\n",&m);
//    printf(" m'nin degeri : %d\n\n",m);
//    ab = &m;
//    printf(" m'nin adresi ab'ye atandı.\n");
//    printf(" ab'nin adresi : %p\n",ab);
//    printf(" ab'nin icerigi : %d\n\n",*ab);
//    m = 35;
//    printf(" m'ye 35 degeri atandi.\n");
//    printf(" ab'nin adresi : %p\n",ab);
//    printf(" ab'nin icerigi : %d\n\n",*ab);
//    *ab = 8;
//    printf(" ab'nin isaret ettigi degiskenin degeri 8 olarak atandi.\n");
//    printf(" m'nin adresi: %p\n",&m);
//    //ab m'nin adresini icerdigi icin
// //m 'nin degeri 8 olarak degisti
//    printf(" m'nin degeri : %d\n\n",m);
//    return 0;}




// #include <stdio.h>
// int main(void)
// {  int *ip;
//   int idizi[5] = { 6, 20, 30, 65, 95 };
//   printf("isaretci bellek adresi: %p\n\n", &ip);
//   ip = &idizi[4];
//   printf("isaretcinin icerdigi adres: %p\n", ip);
//   printf("isaretcinin gosterdigi degisken degeri: %d\n\n", *ip);
//   ip-=2; // ip -= (4 * sizeof (int));
//   printf("isaretcinin icerdigi adres: %p\n", ip);
//   printf("isaretcinin gosterdigi degisken degeri: %d\n\n", *ip);
//   return 0;}




// int f(int n)
// {
//     int f = 1, i;
//     for(i=1;i<n;i++)
//         f*=i;
//     return f;
// }

// int main(void)
// {
//     int (*pf)(int);
//     pf = &f;

//     printf("Fonksiyonun adresi: %p\n",&f);
//     printf("Fonksiyonun adresi: %p\n",pf);

//     int sonuc = pf(4);
//     printf("sonuc: %d\n",sonuc);

//     return 0;

// }




// #include <stdio.h> 
// void main() 
// { FILE *dd; 
// int i, no; 
// dd=fopen("d:\\rakam.txt","w"); 
// /* dosya, yazma modunda açılıyor */ 
// if (dd == NULL) 
// printf("Surucu bulunamadi.\n"); 
// else 
// { for(i=1; i<=5; i++) 
// { printf("%d. sayiyi giriniz:",i); 
// scanf("%d",&no); 
// fprintf(dd,"%d\n", no);    } 
// fclose(dd); }  } 




// #include <stdio.h>
// #include <stdlib.h>
// void DosyaYaz()
// {    int ogr_sayisi = 2, i=0;
//     char  Ad[10];
//     int   No, Not;
//     FILE *pDosya;
//     pDosya = fopen("ogrenci.txt", "w");
//     if(pDosya == NULL )
//     {
//       printf("ogrenci.txt dosyasi acilmadi. !\n");
//       exit(1);       }
//     printf("OGRENCI BILGILERINI GIRINIZ:\n----------------\n");
//     while( i++<ogr_sayisi )
//     {
//         printf("%d. OGRENCI NO      : ",i);
//         scanf("%d",&No);
//         printf("%d. OGRENCI ADI     : ",i);
//         scanf("%s",Ad);
//         printf("%d. OGRENCI NOTU    : ",i);
//         scanf("%d",&Not);
//         printf("\n");
//         fprintf(pDosya,"%5d %10s %3d\n",No,Ad,Not); /* verileri formatlıyaz! */
//     }
//     printf("OGRENCI BILGILERI KAYDEDILDI\n\n");
//     fclose(pDosya);
// }
// void DosyaOku()
// {
//     char  Ad[10];
//     int   No, Not;
//     FILE *pDosya;
//     pDosya = fopen("ogrenci.txt", "r");
//     if(pDosya == NULL )
//     {      printf("ogrenci.txt dosyasi acilmadi. !\n");
//       exit(1);     }
//     int c;
// printf("OGRENCI BILGILERI DOSYADAN OKUNUYOR\n\n\n");
//     printf("OGRENCI BILGILERI\n");
//     printf("-----------------\n");
//     while(c != EOF)
//     {
//         c = fscanf(pDosya,"%d %s %d",&No,Ad,&Not);
//         if (c != EOF)
//      printf("NO=%d \nAD=%s \nNOT=%d \n \n",No,Ad,Not);
//     }
//     fclose(pDosya);
// }
// int main()
// {    DosyaYaz();
//     DosyaOku();
//     return 0;   }



// int main(void)
// {
//     char *str;

//     str = (char *)malloc(10);
//     strcpy(str,"Algoritma");
//     printf("Deger = %s , Adres = %u\n",str,str);
    
//     printf("%p ",str);
//     str = (char *)realloc(str,25);
//     strcat(str,"veprogramlama");
//     printf("Deger=%s, Adres = %u\n",str,str);
//     printf("%p ",str);

//     free(str);

//     return 0;
// }



int main(void)
{
    int a[] = {1,3,4,5};
 
    printf("%d",a[0]);
}