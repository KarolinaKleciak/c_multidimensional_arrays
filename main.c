#include <stdio.h>
#include <stdlib.h>


/*void tablica(int tab[4][2])
{
    tab[0][1] = 3;
    tab[0][2] = 6;
    printf("Podaj element: \n");
    scanf("%d", &tab[2][1]);
    printf("tab[0][1] = %d\n", tab[0][1]);
    tab[3][1] = 0 + rand() % 19;
    printf("%d\n", tab[3][1]);
}
void wyswietlenie_tab(int tab[4][2])
{
    int i, j;

    for(i=0; i<4; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}
void wczytaj_tab_z_klaw(int tab[N][M], int n, int m)
{
    int i, j;
    printf("Zapelnianie tablicy liczbami z klawiatury\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("Podaj liczby do tablicy pod indeksem  [%d],[%d]: ", i, j);
            scanf("%d", &tab[i][j]);
        }
    }
}
void wypisz_tab(int tab[N][M], int n, int m)
{
    int i, j;
    printf("Zapelnianie tablicy liczbami z klawiatury\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
           printf("%d\t", tab[i][j]);
        }
        printf("\n");
    }
}
void tablica_losowa(int tab[N][M], int n, int m)
{
    int i, j;

    printf("Zapelnianie tablicy losowo");

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
           tab[i][j]  = 0 + rand() % 101;
        }
    }
}
void wyswietl_tab_los(int tab[N][M], int n, int m)
{
    int i, j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d\t", tab[i][j]);
        }
        printf("\n");
    }
}
void tablica(int tab[N][M], int n, int m)
{
    int i, j;

    printf("Tablica losowa\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            tab[i][j] = 0 + rand() % 101;
        }
    }
}
void tablica_c_klawiatury(int tab[N][M], int n, int m)
{
    int i, j;
    printf("Tablica z klawaitury\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("Podaj liczby do tablicy pod indeksem [%d][%d]: ",i ,j);
            scanf("%d", &tab[i][j]);
        }
    }
}
void wyswietlenie_tab_po_kolei(int tab[N][M], int n, int m)
{
    int i, j;
    printf("Tablica zapisana po kolei");

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\nElement [%d][%d] = %d", i, j, tab[i][j]);
        }
    }
}
void wyswietlanie_tab2_po_kolei(int tab[N][M], int n, int m)
{
    int i, j;
    printf("\nTablica zapisana po kolei");

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\nElement [%d][%d] = %d", i, j, (*(tab + i)+j));
        }
    }
}
void tablica_losowa(int tab[N][M], int n, int m)
{
    int i, j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            tab[i][j] = 0 + rand() % 101;
        }
    }
}
void wyswietlanie_macierzy(int tab[N][M], int n, int m)
{
    int i, j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%6d", tab[i][j]);
            printf("\n");
        }
    }
}
void tablica_z_klawiatury(int tab[N][M], int n, int m)
{
    int i, j;

    printf("Tabilca pobrana z klawiatury");

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\nPodaj element z tablicy pod indeksem [%d][%d]: ", i, j);
            scanf("%d", &tab[i][j]);
        }
    }
}
void wys_na_przekatnej(int tab[N][M], int n, int m)
{
    int i, j ;
    printf("\nTablica wyswietlana na przekatnej");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i==j)
            {
                printf("\nElement [%d][%d] = %d\n", i, j, tab[i][j]);
            }
        }
    }

}
void wyswietlanie_macierzy(int tab[N][M], int n, int m)
{
    int i, j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%6d", tab[i][j]);
            printf("\n");
        }
    }
}
void tablica_2d(int *tab, int n, int m)
{
    int i, j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            tab[i*m + j] = 0 + rand() % 100;
        }
    }
}
void wyswietl_2d(int *tab, int n, int m)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%4d", tab[i*m+j]);
        }
        printf("\n");
    }
    printf("\n");
}
void pokaz_tab(int tab[], int N)
{
    int i;
    for(i=0; i<N; i++)
    {
        printf("%4d", tab[i]);
    }
    printf("\n\n");
}
void czysc_tab(int tab[], int N)
{
    int i;
    for(i=0; i<N; i++)
    {
        tab[i] = -1;
    }
}
void przesun(int tab[], int N, int index)
{
    int i;
    for(i=N-1; i>index; i--)
    {
        tab[i] = tab[i-1];
    }
}
void wstaw(int tab[], int N, int wartosc)
{
    int i=0;
    while((tab[i] != wartosc && tab[i] != -1))
    {
        i++;
    }
    if(tab[i] != wartosc && i<N)
    {
        przesun(tab, N, i);
        tab[i] = wartosc;
    }
}*/

int main()
{
    /*  int tab[4][2];
      srand(time(NULL));

      tablica(tab);
      wyswietlenie_tab(tab);

      int tab[N][M];

      wczytaj_tab_z_klaw(tab, N, M);
      printf("\n\n");
      wypisz_tab(tab, N, M);

      int tab[N][M];
      srand(time(NULL));

      tablica_losowa(tab, N, M);
      printf("\n\n");
      wyswietl_tab_los(tab, N, M);

      int tab[N][M];

      srand(time(NULL));
      tablica(tab, N, M);
      tablica_c_klawiatury(tab, N, M);
      wyswietlenie_tab_po_kolei(tab, N, M);
      printf("\n\n");
      wyswietlanie_tab2_po_kolei(tab, N, M);

      int tab[N][M];

      tablica_losowa(tab, N, M);
      wyswietlanie_macierzy(tab, N, M);

      int tab[N][M];

      tablica_z_klawiatury(tab, N, M);
      wys_na_przekatnej(tab, N, M);
      wyswietlanie_macierzy(tab, N, M);

      #define N3
      #define M9

      int tab[N*M];

      srand(time(NULL));

      tablica_2d(tab, N, M);
      wyswietl_2d(tab, N, M);

    const int N = 6;
    int *tab, i;

    srand(time(NULL));
    tab = malloc(sizeof(int)* N);
    for(i=0; i<N; i++)
    {
        tab[i] = 0 + rand() % 20;
    }
    for(i=0; i<N; i++)
    {
        printf("%4d", tab[i]);
    }
    free(tab);
    printf("\n\n");

    system("pause");

    int N;
    int *tab, i;

    srand(time(NULL));
    printf("Podaj rozmiar tablicy N= ");
    scanf("%d", &N);

    tab = malloc(sizeof(int)* N);
    for(i=0; i<N; i++) tab[i] = 0 + rand() % 101;
    for(i=0; i<N; i++) printf("%4d", tab[i]);

    free(tab);
    printf("\n\n");
    system("pause");*/

    return 0;
}
