#include<bits/stdc++.h>
using namespace std;

string encryption(string str){
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            str.erase(str.begin()+i);
        }
    }
	char arr[5][5];
	int num=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			arr[i][j] = num+'a';
			num++;
		}
	}
	std::vector<int>row;
	std::vector<int>col;
	for(auto s:str){
	    for(int i=0;i<5;i++){
	        for(int j=0;j<5;j++){
	            if(s==arr[i][j]){
	                row.push_back(i);
	                col.push_back(j);
	            }
	        }
	    }
	}
	cout<<"+++++++++++++++++++++++++++++++++++"<<endl;
	for(auto x:row){
	    cout<<x<<" ";
	}cout<<endl;
	for(auto x:col){
	    cout<<x<<" ";
	}cout<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++"<<endl;
	vector<vector<int>>arr2;
	for(auto x:col){
	    row.push_back(x);
	}
	for(int i=0;i<row.size();i=i+2){
	    arr2.push_back({row[i],row[i+1]});
	}
	string ans="";
	for(auto x:arr2){
	    ans+=arr[x[0]][x[1]];
	}
	return ans;
}

string decryption(string str){
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            str.erase(str.begin()+i);
        }
    }
    
	char arr[5][5];
	int num=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			arr[i][j] = num+'a';
			num++;
		}
	}
	
	std::vector<int>row;
	std::vector<int>col;
	for(auto s:str){
	    for(int i=0;i<5;i++){
	        for(int j=0;j<5;j++){
	            if(s==arr[i][j]){
	                row.push_back(i);
	                col.push_back(j);
	            }
	        }
	    }
	}
	cout<<"+++++++++++++++++++++++++++++++++++"<<endl;
	for(auto x:row){
	    cout<<x<<" ";
	}cout<<endl;
	for(auto x:col){
	    cout<<x<<" ";
	}cout<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++"<<endl;
	int mid = ceil(row.size()/2);
	vector<vector<int>>arr2;
	for(int i=0;i<mid;i++){
	    arr2.push_back({row[i],row[mid+i]});
	    arr2.push_back({col[i],col[mid+i]});
	}
	string ans="";
	for(auto x:arr2){
	    ans+=arr[x[0]][x[1]];
	}
	return ans;
}

int main(){
	string str;
	getline(cin,str);
	cout<<"The plain text is : -"<<str<<endl;
	string ans;
	cout<<"Enter the choice \n1.Encryption\n2.Decryption"<<endl;
	int choice;cin>>choice;
	if(choice==1){
	    ans = encryption(str);
		cout<<"Plain text after encryption: -"<<ans<<endl;
	}
	else if(choice==2){
	    ans = decryption(str);
		cout<<"Plain text after decryption: -"<<ans<<endl;
	}
	
	return 0;
}
