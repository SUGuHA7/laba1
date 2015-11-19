
#include "stdafx.h"
#include "vector.h"
#include "time.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(0));
	int k, l;
	const int SIZE = 10;
	Vector arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		int n;
		n = rand() % 5 + 1;
		arr[i].set_size(n);
		for (int j = 0; j < n; j++)
		{
			int l = rand() % 21 - 10;
			arr[i].set_arr(j, l);
		}
		arr[i].print();
	}
	
	cout << "Vvedite chislo: ";
	cin >> k;
	cout << "vvedite nomer vectora";
	cin >> l;
	l--;
	arr[l].print();
	cout << " * " << k << " = ";
	arr[l].mult(k);
	arr[l].print();

	for (int i = 0; i < SIZE; i++)
	{
		arr[i].prov();
	}

	double g;
	int o;

	g = arr[0].mod();
	o = 0;
	for (int i = 0; i < SIZE; i++)
	{
		double p = arr[i].mod();
		if (p < g)
		{
			g = p;
			o = i;
		}
	}

	arr[o].print();
	cout << "mod=" << g << endl;
	cout << "________";
	Vector *n = new Vector();
	delete n;
}


