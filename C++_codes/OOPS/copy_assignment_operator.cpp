#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health ;

    public:
    char *name;
    char level;
    static int timetocomplete;

    Hero(){
        cout<<"Simple constructor called"<<endl;
        name = new char[100];
    }

    Hero(int health, char level){
        this->level = level;
        cout<<"this-level "<<level<<endl;

        this->health = health;
        cout<<"this-health "<<health<<endl;
    }

    int gethealth(){
        return health;
    }

    int getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(int l){
        level = l;
    }

    void setname(char name[]){
        strcpy(this->name, name);
    }
    void print(){
        cout<<endl;
        cout<<"Name : "<<this->name<<", ";
        cout<<"Level : "<<this->level<<", ";
        cout<<"health : "<<this->health;
        cout<<endl;
    }

    ~Hero(){
        cout<<"Destructor called!!"<<endl;
    }
};

int Hero:: timetocomplete = 5;

int main(){
    cout<<Hero::timetocomplete<<endl;
    Hero a;
    cout<<a.timetocomplete<<endl;
    
    return 0;
}