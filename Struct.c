// // struct'larda birden fazla variable kullanabiliriz
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// struct students{// students kendi oluşturduğum bir veri yani int gibi
//     char myLetter;
//     char* name;
//     char* lastname;
//     int no;
//     float score;
//     char parentName[40];
// };

// int main(void)
// {

//     // Atamayı tek satırdada halledebiliriz
//     struct students x={'A',"Murat","Bastug",1923,95.6,"Ahmet"}; //sttudents int gibi bir veri x te variable'dir
    
//     //NOT:  X2 = X diyerek struct ları kopyalayabilirz
//     // x.myLetter = 'A';   // atama yaparkende nokta koyarak atama yapılır
//     // x.name = "Murat";
//     // x.lastname = "Bastug";
//     // x.no = 1923;
//     // x.score = 95.6;
//     // strcpy(x.parentName,"Yarrak");

// /*Struct'ları yazdırmak */
//     printf("Letter: %c\n",x.myLetter);
//     printf("Name: %s\n",x.name);
//     printf("lastname: %s\n",x.lastname);
//     printf("no: %d\n",x.no);
//     printf("score: %.2f\n",x.score);
//     printf("parentName: %s\n", x.parentName);

//     printf("-----------------------\n");



//     return 0 ;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// struct Car{
//     char brand[60];
//     char model[60];
//     int year;
// };

// int main(void)
// {
//     struct Car c1 = {"Opel","Corsa",1990};
//     struct Car c2 = {"Ford","Focus",1999};
//     struct Car c3 = {"BMW","X5",1998};

//     printf("%s %s %d\n",c1.brand,c1.model,c1.year);
//     printf("%s %s %d\n",c2.brand,c2.model,c2.year);
//     printf("%s %s %d\n",c3.brand,c3.model,c3.year);
// }

/*UYGULAMA*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// struct myDate{
//     int day;
//     int month;
//     int year;
// };

// int main(void)
// {
//     struct myDate x;
//     struct myDate y;

//     printf("Enter your date of birth: ");
//     scanf("%d%d%d", &x.day,&x.month,&x.year);

//     printf("Enter today's date: ");
//     scanf("%d%d%d",&y.day,&y.month,&y.year);

//     if(x.day>y.day)
//     {
//         y.day+=30;
//         y.month-=1;
//     }
//     if(x.month>y.month)
//     {
//         y.month+=12;
//         y.year-=1;
//     }

//     printf("\n You have lived\n");
//     printf("%d day , %d month, %d year\n",y.day-x.day,y.month-x.month,y.year-x.year);
//     printf("till now \n\n");

//     return 0 ;
// }

/*Struct'lerin dizilerde kullanımı*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// struct books{
//     char bookname;
//     char writer;
//     int page;
//     int year;
// };

// int main(void)
// {
//     int i; //döngüde sayaç için
//     struct books x[2];//2 tane kullanmak manasına gelir

//     //kullanımı
//     x[0].bookname="Harry Potter ve Felsefe Tasi";
//     x[0].writer = "J.K Rowling";
//     x[0].page = 238;
//     x[0].year = 1960;

//     x[1].bookname ="Bu ulke";
//     x[1].writer = "Cemil meric";
//     x[1].page = 245;
//     x[1].year = 1960;

//     for(i=0;i<2;i++)
//     {
//         printf("%d. book\n",i+1);
//         printf("Book name: %s\n", x[i].bookname);
//         printf("write :%s\n",x[i].writer);
//         printf("page: %d\n",x[i].page);
//         printf("year: %d\n", x[i].year);
//     }

//     return 0 ;
// }


/*Struct yi fonksiyonlarla nasıl kullanılır*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// struct info{
//     char* name;
//     int age;
// };
// void showMe(struct info );// böyle belirtmek zorundayız
// int main(void)
// {
//     struct info x;
//     x.name="Faik";
//     x.age = 19;

//     showMe(x);

//     return 0 ;
// }
// void showMe(struct info x)
// {
//     printf("Name : %s\n", x.name);
//     printf("Age: %d\n", x.age);
// }


/*struct'lerin pointerlerle kullanımı*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// struct books{
//     char* bookname;
//     char* writer;
//     int page;
//     int year;
// };

// int main(void)
// {
//     struct books x;
//     struct books* y;
//     y = &x;
//     (*y).bookname="Bu Ulke";
//     (*y).writer = "Cemil Meric";
//     (*y).page = 256;
//     (*y).year = 1960;

//     printf("Book name: %s\n",(*y).bookname);
// //     printf("Writer : %s\n", (*y).writer);
// //     printf("page: %d\n", (*y).page);
// //     printf("year: %d\n",(*y).year);

// //     return 0 ;
// // }


// /*iç içe struct'lar*/
// // #include <stdio.h>
// // #include <stdlib.h>
// // #include <math.h>

