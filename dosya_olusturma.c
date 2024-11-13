#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
//         FILE *fp;

//         if((fp = fopen("text.doc","w")) == NULL)
//         {
//             printf("text.doc dosyasi acilamadi ...\n");
//             printf("program kapatiliyor...\n");
//             exit(0);
//         }
//         else
//         {
//             printf("text.doc dosyasi acildi...\n");
//             printf("fp nin degeri : 0x%p\n",fp);

//             printf("dosya kapatiliyor...\n");
//             fclose(fp);
//         }
// }


//  void main()
//  {
//      FILE *dd;
//      int i, no;
//      dd = fopen("d:\\rakam.txt","r");
//      /*dosya yazma modunda açılıyor*/
//      if(dd == NULL)
//      {
//          printf("sunucu bulunamadi\n");
//      }
//      else
//      {
//          for(i=1; i<=5;i++)
//          {
//              printf("%d. sayiyi giriniz: ",i);
//              scanf("%d",&no);
//              fprintf(dd,"%d\n",no);
//              fclose(dd);
//          }
//      }
//  }


// void main()
// {
//     FILE *dd;
//     int no;/*dosya okuma modunda açılıyor*/
//     if((dd = fopen("d:\\rakam.txt","r") == NULL))
//     printf("surucu veya dosya bulunamadi");
//     else
//     {
//         while(fscanf(dd,"%d",&no)!= EOF)
//             printf("%d\n",no);
//             fclose(dd);
//     }
// }

// int main(void)
// {
//     FILE *fp;

//     fp = fopen("hangiyildayiz.txt","w+");
//     if(fp == NULL)
//     {
//         printf("hangi yildayiz.txt dosyasi acimadi. \n");
//         exit(1);
//     }
//     fprintf(fp,"%s %d %s","Bu sene ",2022,"yilindayiz");
//     fclose(fp);
    
//     return 0 ;
// }

// int main(void)
// {
//     FILE *fp;
//     fp = fopen("hangiyildayiz.txt","r");

//     if ( fp==NULL)
//     {
//         printf("Dosya okunmadi\n");
//         exit(1);
//     }
//     int yil;
//     char s1[10];
//     char s2[10];
//     fscanf(fp,"%s%d%s",s1,&yil,s2);
//     printf("Yil: %d,yil");
//     return 0;
// }

// int main(void)
// {
//     FILE *fp;
//     fp = fopen("r2.txt","r");
//     if (fp == NULL)
//     {
//         printf("Dosya acarken hata olustu...\n");
//         exit(1);
//     }
//     int crs, sayac = 0;
//     int sayi, enBuyuk, enKucuk;
//     while(crs!=EOF)
//     {
//         crs = fscanf(fp,"%d",&sayi);
//         if(crs != EOF)
//         {
//             if(sayac == 0)
//             {
//                 enBuyuk = sayi;
//                 enKucuk = sayi;
//             }
//             else
//             {
//                 if(sayi>enBuyuk)
//                     enBuyuk = sayi;
//                 if(sayi<enKucuk)
//                     enKucuk = sayi;
//             }
//             sayac++;
//         }
//     }
//     printf("En buyuk sayi: %d\n",enBuyuk);
//     printf("En kucuk sayi: %d\n",enKucuk);
//     fclose(fp);
//     return 0 ;
// }

/*
    r = dosyayı verş okumak için aç 
    w = dosyayı verş yazmak için aç.Eskisini siler üstüne tekrar oluşturur
    a = dosyayı verş eklemek için aç.Sadece veri eklemek
    */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(void)
// {
//     FILE *fptr;
//     fptr  = fopen("C:\\Users\\faika\\Desktop\\data\\data.txt.txt","w");
//     fclose(fptr);
//     return 0 ;
// }


/*DOSYA YAZMA İŞLEMİ*/
// int main(void)
// {
//     FILE *fptr;
//     fptr = fopen("C:\\Users\\faika\\Desktop\\data\\data.txt.txt","w");
//     char name = 'F', name2 = 'A';
//     if(fptr == NULL)
//         printf("file open unsuccesful!\n");
//     else
//     {   
//         for(name = 'A';name<='Z';name++)
//         {
//             putc(name,fptr);
//             putc('\n',fptr);
//         }
//         printf("Data is written to file \n");
//     }
//     fclose(fptr);
//     return 0 ;
// }


/*DOSYA YAZDIRMA*/
// int main(void)
// {
//     FILE* fptr;
//     char data[60];
//     fptr = fopen("C:\\Users\\faika\\Desktop\\data\\data.txt.txt","w");
//     if(fptr == NULL)
//         printf("File open uncuccsessul");
//     else
//     {
//         printf("Enter a sentence: ");
//         gets(data);

