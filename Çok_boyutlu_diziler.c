#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// int main(void)
// {
//     int matrix[2][3] = {    // ilk [2] satırları ifade eder sonraki ise sütunları ifade eder
//                             {2,7,19},  
//                             {3,5,12}
//                        };
//     // printf("%d\n", matrix[0][0]);
//     // printf("%d\n", matrix[0][1]);
//     // printf("%d\n", matrix[0][2]);

//     // printf("%d\n", matrix[1][0]);
//     // printf("%d\n", matrix[1][1]);
//     // printf("%d\n", matrix[1][2]);

//     int i , j;

//     for(i=0;i<2;i++)        // dış for satırları ifade eder
//     {
//         for(j=0;j<3;j++)    // iç for sütunları ifade eder
//             printf("%d\n", matrix[i][j]);
//     }

//     return 0 ;
// }

// int main(void)
// {
//     int matrix[3][4];
//     int i , j;

//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<4;j++)
//         matrix[i][j] = i+ j;
//     }
    
//         for(i=0;i<3;i++)
//     {
//         for(j=0;j<4;j++){
//         printf("%d\t", matrix[i][j]);
//         }
//         printf("\n\n");
//     }
//     return 0 ;
// }

// int main(void)
// {
//     int Row, Column,i,j;

//     printf("Enter number of rows: ");
//     scanf("%d", &Row);

//     printf("Enter number of column: ");
//     scanf("%d", &Column);

//     int matrix[Row][Column];

//     for(i=0;i<Row;i++)
//     {
//         for(j=0;j<Column;j++)
//         {
//             printf("\nmatrix[%d][%d]",i,j);
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     printf("Your array\n");

//     for(i=0;i<Row;i++)
//     {
//         for(j=0;j<Column;j++)
//         {
//             printf("%4d", matrix[i][j]);
//         }
//         printf("\n\n");
//     }

//     return 0 ;
// }

// x e x lik bir tablo yapmak ve major ve minör 1 yazmak

// int main(void)
// {
//     int i , j, size;

//     printf("Enter of the size of the square matrix(x<10)");
//     scanf("%d", &size);

//     int matrix[size][size];

//     for(i=0;i<size;i++)
//     {
//         for(j=0;j<size;j++){
//             matrix[i][j] = 0;
//         }
//     }
//     for(i=0;i<size;i++)
//     {
//         matrix[i][i] = 1 ;      // şuan majorleri yaptık
//         matrix[i][size-i-1] = 1 ; // burdada minörleri doldurduk
//     }
//     for(i=0;i<size;i++)
//     {
//         for(j=0;j<size;j++)
//         {
//             printf("%4d", matrix[i][j]);
//         }
//         printf("\n\n");
//     }
//     return 0 ;
// }


// int main(void)
// {   
//     int matrix[4][2][5] ={              // []ilk kısım ise boyutu ifade eder []2. kısım satırları ifade eder []3. kısım ise sütunları ifade eder
//                             {{9,2},{7,5,6}},
//                             {{7,8,10},{10,12,15,11,14}},
//                             {{15,16,17,18,9},{20,25,7}},
//                             {{1,8,9},{21,13,17,33,54}},
//                          };
//     int i,j,k;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             for(k=0;k<5;k++)
//             {
//                 printf("%4d", matrix[i][j][k]);
//             }
//             printf("\n");
//         }
//         printf("\n\n");
//     }
// }


/*0123
  1234
  2345  */

// int main(void)
// {
//     int matrix[3][4];
//     int i, j;

//     for(i=0;i<3;i++){
//         for(j=0;j<4;j++){
//             matrix[i][j] = i+j;
//         }//iç for
//     }//dış for

//         for(i=0;i<3;i++){
//             for(j=0;j<4;j++){
//                 printf("%d\t",matrix[i][j]);
//                 }//iç for
//             printf("\n\n");
//             }//dış for
//     return 0 ;
// }

/*dışardan bir girdi alıp diziyi kendin oluşturma*/

// int main(void)
// {
//     int Row , Column,  i,j;

