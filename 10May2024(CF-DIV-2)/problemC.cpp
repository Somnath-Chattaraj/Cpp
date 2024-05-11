// #include <iostream>

// using namespace std;

// bool doIntersect(int a, int b, int c, int d) {
//     // Function to check if two line segments intersect on a clock face
//     if (a > b) swap(a, b); // Ensure a < b
//     if (c > d) swap(c, d); // Ensure c < d

//     // Check if the intervals [a, b] and [c, d] overlap
//     return !(b < c || d < a);
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;
//         if (doIntersect(a, b, c, d)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     // int a, b, c, d;

//     // // Input the values of a, b, c, and d
//     // // cout << "Enter the values of a, b, c, and d (not more than 12): ";
//     // cin >> a >> b >> c >> d;

//     // // Check if the strings intersect
//     // if (doIntersect(a, b, c, d)) {
//     //     cout << "YES" << endl;
//     // } else {
//     //     cout << "NO" << endl;
//     // }

//     return 0;
// }
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

// bool lineIntersects(int a, int b, int c, int d) {
//     // if (a > b) swap(a, b);
//     // if (c > d) swap(c, d);
//     // return !(b < c || d < a);

//     if (c > a && ) {}
// }

// bool doIntersect(int start1, int end1, int start2, int end2) {
//     // Convert the input points to the range [0, 11]
//     start1 %= 12;
//     end1 %= 12;
//     start2 %= 12;
//     end2 %= 12;

//     // Compute the clockwise distance between start1 and end1
//     int clockwise_dist1 = (end1 - start1 + 12) % 12;

//     // Compute the clockwise distance between start2 and end2
//     int clockwise_dist2 = (end2 - start2 + 12) % 12;

//     // If both clockwise distances are greater than 6, they intersect
//     if (clockwise_dist1 > 6 && clockwise_dist2 > 6) {
//         return true;
//     }

//     // If both clockwise distances are less than or equal to 6, they intersect
//     if (clockwise_dist1 <= 6 && clockwise_dist2 <= 6) {
//         return true;
//     }

//     // If one clockwise distance is greater than 6 and the other is less than or equal to 6, they don't intersect
//     return false;
// }

bool doIntersect(int a, int b, int c, int d) {
    // vector <int> half;
    int i=a;
    bool flag1 = false, flag2 = false;
    int mod = i % 12;
    if (mod == 0) {
        mod = 12;
    }
    while (mod != b) {
        // half.push_back(i%12);
        if ((i%12 != 0 && i%12 == c) || (i%12 == 0 && c == 12)) {
            flag1 = true;
        } else if ((i%12 != 0 && i%12 == d) || (i%12 == 0 && d == 12)) {
            flag2 = true;
        }
        i++;
        mod = i % 12;
        if (mod == 0) {
            mod = 12;
        }
    }
    return flag1 ^ flag2;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c, d;
        // cin >> a.start >> a.end >> b.start >> b.end;
        // cin >> c.start >> c.end >> d.start >> d.end;
        cin >> a >> b >> c >> d;
        if (doIntersect(a,b,c,d)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}