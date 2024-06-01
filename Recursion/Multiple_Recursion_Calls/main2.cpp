#include <iostream>
#include <vector>
using namespace std;



int fibonacci_series(int n) {
    if (n<=1) {
        return 1;
    }

    int last = fibonacci_series(n-1);
    int slast = fibonacci_series(n-2);
    return last + slast;
    
}


int main() {
    // int n;
    // cin >> n;
    cout << fibonacci_series(4);
}