// // struct candidateInfo{
// //     char* name;
// //     char* lastname;
// //     int age;
// //     int note;
// //     float avarege;
// // };
// // struct interview{
// //     char* interviewer;
// //     char* interviewDate;
// //     struct candidateInfo candidate;
// //     int interviewNote;
// // };

// // int main(void)
// // {
// //     struct interview y;
// //     y.interviewer = "Muslume gun";
// //     y.interviewDate = "25.05.2009";
// //     y.interviewNote = 85  ;

// //     // iç içe struct'ları böyle alırız
// //     y.candidate.name = "yarak";
// //     y.candidate.lastname = "kafali";
// //     y.candidate.age = 18;
// //     y.candidate.note = 80;
// //     y.candidate.avarege = 2.69;

// //     return 0 ;
// // }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//  struct Ogrenci
//  {
//     int No;
//     char Ad[50];
//     char Soyad[50];
//     int Cinsiyet;
//     int FakulteBolum;
//     float GenelOrtalama;
//  };
//  int main(void)
//  {
//     struct Ogrenci ogrenci_bilgisi1,ogrenci_bilgisi2;

//     ogrenci_bilgisi1.No =1;
//     strcpy(ogrenci_bilgisi1.Ad,"Ada");
//     strcpy(ogrenci_bilgisi1.Soyad,"KILINC");
//     ogrenci_bilgisi1.FakulteBolum = 11;
//     ogrenci_bilgisi1.GenelOrtalama = 4.5;

//     ogrenci_bilgisi2 = ogrenci_bilgisi1;
//     printf("1. OgreciNo: %d\n",ogrenci_bilgisi1.No);
//     printf("2. OgrenciNo: %d\n",ogrenci_bilgisi2.No);

//     return 0 ;

//  }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void fonk1(char cd);
// void fonk2(char cd1);
// int main(void)
// {
//     char cd1 = 87;/*'W' 01010111*/
//     char cd2;
//     printf("Karakter Degeri: %d %d",cd1,cd1);

// fonk1(cd1);
// cd2 = fonk2(cd1);

// printf("Karakter degeri: %c %d",cd2,cd2);/*'u' 01110101*/
// fonk1(cd2);
// return 0 ;

// void fonk1(char cd)
// {
//     int id;
//         for(id=128;id>0;id/=2){
//             if(cd&id) printf("1");
//         }
//         else printf("0");
//         printf("\n");
// }
// char fonk2(char cd1)
// {
//     struct yap1{
//         char cd1:4;
//         char cd2:4;
//     };
//     union bir1{
//         char cd1;
//         struct yap1 yd1;
//     }bd1;
    
//     char cd2;
//     bd1.cd1 = cd1; //1
//     cd2 = bd1.yd1.cd1; //2
//     bd1.yd1.cd1 = bd1.yd1.cd2; //3
//     bd1.yd1.cd2 = cd2; //4
//     return bd1.cd1;
// }
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int tam = 33;
//     int *ptam;

//     ptam = &tam;

//     printf("tam icerik = \t %d \n ",tam);
//     printf("tam adres = \t %p \n", &tam);
//     printf("tam adres = \t %d \n",*ptam); //tam ın adrsini kaydeder

//     return 0 ;
// }

#include <stdio.h>
#include <stdlib.h>
// struct deneme{
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

// struct yap{
//     int id;
//     char cd;
// }yd;
// void fonk(struct yap yd);
// int main(void)
// {
//     struct yap yd;
//     yd.id = 21;
//     yd.cd = 'A';
//     fonk(yd);
//     printf("%d %c",yd.id,yd.cd);
//     return 0 ;
// }
// void fonk(struct yap yd)
// {
//     yd.id+=5;
//     yd.cd+=5;
//     printf("%d %c\n",yd.id,yd.cd);
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>

// struct yap2{
//     char cdizi[30];
// };
// struct yap1{
//     char cdizi1[15];
//     char cdizi2[15];
//     int id;
//     struct yap2 yd2;
// }yd1;

// int main(void)
// {
//     strcpy(yd1.cdizi1,"Algoritma ve");
//     strcpy(yd1.cdizi2,"Programlama 2");
//     yd1.id=35;
//     strcpy(yd1.yd2.cdizi,"Manisa Celal bayar üniversitesi");
//     printf("%s%s%d\n",yd1.cdizi1,yd1.cdizi2,yd1.id);//yazdırma
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// // struct deneme
// // {
// //     int yas;
// //     char ad;
// // }mn;

// // int main(void)
// // {
// //     printf("deneme yapisinin uzunlugu: %d\n",sizeof(struct deneme));
// //     printf("deneme yapisinin uzulugu:%d\n",sizeof(sizeof (mn)));
// // }



// struct Ogrenci
// {
//     int no;
//     char Ad[50];
//     char Soyad[50];
//     int Cinsiyet;
//     int FakulteBolum;
//     float genelOrtalama;
// };

