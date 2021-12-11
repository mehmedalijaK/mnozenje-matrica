#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, a, b;
    printf("------------------------------------------------------------------------\nTeorija i uputstvo: \nA x B = C \n");
    printf("Broj kolona matrice A, treba biti jedan broju vrsta matrice B\nMatrica C ima broj vrsta matrice A, a broj kolona matrice B\n------------------------------------------------------------------------\n");;
    printf("\nBroj vrsta matrice A: ");
    scanf("%d", &m);
    printf("Broj kolona matrice A: ");
    scanf("%d", &n);
    printf("\nBroj vrsta matrice B: ");
    scanf("%d", &a);
    printf("Broj kolona matrice B: ");
    scanf("%d", &b);

    if(n!=a){printf("\nNeispravan unos dimenzija matrica!\n"); return 0;}

    printf("\n");
    double A[m][n];
    double B[a][b];
    double C[m][b];

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            printf("A[%d,%d]= ", i, j);
            scanf("%lf", &A[i][j]);
        }
    }

    printf("\n");
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            printf("B[%d,%d]= ", i, j);
            scanf("%lf", &B[i][j]);
        }
    }

    printf("\nMatrica A");
    for(int i=0; i<m; i++)
    {
        printf("\n");
        for(int j=0; j<n; j++) printf("\t%.2lf" , A[i][j]);
    }

    printf("\n\nMatrica B");
    for(int i=0; i<a; i++)
    {
        printf("\n");
        for(int j=0; j<b; j++) printf("\t%.2lf" , B[i][j]);
    }


    for(int i=0; i<m; i++)
    {
        for(int j=0; j<b; j++)
        {
            double zbir = 0;
            for(int k = 0; k<a;k++) zbir+=(A[i][k]*B[k][j]);

            C[i][j] = zbir;
        }
    }

    printf("\n\nMatrica C");
    for(int i=0; i<m; i++)
    {
        printf("\n");
        for(int j=0; j<b; j++) printf("\t%.2lf" , C[i][j]);
    }

    printf("\n");

    return 0;
}
