//24BCS10980_Vishal Kumar Singh
#include<bits/stdc++.h>
#define pb push_back
using namespace std;
 
int cnt(int arr[], int idx){  
    int num=arr[idx];
    int count=0;  
    for(int d = 1; d <= num; d++){
        if(num % d == 0){
            count++;
        }
    }
    return count;
}
 
int main(){
    int n;
    cin >> n;
    int inp[n];
    vector<int> opt;
    
    for(int i = 0; i < n; i++){
        cin >> inp[i];
    }
    
    for(int i = 0; i < n; i++){
        opt.pb(cnt(inp, i));
    }
    
    for(int i = 0; i < n; i++){
        cout << opt[i] << "\n";
    }
    
    return 0;
}