//         fprintf(fptr,"cumleniz: %s",data);
//         printf("data was written to file succsessfuly");
//     }
//     fclose(fptr);
//     return 0 ;
// }


/*fwrite'ın kullanımı*/
// int main(void)
// {
//     FILE* fptr;
//     int numbers[7],i;
//     fptr = fopen("C:\\Users\\faika\\Desktop\\data\\data.txt.txt","r");
//     if(fptr == NULL)
//         printf("File open unsuccsesfuly");
//     else
//     {
//         printf("Enter a 7 numbers: ");
//         //fwrite ile yazdığımız dosayı burdan okuyabilirz
//         fread(numbers,sizeof(int),7,fptr);
//         for(i=0;i<7;i++)    
//             printf("%d\n",numbers[i]);

//         //fwrite(numbers,sizeof(int),7,fptr);/*ilk sayi sonra boyutu sonra miktarı sonra hangi dosya olduğu*/

//         printf("Data was written to file successfuly\n");
//     }
//     fclose(fptr);
//     return 0 ;
// }


/*DOSYA OKUMA*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(void)
// {
//     FILE* fptr;
//     char data[100];
//     //char myLetter;
//     fptr = fopen("C:\\Users\\faika\\Desktop\\data\\data.txt.txt","r");
//     if(fptr == NULL)
//         printf("File open unsuccessful");
//     else
//     {
//         fgets(data,10,fptr);//2.şey kaç harf okumasını söyler.Veri okumanı sağlar
//         printf("%s\n\n",data);//fputs veri yazmanı sağlar


//         // do
//         // {
//         //     myLetter=getc(fptr);// tek harf alarak ilerler
//         //     printf("Text read from file: %c\n",myLetter);//bütün tek harfleri yazdırır
//         // } while (myLetter !=EOF);
//         // printf("\nReading is over\n");
//     }
//     fclose(fptr);
//     return 0;
// }


/*KONUM GÖSTERGECİ AYARLARI*/
// int main(void)
// {
//     FILE* fptr;
//     char data[100];
//     fptr = fopen("data.txt","r");
//     if(fptr == NULL)
//         printf("File open unsuccessful");
//     else
//     {
//         printf("Konum gostergeci yeri: %d\n,",ftell(fptr));//konumun yerini bize söyler
//         fseek(fptr,50,SEEK_SET);//50 satır ileri git demek
//         printf("Konum gostergeci yeri: %d\n",fteel(fptr));
//         fgets(data,100,fptr);//100
//         printf("%s\n",data);
//         printf("Konum gostergeci yeri: %d\n",fteel(fptr));
//         rewind(fptr);//konumu en başa almak
//     }
//     fclose(fptr);
//     return 0 ;
// }

/*DOSYA KLONLAMA*/
// int main(void)
// {
//     FILE *fptr, *fptrcopy;
//     fptr = fopen("data.txt","r");
//     fptrcopy = fopen("datacopy.txt","w");
//     if(fptr == NULL)
//         printf("data.txt open unsuccsesfull");
//     else
//         if(fptrcopy == NULL)
//             printf("datacopy.txt open  unsuccsessful\n");//dosya kopyalama işi
//         else
//         {
//             while(!feof(fptr))//dosyanın sonuna kadar oku demek
//                 putc(getc(fptr),fptrcopy);
//         }
//         printf("The file has been copied\n");
//     fclose(fptr);
//     fclose(fptrcopy);
//     return 0;
// }

// FPUTS FGETC KULLANIM

// int main(void)
// {
//     FILE *fp;
//     fp = fopen("dosya.txt","w");

//     if(fp == NULL)
//     {
//         printf("Dosya olusturulurken bie hata olustu");
//         exit(1);
//     }
//     fputc('a',fp);
//     fclose(fp);

//     fp = fopen("dosya.txt","r");
//     if(fp == NULL)
//     {
//         printf("dosya olusturulurken bir hata olustu");
//         exit(1);
//     }

//     char okunan;
//     okunan = fgetc(fp);
//     if(okunan == EOF)
//     {
//         printf("karakter okunmadi");
//     }
//     else
//     {
//         printf("okunan karakter : %d\n",okunan);
//     }

//     return 0;
// }


int main(void)
{
    double x[6] = {1.1,3.3,7.1,5.4};
    double *p;
    int k ;
    for(k = 1; k< 6;k++)
    {
        printf("")
    }

}