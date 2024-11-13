/*DOSYA MODLARI:
    1- r: dosyayı veri okumak için aç
    2- w: dosyayı veri yazmak için aç
    3- a: dosyayı veri eklemek için aç
    4- rb: dosyadan veri okumak için dosyayı binary(ikili)olarak aç
    5- wb: dosyaya veri yazmka için dosyayı binary(ikili)olarak aç
    6- ab: dosyaya veri eklemek için dosyayı binary(ikili)olarak aç
    7- r+: dosyayı veri okumak veya veri yazmak için aç
    8- w+: dosyayı veir okumak veya veri yazmak için aç
    9- a+: dosyayı veri okumak veya veri eklemek için aç
    10- rb+: dosyayı veri okumak veya veri yazmak için binary olarak aç
    11- wb+: dosyayı veri okumak veya veri  yazmak için binary olarak aç
    12- ab+: dosyayı veri okumak veya veri eklemek için binary olarak aç*/

/*3 amacımız var 
   1- dosyayı açmak
   2- dosyayı yazdırmak
   3- dosyayı kapatmak*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     FILE* fptr;
//     fptr = fopen("C:\\Users\\faika\\Desktop\\data.txt\\data.txt","w");
//     if(fptr == NULL)
//         printf("file open Unsuccsessful");
//     else{
//         putc('M',fptr);//veriyi dosyaya yazdırmak için kullanılır
//         printf("Data is written of  file\n");
//     }
//     fclose(fptr);
//     return 0 ;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     FILE* fptr;
//     int i = 7;
//     fptr=fopen("C:\\Users\\faika\\Desktop\\data.txt\\data.txt","w");

//     if(fptr == NULL)
//         printf("File open Unsuccsessful");
//     else{
//         fprintf(fptr,"I do love C programming %d\n",i);//bunu kullanarakta yazabilirz
//         //fputs("I do love C programming\n",fptr);//string bir ifadeyi yazdırmak için kullanılır
//         //fputs("C is an interesting language\n",fptr);
//         //fputs("Data was written to file successfully\n",fptr);
//     }
//     fclose(fptr);
//     return 0;
// }


/*fwrite nasıl çalışır?*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     FILE* fptr;
//     int numbers[7],i;
//     fptr = fopen("C:\\Users\\faika\\Desktop\\data.txt\\data.txt","r");
//     if(fptr == NULL)
//         printf("File open Unsuccsessful");
//     else
//         printf("Enter 7 numbers: ");
//         fread(numbers,sizeof(int),7,fptr);//ilk paramtere arrayi gir. ikinci sizeofunu gir,üçüncü kaç tane olduğu yazılır
//         for(i=0;i<7;i++)
//             printf("%d",numbers[i]);

//         printf("\nData was written to File successfully\n");

//         return 0 ;
    
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     FILE* fptr;
//     char myLetter;
//     fptr=fopen("C:\\Users\\faika\\Desktop\\data.txt\\data.txt","r");
//     if(fptr==NULL)
//         printf("File open succsessful");
//     else{
//         myLetter=getc(fptr);
//         printf("Text read  from file:%c\n",myLetter);
//     }
//     fclose(fptr);
//     return 0 ;
// }

/*fscanf kullanımı*/
//#include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     FILE* fptr;
//     char data[100];
//     int number;
//     float n2;
//     fptr=fopen("data.txt","r");
//     if(fptr==NULL)
//         printf("File open unsuccsessful");
//     else{
//         fscanf(fptr,"%s %d %f",data,&number,&n2);
//         printf("%s %d %3.f\n",data,number,n2);
//     }
//     fclose(fptr);
//     return 0 ;
// }

/*KONUM GÖSTERGECİ AYARLARI*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main(void)
// {
//     FILE* fptr;
//     char data[100];
//     fptr=fopen("data.txt","r");
//     if(fptr==NULL)
//         printf("File open unsuccsessful");
//     else{
//         printf("Konum gostergeci yeri: %d\n",ftell(fptr));
//         fseek(fptr,50,SEEK_SET);
//         printf("Konum gostergeci yeri: %d\n",ftell(fptr));
//         fgets(data,100,fptr);
//         printf("%s\n",data);
//         printf("Konum göstergeci yeri: %d\n",ftell(fptr));
//         rewind(fptr);//konum göstergecini en başa çek
//         printf("Konum gostergeci yeri: %d\n",ftell(fptr));
//     }
//     fclose(fptr);
//     return 0 ;
// }

/*DOSYA KOPYALAMA*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    FILE* fptr, *fptrcopy;
    fptr = fopen("data.txt","r");
    fptrcopy = fopen("datacopy.txt","w");
    if(fptr==NULL)
        printf("data.txt open unsuccsessful");
    else{
        if(fptrcopy == NULL){
            printf("datacopy.txt open unsuccsessful");
        }
        else{
            while(!feof(fptr)){
                putc(getc(fptr),fptrcopy);
            }
            printf("The file has been copied\n");
        }
    }
    fclose(fptr);
    fclose(fptrcopy);
    return 0 ;
}