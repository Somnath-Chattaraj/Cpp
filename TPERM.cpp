// #include <iostream>
// using namespace std;

// bool convertToBase(int number) {
//     string result = "";
    
//     while (number > 0) {
//         int remainder = number % 3;
        
//         // Convert remainder to character and append to result
//         if (remainder < 10)
//             result = char('0' + remainder) + result;
//         else
//             result = char('A' + remainder - 10) + result;
        
//         number /= 3;
//     }
    
//     for (int i=0; i<result.size(); i++) {
//         if (result[i] == '2') {
//             return true;
//         }
//     }
//     return false;
// }



// int main() {
	
// 	int t;
// 	cin >> t;
// 	while (t>0) {
// 	    int num; 
// 	    cin >>num;
// 	    int arr[num];
// 	    int i = 1;
// 	    int j = 1;
// 	    while (j <= num) {
// 	        if (convertToBase(j)) {
// 	            arr[i-1] = j;
// 	            j++;
// 	            i = 0;
// 	        }
// 	        i++;
	        
// 	    }
	    
// 	    for (int i=0; i<num; i++) {
// 	        cout << arr[i] << endl;
// 	    }
	    
// 	    t--;
// 	}
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// bool convertToBase(int number) {
//     string result = "";

//     while (number > 0) {
//         int remainder = number % 3;

//         // Convert remainder to character and append to result
//         if (remainder < 10)
//             result = char('0' + remainder) + result;
//         else
//             result = char('A' + remainder - 10) + result;

//         number /= 3;
//     }

//     for (int i = 0; i < result.size(); i++) {
//         if (result[i] == '2') {
//             return true;
//         }
//     }
//     return false;
// }

// int main() {

//     int t;
//     cin >> t;
//     while (t > 0) {
//         int num;
//         cin >> num;
//         vector<int> arr(num, 0);
//         int i = 1;
//         int j = 1;
//         while (j <= num) {
//             if (convertToBase(j + i) && arr[i-1] == 0) 
// 			{
//                 arr[i-1] = j;
//                 j++;
//                 i=0;
//             }
// 			i++;
//         }

//         for (int i = 0; i < num; i++) {
//             cout << arr[i] << " ";
//         }
// 		cout << endl;

//         t--;
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

bool hasDigit2(int number) {
    while (number > 0) {
        if (number % 3 == 2) {
            return true;
        }
        number /= 3;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int num;
        cin >> num;
        vector<int> arr;
        
        int current = 1;
        while (arr.size() < num) {
            if (hasDigit2(current)) {
                arr.push_back(current);
            }
            current++;
        }

        for (int i = 0; i < num; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
