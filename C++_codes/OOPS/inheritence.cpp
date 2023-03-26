#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    int age;
    int weight;
    int height;

    public:
    int getage(){
        return age;
    }

    int getweight(){
        return weight;
    }

    void setweight(int w){
        this->weight = w;
    }

    int getheight(){
        return height;
    }
};

class male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};



int main(){
    male object1;
    cout<<object1.age<<endl;
    cout<<object1.height<<endl;
    cout<<object1.weight<<endl;
    object1.sleep();
    object1.setweight(70);
    cout<<object1.weight<<endl;
    cout<<object1.getweight()<<endl;
    return 0;
}