#include <stdio.h>

int mnoz(int a, int b){ printf("Wynik mnożenia: %d\n", a * b);return a*b; }
int dodaj (int a, int b){ printf ("Wynik dodawania: %d\n", a + b);return a+b;}
int odejmij (int a, int b){ printf ("Wynik odejmowania: %d\n", a - b);return a-b;}
int dziel (int a, int b){ printf ("Wynik dzielenia: %d\n", a / b);return a/b;}

int main (void)
{
	int a = 2, b = 5;
	char wybor;
	scanf("%c",&wybor);
	if(wybor == '*'){ mnoz(a,b);
	}else if(wybor == '+'){ dodaj(a,b);
	}else if(wybor == '-'){ odejmij(a,b);
	}else if(wybor == '/'){ dziel(a,b);
	}else{printf("Nie rozpoznaje polecenia");
};

 	return 0;

}
