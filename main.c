#include <stdio.h>
#include <stdlib.h>

int main()
{
   float T1[13], T2[15], min, max;
	int i, nbr;

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
		nbr = nbr + 1;
	}
	printf("les nombres des eleves qui obtenu une moyenne sup a 10 sont : %d\n", nbr );
	printf("*************************************************************************\n");
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
		nbr = nbr + 1;
	}
	printf("les nombres des eleves qui obtenu une moyenne sup a 10 sont : %d\n", nbr );

    return 0;
}
