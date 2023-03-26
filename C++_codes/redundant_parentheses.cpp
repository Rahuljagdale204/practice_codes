//Redundant Parenthese
//Given a valid mathematical expression, find whether it have redunant
//parentheses or not. it contain the following operators '+', '-','*','/'.
#include"bits/stdc++.h"
using namespace std;

int32_t main() {
    bool ans = false;
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/'){
            st.push(s[i]);
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            ans = true;
            while(st.top() == '+' or st.top() == '-' or st.top() == '*' or st.top() == '/'){
                st.pop();
            }
            st.pop();
        }
    }
    cout<<ans<<endl;
    return ans;

    return 0;
}  