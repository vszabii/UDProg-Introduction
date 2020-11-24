#include "../../std_lib_facilities.h"

ostream& print_vector(ostream& os, vector<int>a, int n)
{
	for (int i = 0; i < n; i++)
		os << a[i] << endl;
	return os;
}

///////////////////////////////////////////////////////////////

ostream& print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; i++)
		os << a[i] << endl;
	return os;
}

ostream& print_array_hundreds(ostream& os, int* a, int b)
{
	for (int i = 0; i < b; i++)
		os << a[i] << endl;
	return os;
}

ostream& print_array_hundreds2(ostream& os, int* a, int b)
{
	for (int i = 0; i < b; i++)
		os << a[i] << endl;
	return os;
}

ostream& print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; i++)
		os << a[i] << endl;
	return os;
}

int main()
{
	vector<int>f10(10);

	int v_help = 100;
	for (int i = 0; i < f10.size(); ++i)
	{
		f10[i] = v_help;
		++v_help;
	}

	int* e_hundreds = new int[10];

	int help_e = 100;

	for (int i=0; i<10; ++i)
	{
		e_hundreds[i] = help_e; 
		++help_e;
	}

	int* e_hundreds2 = new int[11];

	int help_e2= 100;

	for (int i=0; i<11; ++i)
	{
		e_hundreds2[i] = help_e2; 
		++help_e2;
	}

	int* elements20 = new int[20];

	int help_e3= 100;

	for (int i=0; i<20; ++i)
	{
		elements20[i] = help_e3; 
		++help_e3;
	}	

	cout << "10.feladat" << endl;

	print_vector(cout,f10,10);

	cout << "8.feladat" << endl;

	print_array(cout,elements20,20);

	cout << "7.feladat" << endl;

	print_array(cout,e_hundreds,10);

	cout << "6.feladat" << endl;

	print_array_hundreds2(cout,e_hundreds2,11);

	cout << "5.feladat" << endl;
	
	print_array_hundreds(cout,e_hundreds,10);

	cout << "4.feladat" << endl;

	int* elements = new int[10];

	for (int i=0; i<10; ++i)
		cout << elements[i] << endl;
	
	cout << "1-3.feladat" << endl;

	print_array10(cout,elements);

	delete[] elements20;
	delete[] elements;
	delete[] e_hundreds;
	delete[] e_hundreds2;

	return 0;
}