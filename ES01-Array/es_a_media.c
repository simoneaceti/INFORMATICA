#include <stdio.h>
//media di 10 numeri in un array

int main()
{
	//dichiarazione variabili e vettore
	double a[10];
	float somma=0;
	float media;
	
	//ciclo di insrimento delle variabili
	for(int i=0; i<10; i++){
		printf("inserisci il numero %d: ", i+1);
		scanf("%lf", &a[i]);
		somma=somma+a[i];
	}
	
	//stampa dei risultati
	printf("la somma vale %f: ", somma);
	media=somma/10.0;
	printf("la media e' %f: ", media);

    return 0;
}