// void OgrenciBilgisiYazdirma(struct Ogrenci ogr)
// {
//     printf("No:%d\n Ad:%s\n",ogr.no,ogr.Ad);
// }

// int main(void)
// {
//     struct Ogrenci ogrenci_test;
//     ogrenci_test.no = 1000;
//     strcpy(ogrenci_test.Ad,"test");
//     OgrenciBilgisiYazdirma(ogrenci_test);
//     return 0 ;
// }


// typedef struct
// {
//     char plaka[50];
//     char Model[50];
//     char Renk[50];
// }AracOzellik;
// typedef struct
// {
//     AracOzellik Ozellikler;
//     char girisSaati[12];
// }Arac;
// typedef struct
// {
//     Arac Araclar[1000];
//     int arac_sayisi;
// }Otopark;
// Otopark BaharOtopark = {0};
// int main(void)
// {
//     AracEkle();
//     AracEkle();
//     Araclari_Listele();
//     return 0 ;
// }
// void AracEkle()
// {
//     Arac arc;
//     printf("\nArac bilginizi giriniz:\n");
//     printf("Plaka:");
//     gets(arc.Ozellikler.plaka);
// }


// struct Ogrenci
// {
//     int No;
//     char Ad[50];
//     char Soyad[50];
//     int Cinsiyet;
//     int FakulteBolum;
//     float GenelOrtalama;
// };

// int main(void)
// {
//     struct Ogrenci ogrenci_bilgisi1,ogrenci_bilgisi2;

//     ogrenci_bilgisi1.No = 1;
//     strcpy(ogrenci_bilgisi1.Ad,"Ada");
//     strcpy(ogrenci_bilgisi1.Soyad,"Kilinc");
//     ogrenci_bilgisi1.FakulteBolum = 11;
//     ogrenci_bilgisi1.GenelOrtalama = 4.5;

//     ogrenci_bilgisi2 = ogrenci_bilgisi1;

//     printf("1. OgrenciNo: %d\n",ogrenci_bilgisi1.No);
//     printf("2. OgrenciN: %d\n",ogrenci_bilgisi2);
//     return 0 ;
// }


// struct yap2{
//     char cdizi[30];
// };
// struct yap1{
//     char cdizi1[15];
//     char cdizi2[15];
//     int id;
//     struct yap2 yd2;
// }yd1;
// int main(void)
// {
//     strcpy(yd1.cdizi1,"Algoritma ve");
//     strcpy(yd1.cdizi2,"Programlama");
//     yd1.id=35;
//     strcpy(yd1.yd2.cdizi,"Manisa celal bayar üniversitesi");
//     printf("%s%s%d\n",yd1.cdizi1,yd1.cdizi2,yd1.id);
//     printf("%s",yd1.yd2.cdizi);
//     return 0;
// }

// struct daire
// {   char ad[20];
//     struct birim
//     {
//         char ad[20];
//         struct personel
//         {
//             char soyad[20];
//             char ad[20];
//             int sicilNo;
//             int derece;
//         }baskan,sef,memur[10];
//     }altbirim[15];
// }m;

// int main(void)
// {
//     m.altbirim[7].sef.sicilNo = 2457;
//     printf("%d\n",m.altbirim[7].sef.sicilNo);
// }


// struct Ogrenci
// {
//     int No;
//     char Ad[50];
//     char Soyad[50];
//     int Cinsiyet;
//     int FakulteBolum;
//     float GenelOrtalama;
// };
// void OgrenciBilgisiYazdir(struct Ogrenci ogr)
// {   
//     printf8("No: %d\n Ad: %s\n",ogr.No,ogr.Ad);
// }
// int main(void)
// {
//     struct Ogrenci ogrenci_test;
//     ogrenci_test.No = 1000;
//     strcpy(ogrenci_test.Ad,"test");
//     OgrenciBilgisiYazdir(ogrenci_test);
//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>
// typedef struct
// {
//     char plaka[50];
//     char model[50];
//     char renk[50];
// }AracOzellik;
// typedef struct
// {
//     AracOzellik Ozellikler;
//     char girisSaati[12];
// }Arac;
// typedef struct
// {
//     Arac Araclar[1000];
//     int aracSayisi;
// }Otopark;
// Otopark BaharOtoPark = {0};
// int main(void)
// {
//     AracEkle();
//     AracEkle();
//     AracListele();
//     return 0 ;
// }
// void AracEkle()
// {
//     Arac arc;
//     printf("\nArac bilgilerini giriniz: \n");
//     printf("\nplaka");
//     gets(arc.Ozellikler.plaka);
//     printf("\nModel: ");
//     gets(arc.Ozellikler.model);
//     printf("\nRenk");
//     gets(arc.Ozellikler.renk);
//     printf("Giris saati: ");
//     gets(arc.girisSaati);
//     BaharOtoPark.Araclar[BaharOtoPark.aracSayisi] = arc;
//     BaharOtoPark.aracSayisi++;
// }



