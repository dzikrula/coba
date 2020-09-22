#include <stdio.h>
#include <stdlib.h>
 
float entryA[2][2],entryB[2][2],varC[2][2]; 
int a,b,c;
 
void pilihan()
{ 
    printf("\n1. Penjumlahan"); 
    printf("\n2. Pengurangan");
    printf("\n3. Perkalian");
    printf("\n4. Determinan");
    printf("\n0. Keluar");
}
 
void Input()
{ 
    int i,j;

    printf("\n===============Matrik A===============\n");

    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            printf("Input Matrix A[%d][%d] : ",i, j);
            scanf("%f",&entryA[i][j]);
        }
}
 
    printf("\n===============Matriks B===============\n"); 
 
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            printf("Input Matrix B[%d][%d] : ",i, j);
            scanf("%f",&entryB[i][j]); 
        }
    }
}
 
void show(char opr){ 
    for (a=0; a<2; a++)
	{
        for (b=0; b<2; b++){
            printf("%2.0f",entryA[a][b]);
        }
 
        if(a==0) printf("\t%c\t",opr);
        else printf("\t \t");
        for (b=0; b<2; b++){
            printf("%2.0f ",entryB[a][b]); 
        }
 
        printf("\n");
    }
}
 
void penjumlahan(){ 
    Input();
    printf("Hasil Penjumlahan:\n");
 
    for (a=0; a<2; a++){
        for (b=0; b<2; b++){
            printf("%2.0f ",entryA[a][b]+entryB[a][b]);
        }
        printf("\n");
    }
}
 
void pengurangan(){
    Input(); 
    printf("Hasil Pengurangan:\n");
 
    for (a=0; a<2; a++){
        for (b=0; b<2; b++){
            printf("%2.0f ",entryA[a][b]-entryB[a][b]);
        }
        printf("\n");
    }
}
 
void perkalian(){ 
    Input(); 
    printf("Hasil Perkalian:\n");
 
    for (a=0; a<2; a++){
        for (b=0; b<2; b++){
            varC[a][b]=0;
            for (c=0; c<2; c++){
                varC[a][b]+=entryA[a][c]*entryB[c][b]; 
}
            printf("%2.0f ",varC[a][b]);
        }
        printf("\n");
    } 
}
 
void determinan()
{
 
    float detA;
    Input();
 
    printf("Hasil Determinan:\n");
 
    
        printf("%f ", ((entryA[0][0]*entryA[1][1])-(entryA[0][1]*entryA[1][0])));
        printf("%f ", ((entryB[0][0]*entryB[1][1])-(entryB[0][1]*entryB[1][0])));
        }
    
 
int main(void){
    int selesai=1,pilih; 
    printf("\n~~~~~~~~~~~~~~~~~PROGRAM PENGHITUNGAN MATRIKS 2 x 2~~~~~~~~~~~~~~~~~~\n\n");
    while(selesai==1){
        pilihan();
        printf("\nMasukkan pilihan >");
        scanf("%d",&pilih);
 
        switch(pilih){
        case 0 : selesai=0; break; 
        case 1 : penjumlahan(); break;
        case 2 : pengurangan(); break;
        case 3 : perkalian(); break;
        case 4 : determinan(); break;
        default :  printf("Pilihan Salah\n"); break;
        }
    }
    system("pause");
    return 0;
}
