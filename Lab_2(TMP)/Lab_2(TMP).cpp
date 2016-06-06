// Lab_2(TMP).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cstdlib>
#include <locale.h>
/** \func int sum(int a, int b) */
int sum(int a, int b)
{
	return a + b;
}

/**
\func int main()
*/
int main()
{
	int a = 5, b = 4;
	printf_s("Summa of two number a = %d and b = %d ravna %d\n\n", a, b, sum(a, b));
	system("pause");
	return 0;
}


