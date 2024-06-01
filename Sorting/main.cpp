#include <iostream>

using namespace std;



void selection_sorting(int n, int arr[]) {
    for (int i=0; i<=n-2; i++) {
        int min_index = i;
        for (int j=i; j<=n-1; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        } 
         
         if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
    cout << "The sorted array is: ";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void bubble_sort (int n, int arr[]) {
    for (int i=n; i>0; i--) {
        for (int j=0; j<i-1; j++) {
            if (arr[j] > arr[j+1]) {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
        }
        
    }
    cout << "The sorted array is: " ;
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void merge_sort(int n, int arr[]) {
    
}

int main() {
    cout << "Hello World!"<< endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    bubble_sort(n,arr);
}