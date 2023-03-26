//Number formed from subarray of size K, divisible by 3
//for a given array and an integer k, check if any subarray of size k
//exists in the array such that elements in the subarray form a number 
// divisible by 3.
#include<iostream>
#include<vector>
using namespace std;


void computenumberfromsubarray(vector<int>arr, int k){

    pair<int, int>ans;
    int sum = 0;


    for(int i=0;i<k;i++){
        sum += arr[i];
    }

    bool found = false;
    if(sum%3==0){
        ans = make_pair(0, k-1);
        found = true;
    }

    for(int j=k; j<arr.size(); j++){
        if(found){
            break;
        }
        sum = sum + arr[j] - arr[j-k];

        if(sum%3==0){
            ans =make_pair(j-k+1, j);
            found = true;
        }
        
        }

        if(!found){
            ans = make_pair(-1, 0);
        }
        if(ans.first==-1){
            cout<<"No such pair exists in Given Array!!"<<endl;
        }
        else{
            for(int i= ans.first; i<=ans.second; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }



int main(){
    vector<int> arr= {84, 23, 54, 12, 56, 82};
    int k = 3;

    computenumberfromsubarray(arr, k);
    return 0;

}