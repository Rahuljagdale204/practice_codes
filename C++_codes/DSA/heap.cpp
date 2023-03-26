#include<bits/stdc++.h>
using namespace std;

class heap {
    public:
        int arr[100];
        int size=0;

        heap(){
            arr[0]=-1;
            size=0; 
        }


        void insert(int val){
            size=size+1;
            int index =size;
            arr[index]=val;

            while(index>1){
                int parent = index/2;

                if(arr[parent]<arr[index]){
                    swap(arr[parent],arr[index]);
                    index = parent;
                }
                else{
                    return;
                }
            } 
        }
        void print(){
            for(int i=1;i<=size;i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
        }
        void deletefromheap(){
            if(size==0){
                return;
            }

            arr[1] = arr[size];
            size--;

            int i=1;
            while(i<size){
                int leftidx = 2*i;
                int rightidx = 2*i+1;

                if(leftidx<size && arr[i]<arr[leftidx]){
                    swap(arr[i],arr[leftidx]);
                    i = leftidx;
                }
                else if(rightidx<size && arr[i]<arr[rightidx]){
                    swap(arr[i],arr[rightidx]);
                    i=rightidx;
                }
                else{
                    return;
                }
            }
        }  
};

void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left<n && arr[largest]<arr[left]){
        largest = left;
    }

    if(right<n && arr[largest]<arr[right]){
        largest = right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

int main(){
    heap rash;
    rash.insert(50);
    rash.insert(55);
    rash.insert(53);
    rash.insert(52);
    rash.insert(54);
    rash.print();
    rash.deletefromheap();
    rash.print();
    cout<<"Test Heapify"<<endl; 
    int arr[6] = {-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}