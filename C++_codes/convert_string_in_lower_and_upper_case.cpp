#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string neha="Neha Gunvant Pawar";
    //convert to uppercasae
    // for(int i=0;i<neha.size(); i++)
    //     if (neha[i] >= 'a' && neha[i]<='z')
    //         neha[i] -=32;
    
    //convert to lowercase
    // for(int i=0;i<neha.size(); i++)
    //     if (neha[i] >= 'A' && neha[i]<='Z')
    //         neha[i] +=32;

    transform(neha.begin(), neha.end(), neha.begin(), ::toupper );
    
    cout<<neha<<endl;

    transform(neha.begin(), neha.end(), neha.begin(), ::tolower );

    cout<<neha<<endl;
    return 0;
}