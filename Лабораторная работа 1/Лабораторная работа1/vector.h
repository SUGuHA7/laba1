#pragma once
#include "iostream"

class Vector
{
	int size;
	int *arr;
	int lasterror;
public:
	Vector();
	Vector(int size, ...);
	Vector(Vector&V);
	~Vector();
	void set_size(int size_);
	int get_size();
	void set_arr(int i, int n);
	int get_arr(int a);
	void sum(int k);
	void mult(int k);
	void print();
	void prov();
	double mod();
	static enum { no_error, memory_limit, exit_array};
	int get_error();

};