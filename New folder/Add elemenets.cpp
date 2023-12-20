#include <iostream>
using namespace std;
int main()
{
	int arrA[5] = {1,2,3,4,5};
	int arrB[5];
	cout<<"Type in the elements you would like to add: "<<endl<<endl;
	for (int i =0 ; i <5 ; i++)
	{
		cin>>arrB[i];
	}
	cout<<"The array with the elements added: ";
	cout<<"{";
	for (int i = 0 ; i<5 ; i++)
	{
		cout<<arrA[i]<<",";
	}
	for ( int i = 0; i <4; i++)
	{
		cout<<arrB[i]<<",";
	}
	cout<<arrB[4];
	cout<<"}";
}