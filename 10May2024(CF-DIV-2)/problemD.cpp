#include <iostream>
using namespace std;
#define ll long long
#define vll vector<long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define umap unordered_map<int, int>
#define uset unordered_set<int>
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int counts = 1;
        int is = 0;
        int n = s.size();
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1' && s[i - 1] == '0')
            {
                if (is == 0)
                    is = 1;
                else
                    counts++;
            }
            else if (s[i] == '0' && s[i - 1] == '1')
                counts++;
        }

        cout << counts << endl;
    }
    return 0;
}