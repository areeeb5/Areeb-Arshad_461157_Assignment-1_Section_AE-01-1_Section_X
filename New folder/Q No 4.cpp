#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Type any number 'N': ";
    cin >> N;

    if (N <=1) {
        cout << "There is no Prime Number less than 1!";
    } else if (N ==2) {
        cout << "The largest prime number less than or equal to 'N' is: 2";
    } else {
        for (int num = N-1; num >=2; num--) {
            bool Prime = true;
            for (int i= 2; i*i <= num; i++) {
                if (num % i ==0) {
                    isPrime = false;
                    break;
                }
            }
            if (Prime) {
                cout << "The largest prime number less than or equal to 'N' is: " << num;
                break;
            }
        }
    }
    return 0;
}
