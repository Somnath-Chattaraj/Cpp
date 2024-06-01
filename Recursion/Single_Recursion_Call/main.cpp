#include <iostream>
#include <vector>
using namespace std;

void func(int i, int n) {
    if (i > n) return; 
    cout << "Coding Ninjas" << endl; 
    func(i + 1, n); 
}

void ar(int n, int i) {
    if (i > n) return; // Corrected termination condition
    cout << i << " ";
    ar(n, i + 1);
}

void reverse_order(int n) {
    if (n == 0) return;
    cout << n << " ";
    reverse_order(n - 1);
}

void sum_of_N_numbers(int i, int n, int sum) {
    if (i>n) {
        cout<< "The sum of the first N number: " << sum;
        return;
    }
    sum = sum + i;
    sum_of_N_numbers(i+1,n,sum);
}

void product_of_N_numbers(int i, int n, int prod) {
    if (i>n) {
        cout<< "The product of the first N number: " << prod;
        return;
    }
    prod = prod * i;
    product_of_N_numbers(i+1,n,prod);
}

void reverse_of_an_array(int n, int arr[], int i) {
   if (i>=n/2) {
    return;
   }
   swap(arr[i], arr[n-i-1]);
   reverse_of_an_array(n,arr,i+1);
}

void pallindrome_check(string n, string m, int i) {
    if (i < 0) {
        if (n==m) {
            cout << "true";
            return;
        } else {
            cout << "false ";
            return;
        }
        
    }
    m = m + n[i];
    pallindrome_check(n,m,i-1);

}



int main() { 
    int n; 
    cin >> n;
    // string n;
    // cin >> n; 
    // int arr[n];
    // for (int i=0; i<n; i++) cin >> arr[i] ;
    sum_of_N_numbers(1,n,0);
    // // product_of_N_numbers(1,n,1);
    // reverse_of_an_array(n, arr, 0);
    // for (int i=0; i<n; i++) cout << arr[i] << " ";

    // pallindrome_check(n,"",size(n)-1);


    return 0; 
}



