#include "../../std_lib_facilities.h"

ostream& feladat3(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		os << a[i] << endl;
	}
	return os;
}

int main()
{
	int a = 7;
	int* p1 = &a;

	cout << "1-2.feladat" << endl;

	cout << "p1 pointers value is : " << p1 << ", points to " << *p1 << endl;

	int* p2 = new int[7];

	int feladat3_help = 1;

	for (int i =0; i < 7; ++i)
	{
		p2[i]=feladat3_help;
		feladat3_help *=2;
	}

	cout<< "3.feladat" << endl;
	feladat3(cout,p2,7);
	
	cout << "p2 pointers adress is " << p2 << endl;

	cout << "Value of p2 is : " << p2 << "and it points to : " << *p2 << endl;

	cout << "4.feladat" << endl;

	cout << "Value of p1 is : " << p1 << "and it points to : " << *p1 << endl;
	cout << "Value of p2 is : " << p2 << "and it points to : " << *p2 << endl;

	cout << "5-9.feladat" << endl;
	int* p3 = p2;
	p1 = p2;
	p3 = p2;

	cout << "Value of p1 is : " << p1 << "and it points to : " << *p1 << endl;
	cout << "Value of p2 is : " << p2 << "and it points to : " << *p2 << endl;

	delete[] p1;
	delete[] p2;

	cout << "10.feladat" << endl;

	p1 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    p2 = new int[10];

    for (int i = 0; i < 10; ++i)
        p2[i] = p1[i];
    
    for (int j = 0; j < 10; ++j)
        cout << p2[j] << endl;

    cout << "13.feladat" << endl;

    vector<int>feladat13a {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    vector<int>feladat13b (10);
    feladat13b = feladat13a;

    for (int i = 0; i < 10; ++i)
        feladat13b[i] = feladat13a[i];
    
    for (int j = 0; j < 10; ++j)
        cout << feladat13b[j] << endl;


	delete[] p1;
	delete[] p2;
	delete[] p3;


	return 0;
}