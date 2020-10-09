#include "std_lib_facilities.h"


int main()
try {
keep_window_open();


1. cout << "Success!\n"; //cout kisbetű cout << "Succes!\n";

2. cout << "Success!\n"; //a ; hiányzott a végéről

3. cout << "Success" << "\n"; /* idézőjel hiányzik a végéről */

4. cout << "success" << '\n'; // ha a succest akarom kiiratni stringként "" közé kell tennem

5. int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; // a string változó nem vehet fel int értéket 

6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
//az 5. elemre hivatkozva kapcsos zsarojel kell es ha 7 az 5. elem akkor ellentmondás az hogy a 7 nem az 5. elem ezert a != ki kellett cserelni == re.

7. if (cond) cout << "Success!\n"; else cout << "Fail!\n";

// innentől egy új módszert használok az átláthatóság kedvéért

/* bool cond;

if (cond) 
	cout << "Success!\n"; 
else cout << "Fail!\n";

nem volt se deklarálva se inicializálva változó;


*/

8. bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";

/* 

bool c = true; 
if (c) cout << "Success!\n"; 
else cout << "Fail!\n";

a bool erteke falsee volt igy nem succest irt ki ez nem szintaktikai hanem szemantikai hiba;

*/

9. string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";

/*

string s = "ape";
bool c = "fool" > s;
if (c) cout << "Success!\n";

logikai muvelet hamis értéket hozott mert az ape 3 karaktere nem nagyobb mint a fool 4 karaktere

*/

10. string s = "ape"; if (s=="fool") cout << "Success!\n";

/*

bool s = "ape"; 
if (s!="fool") cout << "Success!\n";

amig nem egyenlő foollal akkor addig succest ir ki

*/

11. string s = "ape"; if (s=="fool") cout < "Success!\n";

// a cout utan hianyzik megegy <;

12. string s = "ape"; if (s+"fool") cout < "Success!\n";

/*

string s = "ape";

	if (s<"fool") cout << "Success!\n";

hianyzott egy < a cout utan az s ertekenek pedig kisebbnek kell lennie

*/

13. vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";

/*
vector<char> v(5);
 for (int i=0; i<v.size(); ++i) ;
  cout << "Success!\n";

0 helyett i kell

  */

14. vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";

/*

vector<char> v(5); 
for (int i=0; i<=v.size()-1; ++i) ; 
	cout << "Success!\n";

az 5. elemre kérdez nem a 6. ra

*/

15. string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];

/*

string s = "Success!\n";
for (int i=0; i< s.length() ; ++i) cout << s[i];
return 0;

s hossza alapján irattam ki

*/

16. if (true) then cout << "Success!\n"; else cout << "Fail!\n";

/*

if (true) cout << "Success!\n";
else cout << "Fail!\n";

nem kell a then 

*/

17. int x = 2000; char c = x; if (c==2000) cout << "Success!\n";

/*

int x = 2000; 
char c = x; 
if (c!=2000) cout << "Success!\n";

ha nem egyenlő 2000 rel is jó

*/

18. string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];

/*

string s = "Success!\n";
for (int i=0; i<s.size(); ++i) cout << s[i];

a .size() miatt az egeszet kiirja

*/

19. vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";

/*

vector <int> v(5);
for (int i=0; i<=v.size()-1; ++i)
cout << "Success!\n";

meg kellett határozni a vector tipusat

*/

20. int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
/*

int i = 0;
int j=9;
while (i<10) ++i; 
if (j<i) cout << "Success!\n";

a j helyett i hez kellett adni 1 et

*/

21. int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";

/*

int x = 2;
 double d = 4.5;
  if (d==2*x+0.5) cout << "Success!\n";

d értékét 4.5 re vettem igy sikeres
 */ 

22. string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];

/*

string s = "Success!\n"; 
for (int i=0; i<=s.size()-1; ++i) cout << s[i];
 string char nem kellett 

 */

23. int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";

/*

int j = 0;
int i=0;
 while (i<10) ++i;
 if (j<i) cout << "Success!\n";

j++ atirtam i++ ra es j t deklaraltam

*/

24. int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";

/*

int x = 4;
 double d = 8.5;
if (d=2*x+0.5) cout << "Success!\n";

*/ 

25. cin << "Success!\n";

// cin helyett cout kell ha ki akarjuk iratni

return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
keep_window_open();
return 2;
}


