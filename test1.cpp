// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>

// using namespace std;

// int main() {
//     int N, M;
//     cin >> N >> M;

//     vector<int> batsmen(N);
//     vector<int> bowlers(M);

//     for (int i = 0; i < N; ++i) {
//         cin >> batsmen[i];
//     }

//     for (int i = 0; i < M; ++i) {
//         cin >> bowlers[i];
//     }

//     sort(batsmen.rbegin(), batsmen.rend()); // Sort batsmen in descending order
//     sort(bowlers.rbegin(), bowlers.rend()); // Sort bowlers in descending order
//     int total_skill = 0;
//     if (N < 4 || M < 4) {
//         cout << -1 << endl;
        
//     } else {

//         if (N+M == 11 ) {
            
//             total_skill+= accumulate(batsmen.begin(), batsmen.end(), 0);
//             total_skill+= accumulate(bowlers.begin(), bowlers.end(), 0);
//         } else if (N+M > 11) {

            
//             for (int i = 0; i < 4; ++i) {
//                 total_skill += batsmen[i];
//             }

//             for (int i = 0; i < 4; ++i) {
//                 total_skill += bowlers[i];
//             }
//             vector<int> store;
//             for (int i=4; i<N; i++) {
//                 store.push_back(batsmen[i]);
//             }
//             for (int i=4; i<M; i++) {
//                 store.push_back(bowlers[i]);
//             }
//             sort(store.rbegin(), store.rend());
//             for (int i=0; i<3; i++) {
//                 total_skill+= store[i];
//             }
//         } else {
//             total_skill = -1;
//         }
    
        

//         cout << total_skill << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<int> bat(n, 0);
//         vector<int> ball(m, 0);
//         for (int i = 0; i < n; i++) {
//             cin >> bat[i];
//         }
//         for (int i = 0; i < m; i++) {
//             cin >> ball[i];
//         }
//         vector<int> store;
//         int sum = 0;
//         if (n + m == 11 && n >= 4 && m >= 4) {
//             sum += accumulate(bat.begin(), bat.end(), 0);
//             sum += accumulate(ball.begin(), ball.end(), 0);
//         } else if (n + m > 11 && n >= 4 && m >= 4) {
//             sort(bat.rbegin(), bat.rend());
//             sort(ball.rbegin(), ball.rend());
//             sum += accumulate(bat.begin(), bat.begin() + 4, 0);
//             sum += accumulate(ball.begin(), ball.begin() + 4, 0);
//             for (int i = 4; i < (n); i++) {
//                 store.push_back(bat[i]);
//             }
//             for (int i = 4; i < (m); i++) {
//                 store.push_back(ball[i]);
//             }
//             sort(store.rbegin(), store.rend());
            
//             sum += accumulate(store.begin() , store.begin() + 3, 0);
//         } else {
//             sum = -1;
//         }

//         cout << sum << endl;
// //     }

//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <numeric>
// using namespace std;

// int countSubarraysWithEven(const std::vector<int>& arr) {
//   int count = 0;
//   bool hasEven = false;

//   // Check if there's at least one even number in the array
//   for (int num : arr) {
//     if (num % 2 == 0) {
//       hasEven = true;
//       break;
//     }
//   }

//   // If no even number exists, all subarrays will have odd products (not required)
//   if (!hasEven) {
//     return 0;
//   }

//   // Since at least one even number exists, all subarrays are valid
//   int n = arr.size();
//   // Formula for total subarrays: n * (n + 1) / 2
//   count = n * (n + 1) / 2;

//   return count;
// }



// int main() {
	
//     // int t;
//     // cin >> t;
//     // while (t--) {
//         // int n;
//         // cin >> n;
//         // vector<int> arr(n,0);
//         // for (int i=0; i<n; i++) {
//         //     cin >> arr[i];
//         // }
//     //     for(int i=0; i<n; i++) {
//     //         if (arr[i] % 2 != 0) {
//     //             arr[i]++;
//     //             break;
//     //         }
//     //     }
//     //     cout << countSubarraysWithEven(arr) << endl;
        
//     // }
//         int n;
//         cin >> n;
//         vector<int> arr(n,0);
//         for (int i=0; i<n; i++) {
//             cin >> arr[i];
//         }
//     cout << accumulate(arr.begin(),arr.begin()+4,0);
// }



  
