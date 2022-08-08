#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T1[13], T2[15], T3[28], min, max, swap;
    int i, j, nbr, n1, n2, n3;

    printf(" Entrez le nbr des eleves dans classe 1 : ");
    scanf("%d", &n1);
    printf("Pour classe 1 veuillez saisir les moyenne des eleves\n");
    for (i = 0; i < 13; i++)
    {
        printf(" T1[%d]= ", i);
        scanf("%f", &T1[i]);
    }
    min = T1[0];
    max = T1[0];
    nbr = 0;
    for (i = 1; i < 13; i++)
    {
        if (min > T1[i])
            min = T1[i];
    }
    printf("la plus petite moyenne est : %.2f\n", min);

    for (i = 1; i < 13; i++)
    {
        if (max < T1[i])
            max = T1[i];
    }
    printf("la plus grande moyenne est : %.2f\n", max);

    for (i = 0; i < 13; i++)
    {
        if (T1[i] >= 10)
            nbr++;
    }
    printf("les nombres des eleves qui obtenu une moyenne sup a 10 sont : %d\n", nbr );
    printf("*************************************************************************\n");
    printf(" Entrez le nbr des eleves dans classe 2 : ");
    scanf("%d", &n2);
    printf("Pour classe 2 veuillez saisir les moyenne des eleves\n");
    for (i = 0; i < 15; i++)
    {
        printf("T2[%d]= ", i);
        scanf("%f", &T2[i]);
    }
    min = T2[0];
    max = T2[0];
    for (i = 1; i < 15; i++)
    {
        if (min > T2[i])
            min = T2[i];
    }
    printf("la plus petite moyenne est : %.2f\n", min);

    for (i = 0; i < 15; i++)
    {
        if (max < T2[i])
            max = T2[i];
    }
    printf("la plus grande moyenne est : %.2f\n", max);
    nbr = 0;
    for (i = 0; i < 15; i++)
    {
        if (T2[i] >= 10)
            nbr++;
    }
    printf("les nombres des eleves qui obtenu une moyenne sup a 10 sont : %d\n", nbr );

    for(i = 0; i < n1; i++)
    {
        T3[i] = T1[i];
    }

    n3 = n1 + n2;

    for(i = 0, j = n1; j < n3 && i < n2; i++, j++)
    {
        T3[j] = T2[i];
    }

    printf(" Le tableau fusionne est: \n");
    for(i = 0; i < n3; i++)
    {
        printf("%.2f\n",T3[i]);
    }
    for(i = 0; i < n3; i++)
    {
        for (j = i+1; j < n3; j++)
        {
            if(T3[j]<T3[i])
            {
                swap = T3[i];
                T3[i] = T3[j];
                T3[j] = swap;
            }

        }
    }
    printf("\n******** tableau triee par ordre croissant ********\n");

    for (i=0; i < n3; i++)
        printf("%f\n", T3[i]);

    return 0;
}
