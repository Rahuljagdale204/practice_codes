//we have to ouput elements in decreasing frequency till we reach (k+1)th
//distinct elements.
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define pii pair<int, int>
#define vii vector<int>


int main(){
    int n, k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }

    map<int, int> freq;
    for(int i=0;i<n;i++){
        int presentsize = freq.size();
        if(freq[arr[i]]==0 && presentsize==k){
            break;
        }
        else{
            freq[arr[i]]++;
        }
    }
    vector<int>answer;
    map<int, int>::iterator it;
    for(it=freq.begin();it!=freq.end();it++){
        if(it->second !=0){
            pii p;
            p.first = it->second;
            p.second = it->first;
            answer.push_back(p);
        }
    }
    sort(answer.begin(), answer.end(), greater<pii>());

     map<int, int>::iterator it1;
    for(it1=answer.begin();it1!=answer.end();it1++){
        cout<<it1->second<<"->"<<it1->first<<endl;
    }
}