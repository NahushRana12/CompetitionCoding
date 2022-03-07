#include <bits/stdc++.h> 
using namespace std;

string Solve()
{
    
    string s;
    cin>>s;
    if(s.length() <= 10)
        return s;
    else{
        int x = s.length()  - 2;
        s.erase( 1,x);
        s.insert(1,to_string(x));
        return s;
    }        
    
    
}
int main()
{
    
    int T;
    cin>>T;
    for(int i = 1 ;i <=  T;i++){
       cout<< Solve()<<endl;
    }
}
