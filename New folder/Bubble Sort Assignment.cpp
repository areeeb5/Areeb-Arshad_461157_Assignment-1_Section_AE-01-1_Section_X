#include <iostream>
using namespace std;
int main()

{
	int arr[6] = {83,219,30,43,32,431};
	int i;
	int j;
	int temp;
	for (i = 0; i<6; i++){
		for (j = i; j<6; j++ ){
			if (arr[i]<arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int k = 0; k<6; k++){
		cout<<arr[k]<<" ";
	}
	return 0;
}