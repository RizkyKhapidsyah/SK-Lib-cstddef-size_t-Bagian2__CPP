
#include <iostream>
#include <string>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	string str = "geeksforgeeks a computer science";
	string str1 = "geeks";

	size_t found = str.find(str1);

	if (found != string::npos) {
		cout << "First occurrence is " << found << endl;
	}
		
	char arr[] = "geeks";
	found = str.find(arr, found + 1);

	if (found != string::npos) {
		cout << "Next occurrence is " << found << endl;
	}

	_getch();
	return 0;
}
