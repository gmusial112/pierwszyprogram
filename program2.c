#include <stdio.h>

int mnoz(int a, int b)
{
	return a*b;
}
int dodaj (int a, int b)
{
	return a+b;
int odejmij (int a, int b)
{
	return b-a;
}
int main (void)
{
	int a = 2, b = 5; /*deklaracja wraz zinicjalizacją*/
	char wybor = '-';
	/* if(wyrazenie) (blok jesli wyrazenie prawdziwe)
	else (blok jesli wyrazenie fałszywe); */
	if(wybor == '*')
	{ /* sprawdzenie czy rowne, to nie jest '=" */
		printf("wynik mnozenia: %i\n", mnoz(a,b));
		}{
		if(wybor == '+')
		{
		printf("Wynik dodawania: %i\n", dodaj(a,b));
		}else{
		 printf("Wynik odejmowania: %i\n", odejmij(a,b));
		}
	} 
}; /* ten srednik jest opcjonalny jesli wystepuje klamra*/

 	return 0;


}
