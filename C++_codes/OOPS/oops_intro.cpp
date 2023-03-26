#include<bits/stdc++.h>
using namespace std;


class Hero{
    private:
    int health ;

    public:
    char *name;
    char level;


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


    //copy contructor
    Hero(Hero& temp){

        //Deep copy
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        

        cout<<"Copy Contructor called "<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    //shallow copy

 
};


int main(){

    Hero rash;
    rash.sethealth(20);
    rash.setlevel('B');
    char name[7] = "Rashmi";
    rash.setname(name);

    rash.print();
    //use default copy contructor

    Hero rahul(rash);
    rahul.print();

    
    rash.print();

    return 0;
}