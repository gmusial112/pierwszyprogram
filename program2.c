#include <stdio.h>

int mnoz(int a, int b)
{
	return a*b;
}
int dodaj (int a, int b)
{
	return a+b;
}

int main (void)
{
	int a = 2, b = 5; /*deklaracja wraz zinicjalizacją*/
	char wybor;
	/* if(wyrazenie) (blok jesli wyrazenie prawdziwe)
	else (blok jesli wyrazenie fałszywe); */
	scanf("%c",&wybor); /* czytaj z consoli i zapisz wartosc pod wybor */
	if(wybor == '*'){  /* sprawdzenie czy rowne, to nie jest '=" */
		printf("wynik mnozenia: %i\n", mnoz(a,b));
	}else{

		printf("Wynik dodawania: %i\n", dodaj(a,b)); 
}; /* ten srednik jest opcjonalny jesli wystepuje klamra*/

 	return 0;


}
