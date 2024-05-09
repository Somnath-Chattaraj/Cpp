#include <iostream>

using namespace std;

void slimes(vector<int>& ans) {
    int n = ans.size();
    // int max = accumulate(ans.begin(), ans.end());
    for (int i=0; i<n; i++) {
        if (ans[i] < ans[i+1] || ans[i] < ans[i-1]) {
            cout << 1 << " ";
        }
        
        

    }
}
int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        vector <int> ans;
        int n;
        cin >> n;
        for (int j=0; j<n; j++) {
            int k;
            cin >> k;
            ans.push_back(k)
        }

    }
    return 0;
}