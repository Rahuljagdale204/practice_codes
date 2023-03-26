#include<iostream>
using namespace std;

void towerofhonai(int n, char src, char dest, char help) {
    if(n==0){
        return;
    }

    towerofhonai(n-1,src, help, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofhonai(n-1, help,dest, src);
}

int main(){
    towerofhonai(3, 'A','C','B');
    return 0;
} 