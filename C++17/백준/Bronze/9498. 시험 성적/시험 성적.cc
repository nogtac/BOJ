#include <iostream>	
using namespace std;
	
int main() {
	int a;
	cin >> a;

	if(a<=100 && 90<=a)	
		cout << "A";
	else if(a<=89 && 80<=a)
		cout << "B";
	else if(a<=79 && 70<=a)
		cout << "C";
	else if(a<=69 && 60<=a)
		cout << "D";
	else if(a<60)
		cout << "F";

	return 0;
}