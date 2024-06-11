#include <iostream>
#include <string>
#include <map>


using namespace std;

// Character Hashing
void Character_Hashing(string name, char a) {
    int arr[26] = {0};
    for (int i = 0; i < name.length(); i++) {
        arr[name[i] - 'a']++;
    }
    
    cout << "The frequency of " << a << " is: " << arr[a - 'a'] << endl;
}

// Array hashing
void array_hashing(int n, int arr[], int find) {
    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    cout << "The frequency of " << find << " is: " << mpp[find] << endl;
}

int main() {

    // string name ;
    // cin >> name;
    // char a ;
    // cin >> a;
    // Character_Hashing(name, a);

    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int find;
    cin >> find;
    array_hashing(n,arr,find);


    return 0;
}


