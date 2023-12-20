#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1;
	string str2;
	cout<<"Write the 1st string: ";
	cin>>str1;
	cout<<"Write the 2nd string: ";
	cin>>str2;
	int length1 = str1.length();
	int length2 = str2.length();
	bool notequal = false;
	char temp;
	for(int i =0 ; i < length1 ; i++){	
		if(length1 != length2 || str1 != str2){
			notequal = true;
			break;
		}
	}
	if (notequal){
		cout<<"String are not equal"<<endl;
	}
	if(notequal != true){
		for (int i =0 ,j =length1 -1 ; i < j ; i++,j--){
			temp = str1[i];
			str1[i]=str1[j];
			str1[j]=temp;
		}
		cout<<"The rotated string is : "<<str1; 
	}
	return 0;
}