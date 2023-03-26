#include<bits/stdc++.h>
using namespace std;

vector<int>repeatedNumber(const vector<int> &A) {
    vector<int>ans;
    int n = A.size();
    vector<int>freq(n+1,0);
    for(int i=0;i<n;i++){
        freq[A[i]]++;
    }
    for(int i=1;i<n;i++){
        if(freq[i]==0 || freq[i]>1){
            ans.push_back(i);
        }
    }
    return ans;
} 
    


int main(){
    int n;cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int num;cin>>num;
        arr.push_back(num);
    }
    vector<int>ans= repeatedNumber(arr);
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}