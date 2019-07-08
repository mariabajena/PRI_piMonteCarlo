#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, n, liczbaLosowan, ileWKole, czyJuz;
	double x, y, sumaKwadratow, wynikPi;

	printf("Wpisz ile punktow chcesz wylosowac: ");
	scanf("%d", &liczbaLosowan);

	n=1;

	for(i= 1; i<=liczbaLosowan; ++i){
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;

		sumaKwadratow=x*x+y*y;

		if(sumaKwadratow<=1) ++ileWKole;

		czyJuz=liczbaLosowan*n;

		if(i>=0.1*czyJuz){
			wynikPi=4*(double)ileWKole/(double)i;
			printf("liczba pi po wylosowaniu %d0%% punktow to %f\n", n, wynikPi);
			++n;
		}
	}

	return 0;
}
