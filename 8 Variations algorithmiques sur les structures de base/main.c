#include <stdio.h>
#include <stdlib.h>
#define Nmax 15

int main ()
{
    //D�clarations
    int N, i, j;

    //Nombre de lignes souhait�es
    printf ("combien de lignes voulez vous ?");
    scanf ("%d", &N);
    if (N > Nmax)
        N = Nmax;

    //Affichage en-t�te
    printf ("\np     ");
    for (i = 0; i < N; i++)
        printf ("%d    ", i);
    printf("\nn\n--");
    for (i = 0; i < N && i < 10; i++)
        printf ("-----");
    for ( ; i < N; i++)
        printf ("------");
    printf("\n");

    //Affichage des lignes
    for (i = 0; i < N; i++)
    {
        printf("%d --    1\n",i);

    }





    return 0;
}
