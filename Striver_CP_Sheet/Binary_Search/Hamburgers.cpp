// #include <iostream>
// #include <map>
// #include <string>

// using namespace std;

// int main () {
//     map <char, int> numberOf;
//     string s;
//     cin >> s;
//     for (int i=0; i<s.size(); i++) {
//         numberOf[s[i]]++;
//     }
//     int nb, ns, nc;
//     cin >> nb >> ns >> nc;
//     int pb, ps, pc;
//     cin >> pb >> ps >> pc;
//     int r;
//     cin >> r;
//     if (numberOf['B'] == 0) {
//         if (pb <= r) {
//             r -= pb;
//             numberOf['B']++;
//         } else {
//             cout << 0 << endl;
//             return 0;
//         }
//     } else if (numberOf['C'] == 0) {
//         if (pc <= r) {
//             r -= pc;
//             numberOf['C']++;
//         } else {
//             cout << 0 << endl;
//             return 0;
//         }
//     } else if (numberOf['S'] == 0) {
//         if (ps <= r) {
//             r -= ps;
//             numberOf['S']++;
//         } else {
//             cout << 0 << endl;
//             return 0;
//         }
//     }
//     int costOfOne = pb*numberOf['B'] + ps*numberOf['S'] + pc*numberOf['C']; 
//     int ans = 0;

//     if (nb/numberOf['B'] == ns/numberOf['S'] && ns/numberOf['S'] == nc%numberOf['C']) {
//         ans+= nb/numberOf['B'];
//         if (r >= costOfOne) {
//             // r-= costOfOne;
//             ans+= r/costOfOne;
//         }
//         cout << ans << endl;
//         return 0;
//     }
//     int lb = nb/numberOf['B'], ls = ns/numberOf['S'], lc = nc/numberOf['C'];
//     // find min of three numbers
//     cout << lb << " " << ls << " " << lc << endl;
//     int min = lb;
//     if (min > ls) min = ls;
//     if (min > lc) min = lc;
//     ans += min;
//     lb -= min;
//     ls -= min;
//     lc -= min;
//     int cost = 0;
//     int zero = 0;
//     if (lc == 0) {
//         zero = pc;
//         cost = lb * pc;
//     } else if (ls == 0) {
//         zero = ps;
//         cost = lb * ps;
//     } else if (lb == 0) {
//         zero = pb;
//         cost = lc * pb;
//     }
//     if (r>=cost) {
//         r-=cost;
//         ans+= lb;
//     } else if (r>=zero) {
//         while (r>=zero) {
//             r-=zero;
//             ans++;
//         }
        
//     }
//     if (r>=costOfOne) {
//         ans+= r/costOfOne;
//     }
//     cout << ans << "2" << endl;
//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

long long nb, ns, nc, pb, ps, pc, r;
string recipe;

bool can_cook(long long x) {
    long long total_cost = max(0LL, pb * (x * count(recipe.begin(), recipe.end(), 'B') - nb)) +
                           max(0LL, ps * (x * count(recipe.begin(), recipe.end(), 'S') - ns)) +
                           max(0LL, pc * (x * count(recipe.begin(), recipe.end(), 'C') - nc));
    return total_cost <= r;
}

int main() {
    cin >> recipe >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    long long lo = 0, hi = 1e15;
    while (lo < hi) {
        long long mid = lo + (hi - lo) / 2;
        if (can_cook(mid)) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    cout << lo - 1 << endl;
    return 0;
}