#include "Sys.h"

void main()
{
	int** M = NULL;
	char** L = NULL;
	int n = 25;
	El* Q = NULL;

	setlocale(LC_ALL, "Rus");
	dvigat();
	M = gen(n);
	L = Lgen(M, n);
	Q = put(M, n*n, Q);
	print_L(L, n * 2 + 1);
	HZ(L, Q, n);
}