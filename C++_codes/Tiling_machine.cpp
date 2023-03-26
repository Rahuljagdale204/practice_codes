//Given a "2Xn" board and tiles of size "2*1", count 
//the number of ways to tile the given board using
//these tiles.
#include<iostream>
using namespace std;

int tilingways(int n) {
    if (n==0) {
        return 0;
    }
    if (n==1) {
        return 1;
    }

    return tilingways(n-1) + tilingways(n-2);
}

int main() {
    cout<<tilingways(4)<<endl;

    return 0;
}