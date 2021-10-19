#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int n, k;
	P = 1;
	n = 1;
	while (n <= 20)

	{
		S = 0;
		k = n;
		while (k <= 20)

		{
			S += 1. * k;
			k++;

		}
		P *= (1. * n*n + pow(S,2)) / (1.*(n + 1));
		n++;

	}
	cout << P << endl;
	P = 1;
	n = 1;
	do
	{
		S = 0;
		k =n;
		do
		{
			S += 1. * k;
			k++;
		} while (k <= 20);
		P *= (1. * n * n + pow(S, 2)) / (1. * (n + 1));
		n++;
	} while (n <= 20);
	cout << P << endl;
	P = 1;
	for (n = 1; n <= 20; n++)

	{
		S = 0;
		for (k = n; k <= 20; k++)

		{
			S += 1. * k;

		}
		P *= (1. * n * n + pow(S, 2)) / (1. * (n + 1));

	}
	cout << P << endl;
	P = 1;
	for (n = 20; n >= 1; n--
		)

	{
		S = 0;
		for (k = 20; k >= n; k--
			)

		{
			S += 1. * k;
		}
		P *= (1. * n * n + pow(S, 2)) / (1. * (n + 1));
	}
	cout << P << endl;
	return 0;
}
