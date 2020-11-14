#include "../../std_lib_facilities.h"

int main()
{  
	/*

	int birth_year = 2002;

	cout << birth_year << "\t(decimal)\n"
		<< hex << birth_year << "\t(hexadecimal)\n"
		<< oct << birth_year << "\t(octal)\n";

	cout << noshowbase << dec << endl;
	int age = 18;
	cout << age << "\t(decimal)\n"
		<< hex << age << "\t(hexadecimal)\n"
		<< oct << age << "\t(octal)\n";

	int a, b, c ,d;
	cout << "Enter 4 number: " << endl;

	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << endl;
	cout << noshowbase << dec << endl;

	*/

	/*

	float number = 1234567.89;

	cout << defaultfloat << number << "\t(defaultfloat)\n"
		<< fixed << number << "\t(fixed)\n"
		<< scientific << number << "\t(scientific)\n" << endl;

	*/

	vector<string> first_name = {"Szabolcs","Balazs","Daniel","Peter","Marcell"};
	vector<string> last_name = {"Varga","Dobos","Papp","Simon","Vezse"};
	vector<string> email =
	{
		"szabi@gmail.com","balazs@gmail.com","dani@gmail.com","peti@gmail.com","marci@gmail.com"
	};
	vector<string> tel_num = {"061000","062000","063000","064000","065000"};
	
	cout << "| " << setw (10)<< first_name[1] << " | " << setw (10)<< last_name[1] << " | " << setw (17)<< email[1] << " | " << setw (8)<< tel_num[0] << " | "  << endl;
	cout << "| " << setw (10)<< first_name[0] << " | " << setw (10)<< last_name[0] << " | " << setw (17)<< email[0] << " | " << setw (8)<< tel_num[1] << " | "  << endl; 
	cout << "| " << setw (10)<< first_name[3] << " | " << setw (10)<< last_name[3] << " | " << setw (17)<< email[2] << " | " << setw (8)<< tel_num[2] << " | "  << endl;
	cout << "| " << setw (10)<< first_name[4] << " | " << setw (10)<< last_name[4] << " | " << setw (17)<< email[3] << " | " << setw (8)<< tel_num[3] << " | "  << endl;
	cout << "| " << setw (10)<< first_name[2] << " | " << setw (10)<< last_name[2] << " | " << setw (17)<< email[4] << " | " << setw (8)<< tel_num[4] << " | "  << endl;

	return 0;
}

