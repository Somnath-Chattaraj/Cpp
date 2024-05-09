#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int maxDistance(string s, char c) {
    int n = s.size();
    vector<int> posC, posG;
    for (int i = 0; i < n; ++i) {
        if (s[i] == c) {
            posC.push_back(i);
        }
        if (s[i] == 'g') {
            posG.push_back(i);
        }
    }
    int maxDist = 0;
    for (int i = 0; i < posC.size(); ++i) {
        for (int j = 0; j < posG.size(); ++j) {
            int dist = min(abs(posC[i] - posG[j]), n - abs(posC[i] - posG[j]));
            maxDist = max(maxDist, dist);
        }
    }
    return maxDist;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        cout << maxDistance(s, c) << endl;
    }
    return 0;
}
