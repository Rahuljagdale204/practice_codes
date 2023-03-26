//subarray of size K with palindromic concatenation
//Palindrome: - Words that are spelled the same from forward and backword
//Problem: - For a given array and an interger K, check if any subarray
//of size K exists in the array such that concatenation of elements from
// a palindrome.

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool Palindrome(int n){
    int temp, number ;
    temp = n;
    while(temp > 0){
        number = number * 10 + (temp%10);
        temp = temp/10;
    }
    if(number == n){
        return true;
    }
    return false;
}

int concatenation(vector<int> arr, int k){
    int num = 0;

    for(int i=0; i <k;i++){
        num = num*10 + arr[i];
    }

    if(Palindrome(num)){
        return 0;
    }

    for(int j=k;j<arr.size();j++){
        num = (num % (int)pow(10, k-1))*10 + arr[j];
        
        if(Palindrome(num)){
            return j-k+1;
        }
    }

    return -1; 
}


int main(){
    vector<int> arr = {2, 3, 5, 1, 1, 5};
    int k = 4;   

    int ans = concatenation(arr, k);

    if(ans == -1){
        cout << "Palindrome subarray doesn't exists"<<endl;
    }
    else{
        for(int i=ans; i<ans+k;i++){
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
    return 0;
}