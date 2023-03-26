#include<bits/stdc++.h>
using namespace std;

string solution(int *arr, int n){
    int mn =arr[0];
    int profit = 0;

    for(int i=1;i<n;i++){
        profit = max(profit,arr[i]-mn);
        mn = min(mn,arr[i]);
    }
    int ans =profit;
    cout<<ans<<endl;

    string answer = to_string(ans);
    string token = "";
    return "";
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    string ans = solution(arr,n);

    cout<<ans<<endl;
    return 0;
}