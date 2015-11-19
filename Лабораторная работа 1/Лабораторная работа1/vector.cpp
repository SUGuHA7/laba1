#include "stdafx.h"
#include "vector.h"
#include "iostream"

using namespace std;

Vector::Vector()
{
	size = 0;
	arr = new int[size];
}
Vector::Vector(int size_, ...)
{
	arr = new int[size_];
	size = size_;
	int *s = &size_;
	s++;
	for (int i = 0; i < size; i++)
	{
		arr[i] = *s;
		s++;
	}
	lasterror = 0;
}
Vector::Vector(Vector&V)
{
	arr = new int[V.size];
	size = V.size;
	for (int i = 0; i < size; i++)
	{
		arr[i] = V.arr[i];
	}
	lasterror = 0;
}
Vector::~Vector()
{
	cout << "It works destructor";
	delete[]arr;
}
void Vector::set_size(int size_)
{
	delete[]arr;
	arr = new int[size_];
	size = size_;
}
int Vector::get_size()
{
	return size;
}
void Vector::set_arr(int i, int n)
{
	arr[i] = n;
}
int Vector::get_arr(int a)
{
	return arr[a];
}
void Vector::sum(int k)
{
	for (int i = 0; i < size; i++)
	arr[i] += k;
}
void Vector::mult(int k)
{
	for (int i = 0; i < size; i++)
		arr[i] *= k;
}
void Vector::print()
{
	cout << "(";
	for (int i = 0; i < size; i++)
	{
		if (i != 0) cout << ",";
		cout << arr[i];
	}
	cout << ")" << endl;
}
void Vector::prov()
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			print();
			return;
		}
	}
}
double Vector::mod()
{
	int l = 0;
	for (int i = 0; i < size; i++)
	{
		l += arr[i] * arr[i];
	}
	return sqrt(1);
}
int Vector::get_error()
{
	int a = lasterror;
	lasterror = no_error;
	return a;
}


