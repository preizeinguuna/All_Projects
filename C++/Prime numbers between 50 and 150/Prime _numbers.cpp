#include<iostream>
using namespace std;

bool is_prime(int n) {
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int A[20] = {};
    int j = 0;
    int n, i;
    
    for (i = 50; i <= 150; i++) {
        if (is_prime(i)) {
            A[j] = i;
            j++;
        }
    }
    
    cout << "Prime numbers between 50 and 150: " << endl;
    for (int i = 0; i < j; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    
    return 0;
}