//     printf("Enter the rows:");
//     scanf("%d", &Row);
//     printf("Enter the column: ");
//     scanf("%d", &Column);

//     int matrix[Row][Column];

//     for(i=0;i<Row;i++)
//     {
//         for(j=0;j<Column;j++)
//         {
//             printf("\nmatrix[%d][%d]",i,j);
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     printf("Your array");

//     return 0 ;
// }

/*MAJÖR Vİ MİNOR BİR ALGORİTMA OLUŞTURMA*/

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i,j,size;

//     printf("Enter the size of the square matrix(x<10)");
//     scanf("%d",&size);

//     int matrix[size][size]; //kare bir matrix oluşturcaz
//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             matrix[i][j]=0;
//         }//iç for
//     }//dış for

//     for(i=0;i<size;i++){
//         matrix[i][i]=1;//major
//         matrix[i][size-i-1]=1;//minor
//     }

//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             printf("%4d",matrix[i][j]);
//         }
//         printf("\n\n");
//     }
//     return 0 ;
// }


/*SATIŞ TEMSİLCİSİ ÖRNEĞİ*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// void readSales();
// void writeSales();
// int sales[3][2][2];
// int i,j,k;

// int main(void)
// {
//     readSales();
//     writeSales();
//     return 0 ;
// }

// void readSales()
// {
//     for(i=0;i<3;i++){
//         printf("%d. satis temsilcisi:\n",i+1);
//         for(j=0;j<2;j++){
//             if(j==0) printf("\t matematik kitabi\n");
//             else printf("\t yazilim kitabi");
//                 for(k=0;k<2;k++){
//                     if(k==0) printf("\t Okula");
//                     else printf("\t\t Kirtasiyeye");
//                     printf(" kac adet satti: ");
//                     scanf("%d",&sales[i][j][k]);
//                 }
//         }
//         printf("\n");
//     }
// }

// void writeSales()
// {
//     i=0 , j=0, k=0;
//     int toplamOkul=0 , toplamKirtasiye = 0 , toplamMatematik= 0 , toplamYazilim = 0;

//     for(i=0;i<3;i++){
//         for(j=0;j<2;j++){
//             toplamOkul+=sales[i][j][0];//sonu 0 yapmaktaki amaç 3. indeksin 0 ında okul olduğu için
//             toplamKirtasiye+=sales[i][j][1];// sonu 1 yapmaktaki amaç 1 de kirtasiye oldğuu için
//         }
//         for(k=0;k<2;k++){
//             toplamMatematik+=sales[i][0][k]; // 2. indeksin 0 olma sebebi orda matematik oldğuu için
//             toplamYazilim+=sales[i][1][k];
//         }
//     }
//     printf("\n Okula toplam %d kitap satildi\n",toplamOkul);
//     printf("Kirtasiyeye toplam %d kitap satildi\n", toplamKirtasiye);
//     printf("toplam %d mateamtik kitabi satildi\n",toplamMatematik);
//     printf("toplam %d yazilim kitabi satildi\n",toplamYazilim);

// }

/*BİR DİZİNİN SATIR VE SÜTUNLARIN TOPLAMINI VEREN KOD?*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int i,j,sum=0;
    int matrix[5][5]={  
                        {8,6,5,4,1},
                        {7,2,4,5,6},
                        {7,8,9,8,4},
                        {8,9,4,2,1},
                        {1,2,3,4,5}
                     };
    for(i=0;i<5;i++){//satır
        for(j=0;j<5;j++){//sütun 
            printf("%4d",matrix[i][j]);//satır ve sütunları yazdırma
        }
        printf("\n\n");
    }
    
    for(i=0;i<5;i++){ //satirlarin toplami
            printf("%d. satirinin toplami",i+1);
        for(j=0;j<5;j++){
            sum+= matrix[i][j];
        }
        printf("%d\n", sum);
        sum = 0;
    }

    for(i=0;i<5;i++){   // sütunların toplamı
        printf("%d. sutunun toplami",i+1);
        for(j=0;j<5;j++){
            sum+=matrix[j][i];
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0 ;
}