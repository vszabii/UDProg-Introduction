#include "std_lib_facilities.h"
#include <iostream>
int main()
{


double a = 0; //kicsereltem az eredeti int et double re kitoroltem a b valtozot 

double legkisebb = 0;
double legnagyobb = 0;
const vector <string> measure = {"cm","m","in","ft"};
constexpr double cm_meter_valto = 0.01;
constexpr double in_cm_valto = 2.54;
constexpr double ft_in_valto = 12; 
constexpr double m_cm_valto = 100;
double teljes {0};
string unit ;
vector <double>osszes;
double sum = 0;


cout << "Enter a value and add a measurement unit.\n";
cout << "m for meters, cm for centimeter, in for inch, ft for feet \n";

while (cin >> a >> unit)
{
	/*cout << "a=" << a << "," << "b="<< b << "\n";

	if (a < b){cout << "The smaller value is "<< a << " the bigger value is "<< b<< "\n";}
	if (a > b){cout << "The smaller value is "<< a << " the bigger value is "<< b<< "\n";}
	if (a == b){cout <<"The numbers are equal." "\n";}
	if (a-b < 0.01){cout << "The numbers are almost equal." "\n";}*/
	//itt kell megvaltoztatni a szerkezetet a 6 os ponthoz.
	

	if (unit == measure.at(0))
	{
		teljes = a * cm_meter_valto;
		cout << teljes << " m\n";

	}else if (unit == measure.at(1)){
		teljes = a;
		cout << teljes << " m\n";
	}
	else if (unit == measure.at(2))
	{
		teljes = a * in_cm_valto* cm_meter_valto;
		cout << teljes << " m\n";
	}
	else if (unit == measure.at(3))
	{
		teljes = a * ft_in_valto * in_cm_valto * cm_meter_valto;
		cout << teljes << " m\n";
	}else simple_error("It's a forbidden measure unit.\n");

	if (a == 0)
	{
		cout << a << unit<<" is the first, the smallest and largest as well. \n";
		legkisebb = a;
		legnagyobb= a;
	} 

	if (a < legkisebb );
	{
		cout << a <<" "<< unit <<" is the smallest so far.""\n";
		legkisebb = a;
	}

	if (a > legnagyobb)

	{	cout << a <<" " << unit <<" is the largest so far.""\n";
		legnagyobb = a;
	}
	sum+= a;
	osszes.push_back(a);
	

}	

cout << "Smallest value : " << legkisebb << " meters \n";
cout << "Largest value : " << legnagyobb << " meters \n";
cout << "Number of values: "  << osszes.size() << '\n';
cout << " Sum of values : " << sum << " meters \n";




return 0;

}