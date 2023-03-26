#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

queue<int> pqmax;
queue<int> pqmin;

void insert(int n){
    if(pqmax.size()==pqmin.size()){
        if(pqmax.size() == 0){
            pqmax.push(n);
            return;
        }
        if(n<pqmax.front()){
            pqmax.push(n);
            
        }
        else{
            pqmin.push(n);
        }
    }
    else{
        //case1: size of pqmax is geater than size of pqmin
        if(pqmax.size()>pqmin.size()){
            
            if(n >= pqmax.front()) {
                pqmin.push(n);
            }
            else{
                int temp = pqmax.front();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(n);

            }
        }
        else{//pqmax.size() < pqmin.size()
            if(n<pqmin.size()){
                pqmax.push(n);
            }
            else{
                int temp= pqmin.front();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(n);
            }
        }
        
        }

    
}

double findmedian(){
    if(pqmax.size()==pqmin.size()){
        return (pqmin.front()+pqmax.front()/2.0);
    }
    else if(pqmax.size()>pqmin.size()){
        return pqmax.front();
    }
    else{
        return pqmin.front();
    }
}

int main(){
    insert(10);
    cout<<findmedian()<<endl;
    insert(15);
    cout<<findmedian()<<endl;
    insert(21);
    cout<<findmedian()<<endl;
    insert(30);
    cout<<findmedian()<<endl;
    insert(18);
    cout<<findmedian()<<endl;
    insert(19);
    cout<<findmedian()<<endl;

    return 0;
}