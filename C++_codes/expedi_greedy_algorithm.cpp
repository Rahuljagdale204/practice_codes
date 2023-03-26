//count the minimum number of stops while reaching the town.
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define vi vector<int>
#define pii pair <int, int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>townandfuel(n);
        rep(i,0,n){
            cin>>townandfuel[i].ff>>townandfuel[i].ss;
        }
        int L,P;
        cin>>L>>P;

        rep(i,0,n){
            townandfuel[i].ff = L-townandfuel[i].ff;
        }

        sort(townandfuel.begin(),townandfuel.end());
        
        int ans = 0;
        int curr = P;
        priority_queue<int, vector<int>> pq;
        bool flag = 0;
        rep(i,0,n){
            if(curr >=L){
                break;
            }
            while(curr<townandfuel[i].ff){
                if(pq.empty()){
                    flag = 1;
                    break;
                }
                ans++;
                curr += pq.top();
                pq.pop();

            }
            if(flag){
                break;
            }
            pq.push(townandfuel[i].ss);
        }
        if(flag){
            cout<<"-1"<<endl;
            continue;
        } 

        while(!pq.empty() && curr<L){
            curr += pq.top();
            pq.pop();
            ans++;
        }
        if(curr<L){
            cout<<"-1"<<endl;
            continue;
        }
        cout<<"Answer: - "<<ans<<endl;
    }
    return 0;
}