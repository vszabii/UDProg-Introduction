#include "std_lib_facilities.h"

int main()
{
	string first_name;
	
	cout << "What's your name? " "\n";
	
	cin >> first_name;

	cout << "Hello " << first_name << ", who would you like to write to? ""\n";

	string person;

	cin >> person;

	cout << "Dear " << person << ", how are you? I'm fine and I really miss you. ""\n";

	int friend_age;

	cout << "How old are you?""\n";

	cin >> friend_age;

	if (friend_age <0 || friend_age > 110) 
		simple_error("you are kidding!");

	string friend_name;

	cout << "Type our friend's name: ""\n";

		cin >> friend_name;

	cout << "Have you seen " << friend_name << " lately? ""\n";

	char friend_sex = 0;

	cout << "What's " << friend_name << "'s gender. Type m for male, f for female. ""\n";

	cin >> friend_sex;
	
	if (friend_sex == 'm') { cout << "If you see " << friend_name << " tell him to call me. ""\n"; }
	else {
		if (friend_sex == 'f') { cout << "If you see " << friend_name << " tell her to call me. ""\n"; }
		else {};
	};
		
	cout << "How old are you? ""\n";

	int age;

	cin >> age;

	cout << "I hear you just had birthday and you are " << age << " years old. ""\n";

	if (age < 12) { cout << "Next year you will be " << age+1; }
	else {
		if (age == 17) { cout << "Next year you will be able to vote. "; }
		else {
			if (age > 70) { cout << "I hope you are enjoying retirement. "; }
		}
		
		cout << "Your sincerly, ""\n" "\n";
		cout << first_name "\n";

	}



	return 0;

}
