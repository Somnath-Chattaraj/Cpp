#include <iostream>
#include <map>

using namespace std;

void largest_number(int n ,int arr[]) {
    int l_num = arr[0];
    for (int i=1;i<n;i++) {
        if (l_num < arr[i]) {
            l_num = arr[i];
        }
    }
    cout << l_num;
}

void second_largest(int n ,int arr[]) {
    for (int i=0; i<n-1; i++) {
        int mini = i;
        for (int j=i; j<n-1; j++) {
            if (arr[mini] > arr[j]) {
                int temp = arr[mini];
                arr[mini] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << arr[n-2];
}

void check_sorted_array(int n, int arr[]){
    int didswap = 0;
   for (int i=0; i<n-1; i++) {
        int mini = i;
        for (int j=i; j<n-1; j++) {
            if (arr[mini] > arr[j]) {
                didswap = 1;
                break;
                int temp = arr[mini];
                arr[mini] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if (didswap > 0) cout << "Not Sorted!";
    else cout << "Sorted!";

     
}

void remove_duplicate(int n, int arr[]) {
    
    int i = 0;
    for (int j=1; j<n; j++) {
        if (arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }

    cout << "The length of the array is: " << i+1;
    

    

    

}
int main() {
    cout << "Hello  World!" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    // largest_number(n,arr);
    // second_largest(n,arr);

    // check_sorted_array(n,arr);
    remove_duplicate(n, arr);

    return 0;
}