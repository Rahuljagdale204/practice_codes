#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void printinfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }

     
};

int main() {
    student arr[4];
    for(int i=0;i<4;i++){
        cout<<"Name= ";
        cin>>arr[i].name;
        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;
    }

    for(int i=0;i<4;i++){
        arr[i].printinfo();
    }

    return 0;
}