#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    
    sort(arr.begin(), arr.end());
    
    long long result = 0;
    for(int i = 0; i < n; i++) {
    }
    
    cout << result << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
