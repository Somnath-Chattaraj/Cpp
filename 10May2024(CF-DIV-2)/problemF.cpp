// #include <iostream>
// #include <cmath>

// using namespace std;

// int countLatticePoints(int r) {
//     // Count lattice points between r and r+1
//     int lattice_points = 0;

//     lattice_points += 4;
//     int i = 1;
//     int prev_left = pow(r-1,2) + pow(i,2);

//     i=1;
//     int right = pow(r,2) + pow(i,2);
//     while (pow(right, 0.5) < r+1) {
//         lattice_points += 4;
//         i++;
//         right = pow(r,2) + pow(i,2);
//         cout << "coordinate: " << r << "," << i-1 << endl;
//         // cout << r <<" "<< i << endl;
//         // cout << pow(right, 0.5) << endl;
//     }
//     // if (r*pow(2,0.5) < r+1) {
//     //     lattice_points += 4;
//     // }
//     i = 1;
//     int top = pow(r,2) + pow(i,2);
//     while (pow(top, 0.5) < r+1) {
//         lattice_points += 4;
//         i++;
//         top = pow(r,2) + pow(i,2);
//         cout << "coordinate: " << i-1 << "," << r << endl;
//         // cout << r <<" "<< i << endl;
//         // cout << pow(top, 0.5) << endl;
//     }
//     if (r*pow(2,0.5) < r+1) {
//         lattice_points -= 4;
//         cout << "YES" << endl;
//     }
//     return lattice_points;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {

//     int r;

//     // Input the value of r
//     // cout << "Enter the value of r: ";
//     cin >> r;

//     // Count the number of lattice points between r and r+1
//     int lattice_points = countLatticePoints(r);

//     cout << lattice_points << endl;
//     }

//     return 0;
// }


#include<iostream>
#define ll long long
using namespace std;
ll T;
int main(){
    cin>>T;
    while(T--){
        ll N,ans;
        cin>>N;
        ans=1;
        for(ll i=1;i<=N;i++){
           ans+=((ll)sqrt((N+1)*(N+1)-i*i-1)-(ll)sqrt(N*N-i*i-1));
        }
        cout<<4*ans<<"\n";
    }
}