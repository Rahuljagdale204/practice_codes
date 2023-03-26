#include<bits/stdc++.h>
using namespace std;

class Student {
    private:
    string name;
    int age;
    int height;

    public:

    int getage(){
        return this->age;
    }

    int getheight(){
        return this->height;
    }
    string getname(){
        return this->name;
    }

    void print(){
        cout<<"Name : "<<this->name<<endl;
        cout<<"Age : "<<this->age<<endl;
        cout<<"Height : "<<this->height<<endl;
        cout<<"print finshed"<<endl;
    }

};

int main(){
    Student first;
    cout<<first.getage()<<endl;

    return 0;
}