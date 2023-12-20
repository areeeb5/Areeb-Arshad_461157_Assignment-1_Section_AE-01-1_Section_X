#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cout << "Enter any string: ";
	getline (cin,str);
	cout << endl;
	int length = str.length();
	for (int i = 0; i < length; i++){
		bool diff = true;
		for (int j = 0; j < length; j++){
			if (i != j && str[i] == str[j]){
				diff = false;
				break;
			}
		}
		if (diff){
			cout << str[i];
		}
	}
}