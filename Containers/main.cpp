// #include <iostream>
// #include <vector> // Include the vector header
// using namespace std;

// void explainPairs() {
//     pair<int, int> p = {1, 3}; // Corrected initialization
//     cout << p.first << " " << p.second << endl; // 1 3

//     pair<int, pair<int, int>> q = {1, {2, 3}}; // Changed variable name to 'q' to avoid redeclaration
//     cout << q.first << " " << q.second.first << " " << q.second.second << endl; // 1 2 3

//     pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
//     cout << arr[1].first << " " << arr[1].second << endl; // 3 4
// }

// void explainVector() {
//     vector<int> v = {1, 2, 3};
//     cout << v[0] << " " << v[1] << " " << v[2] << endl; // 1 2 3
//     cout << v.size() << endl; // 3
// }

// int main() {
//     cout << "Hello World" << endl;
//     explainPairs();
//     explainVector();
//     return 0;
// }
#include <iostream>
using namespace std;

void func(int i, int n) {
    if (i > n) return; // Changed 'cut' to 'i' for comparison
    cout << "Coding Ninjas" << endl; // Corrected spelling of "Ninjas"
    func(i + 1, n); // Changed 'func(i++, n)' to 'func(i + 1, n)' to avoid post-increment error
}

int main() { // Added return type 'int' to main function
    int n; // Declared 'n' variable
    cout << "Enter n : ";
    cin >> n; // Corrected the syntax by adding semicolon
    func(1, n);
    return 0; // Added return statement
}
