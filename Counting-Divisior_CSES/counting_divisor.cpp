#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 1e6 + 5;
 
int main() {
    vector<int> divisorCount(MAX, 0);
    
    for (int i = 1; i < MAX; i++) {
        for (int j = i; j < MAX; j += i) {
            divisorCount[j]++;
        }
    }
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cout << divisorCount[x] << "\n";
    }
    
    return 0;
}
