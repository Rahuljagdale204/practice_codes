//n - length of n different boards
// m - painters available
// A painter paints 1 unit of board in 1 unit if time and each painter
// paint consecutive boards. Find the minimum time that will be required
//to paint all the boards.
#include<iostream>
using namespace std;

int findFeasible(int boards[], int n, int limit){
    int sum = 0, painters = 1;
    for(int i = 0; i < n; i++){
        sum += boards[i];
        if(sum > limit){
            sum = boards[i];
            painters++;
        }
    }
    return painters;
}

int painterpartition(int boards[], int n, int m){
    int totallength = 0, k = 0;
    for(int i=0;i<n;i++){
        k = max(k, boards[i]);
        totallength += boards[i];
    }

    int low =k, high = totallength;
    while(low < high){
        int mid = (low + high)/2;
        int painters = findFeasible(boards, n, mid);
        if(painters <= m){
            high = mid;
        }
        else{
            low = mid - 1;
        }
    }
    return low;
}

int main(){

    int arr[] = {10,20,30,40};
    int n = 4;
    int m = 2;
    cout<<"The minimum time required for painters is "<< painterpartition(arr, n, m);
    cout<<endl;
    return 0;
}