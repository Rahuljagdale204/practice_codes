//CBSE 2019 question
//which type of inheritance is this? -> multi level inheritance
//Write the names of all the members which are directly accessible by
//the member function Give() of class middle.
//answer: - data members : Labs
//Member function: - put(), get(), take(), give()

//write the names of all the members which are directly accessible by
//the member function out() of class top.
//answer: - data members: Roof
//          member function: - take(), give(), in() ,out()


#include<iostream>
using namespace std;

class Ground {
    int Rooms;
    protected:
    void put(){
        cout<<"Put Function \n";
    }
    public:
    void get(){
        cout<<"Get Function \n";
    }
};
class Middle: private Ground {
    int labs;
    public:
    void Take() {
        cout<<"Take Function \n";
    }
    void Give() {
        cout<<"Give function \n";
    }
};
class top : public Middle {
    int Roof;
    public:
    void in() {
        cout<< "In Function\n";
    }
    void Out() {
        cout<<"Out Function\n";
    }
};

int main() {
    top T;
    T.in();
    cout<<endl;
    T.Take();
    T.Give();
    T.Out();

    Middle m;
    


    return 0;
}