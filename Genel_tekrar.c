// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// typedef struct{
//     char name[20];
//     char lastname[20];
//     char phone[11];
// }Record; 
// void menu();
// int phoneAdd();
// int phoneList();
// int phoneSearch();  

// int main(void)
// {
//     int choice=0;
//     char searchName[20];
//     int searchResult=0;
//     menu();
//     do{
//         printf("\n\n Seciminizi giriniz: ");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:if(phoneAdd() == 0)
//                         printf("\nTelefon numarasi basarili bir sekilde eklendi\n");
//                     else
//                         printf("\nTelefon numarasi eklenirken bir hata olustu\n");
//                     break;
//             case 2:if(phoneList() == 0)
//                         printf("\n Telefon numaralari basarili bir sekilde listelendi");
//                     else
//                         printf("\n Telefon numaralari listelenirken bir hata olustu!!!");
//                     break;
//             case 3:printf("\nAranacak ismi giriniz (max 20 karakter): ");
//                    scanf("%s",&searchName);
//                    searchResult =  phoneSearch(searchName);
//                    if(searchResult == 0)
//                     printf("\nAranilan kayit bulunamadi\n");
//                     else
//                     printf("\n Toplam %d kayit bulundu\n",searchResult);
//                    break;
//             case 4:printf("\nCikis yaptiniz... Hosca Kalin");
//                    return 0;
//                    break;
//             default:printf("\nLütfen 1-4 arasinda bir sayi giriniz!!!");
//         }
//     }while(choice != 4);
// }

// void menu(){
//     printf("-------------------------------------\n");
//     printf("*                                   *\n");
//     printf("*          TELEFON REHBERI          *\n");
//     printf("*                                   *\n");
//     printf("*          1. TELEFON EKLE          *\n");
//     printf("*          2. TELEFONLARI LISTELE   *\n");
//     printf("*          3. ARAMA YAP             *\n");
//     printf("*          4. CIKIS YAP             *\n");
//     printf("*                                   *\n");
//     printf("-------------------------------------\n");
// }

// int phoneAdd(){
//     Record newRecord;
//     FILE *fptr;
//     fptr = fopen("C:\\Users\\faika\\Desktop\\data.txt\\data.txt","a");
//     if(fptr == NULL){
//         return 1;
//     }
//     printf("\n\n");
//     printf("Isim giriniz (max 20 karakter): ");
//     scanf("%19s",&newRecord.name);
//     printf("Soy isim giriniz(max 20 karakter): ");
//     scanf("%19s",&newRecord.lastname);
//     printf("Telefon numarasini giriniz (max 11 karakter): ");
//     scanf("%19s",&newRecord.phone);
//     fprintf(fptr,"\n%s %s %s",newRecord.name,newRecord.lastname,newRecord.phone);
//     fclose(fptr);
//     return 0 ;
// }

// int phoneList(){
//     Record currentRecord;
//     FILE* fptr;
//     fptr=fopen("C:\\Users\\faika\\Desktop\\data.txt\\data.txt","r");
//     if(fptr==NULL){
//         return 1;
//     }
//     printf("\n\nIsim\t\t\tSoyisim\t\t\tTelefon\n\n");
//     printf("----\t\t\t-------\t\t\t-------\n\n");

//     while(!feof(fptr)){//dosya sonuna gelip gelmediğimizi bu kodu yazarak kontrol ederiz
//             fscanf(fptr,"%s%s%s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
//             printf("%s\t\t\t",currentRecord.name);
//             printf("%s\t\t\t",currentRecord.lastname);
//             printf("%s\n",currentRecord.phone);
//     }//while son

//     fclose(fptr);
//     return 0 ;
// }

// int phoneSearch(char* ptSearch){
//     Record currentRecord;
//     int i=0;
//     FILE* fptr;
//     fptr = fopen("C:\\Users\\faika\\Desktop\\data.txt\\data.txt","r");
//     if(fptr == NULL)
//         return -1;

//     while(!feof(fptr)){
//         fscanf(fptr,"%s%s%s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
//         if(!strcmp(ptSearch,currentRecord.name)){
//             printf("%s\t\t\t",currentRecord.name);
//             printf("%s\t\t\t",currentRecord.lastname);
//             printf("%s\t\t\t",currentRecord.phone);
//             i++;
//         }
//     }
//     fclose(fptr);
//     return i ;
// }//kod tamamlandı   


/*BİLGİ YARIŞMASI*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>

// void hosgeldinfonk();
// int secimfonk();
// int girisyapfonk();
// int kayitOlfonk();
// int bilgiYarismasi();

// int main(void)
// {
//     char isim[20] = "faik";
//     char sifre[20] = "1234";

//     hosgeldinfonk();

//     int secim = secimfonk();

//         if(secim == 1){
//             girisyapfonk(isim,sifre);
//         }
//         else if(secim == 2){
//             kayitOlfonk();
//         }

//         bilgiYarismasi();

//         return 0 ;

// }

// void hosgeldinfonk()
// {
//     printf("Bilgi yarismasina hosgeldiniz:)\n\n");
//     printf("1-Yarismamiz puan sistemlidir\n\n");
//     printf("2-Lutfen kullanici adinizi dogru bir sekilde giriniz\n\n");
//     printf("3-Eger kayitli degilseniz uye olunuz\n\n");
// }

// int secimfonk()
// {
//     int secim;
//     printf("Lutfen asagidaki seceneklerden birini seciniz...\n");
//     printf("\n1-Giris yap");
//     printf("\n2-Kayit ol\n");
//     scanf("%d",&secim);
//     return secim;
// }

// int girisyapfonk(char isim[20],char sifre[20])
// {
//     char alinan_isim[20];
//     char alinan_sifre[20];

//     int kontrol = 0;
//     while(kontrol == 0){
//         printf("Lutfen adinizi giriniz: ");
//         scanf("%s",alinan_isim);
//         printf("Lutfen sifrenizi giriniz: ");
//         scanf("%s",&alinan_sifre);
//     if(strcmp(isim,alinan_isim) == 0 && strcmp(sifre,alinan_sifre)){
//         printf("Sisteme hosgeldiniz:)\n\n");
//         kontrol = 1;
//     }
//     else{
//         printf("Hatali girdin yarak!!!\n");
//     }
//     }
// }

// int kayitOlfonk()
// {
//     char isim[20];
//     char sifre[20];
//     printf("lütfen isim giriniz: ");
//     scanf("%s",&isim);
//     printf("Lütfen sifre giriniz: ");
//     scanf("%s",&sifre);
//     printf("Kayidiniz basarili bir sekilde yapilmistir");
//     printf("Giris ekranina yönlendiriliyorsunuz..\n");
//     girisyapfonk(isim,sifre);
// }

// int bilgiYarismasi()
// {
//     char cevap[1];
//     int puan = 0;
//     printf("Yarisma Basladi...\n");
//     printf("puaniniz : %d\n",puan);
//     if(puan == 0){
//         printf("{Soru-1}--> Asagidakilerden hangisi Turkiye Cumhuriyetinin baskentidir?\n");
//         printf("a- Istanbul b-Ankara c- Bursa d-Edirne e- Izmir\n");
//         scanf("%s",cevap);
//         if(strcmp(cevap,"b") == 0){
//             printf("Dogru cevap\n");
//             puan+=10;
//             printf("Puaniniz: %d\n",puan);
//         }
//         else{
//             printf("Yanlis cevap girdiniz!!!\n");
//             printf("Puaniniz: %d\n",puan);
//         }
//     }
//     if(puan == 10){
//         printf("{Soru-2}--> Asagidakilerden hangisi rusyanin baskentidir?\n");
//         printf("a-Moskova b-Berlin c-Hakkari - Zenit e-Vorsova");
//         scanf("%s",&cevap);
//         if(strcmp(cevap,"a") == 0){
//             printf("Dogru cevaba ...\n");
//             puan+=10;
//             printf("Puaniniz:%d\n",puan);
//         }
//     else{
//         printf("Yanlis cevap ...\n");
//         printf("Puaniniz:%d\n",puan);
//     }
//     }
//     return puan;
// }//KOd bitmiştir

/*Basit bir atm uygulaması*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int secim;
    int yatirilcak_tutar;
    int cekilcek_tutar;
    int bakiye= 1000;

    while(secim)
    {
        printf("1-Bakiye miktari");
        printf("2-Para yatir");
        printf("3-Para cek");
        printf("0-Cikis yap");
        printf("Lutfen bir secim yapiniz: ");
        scanf("%d",&secim);
        
    switch(secim)
    {
        case 0:
                break;
        case 1:printf("Bakiyeniz : %d\n",bakiye);
                break;
        case 2:printf("Lutfen yatirmak istediginiz tutari giriniz: ");
               scanf("%d",&yatirilcak_tutar);
               printf("Yatirma islemi basarili\n\n");
               bakiye = bakiye+ yatirilcak_tutar;
               printf("Yeni bakiyeniz : %d\n",bakiye);
                break;
        case 3:printf("Lutfen cekmek istediginiz tutari giriniz: ");
               scanf("%d",&cekilcek_tutar);
               if(cekilcek_tutar > bakiye)
               {
                printf("Bakiyeden yüksek bir tutar girdiniz !!!");
               }
               else{
                printf("Para cekme isleminiz basarili:)");
                bakiye = bakiye-cekilcek_tutar;
                printf("son bakiyeniz :%d\n",bakiye);
               }
                break;
        default:printf("Yanlis bir secim girdiniz\n");
            break;
    }
    }

    return 0 ;
}//kod bitti