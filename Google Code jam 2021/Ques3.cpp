
#include <bits/stdc++.h> 
using namespace std;

#define FOR(i, a, n) for (register int i = (a); i < (int)(n); ++i)
vector<string> SplitbyRegex(string s,string Regex){
    vector<string> tokens;
    regex re(Regex);
    sregex_token_iterator begin(s.begin(), s.end(), re),end;
    copy(begin, end,back_inserter(tokens));
    return tokens;
}

void Solve(int k)
{
   int N,R;
   cin>>N>>R;
   vector<int> temp;
   for(int i =1 ;i <= N ;i++){
       temp.push_back(i);
   }
   int count = R ;
   int j = N - 1;
   int i = 0;
    if(count < j - i ){
            cout<<"CASE "<< k+1 <<"#: "<<"IMPOSSIBLE"<<endl;return ;
    }
   while(count >= 0){
       int t = temp [i];
      
       if(count == j - i || count == 0){
           cout<<"CASE "<< k+1 <<"#: ";
           for(auto x : temp){
            cout<<x<<" ";
            }
            cout<<endl;
            return ;
       }
       if(count > j - i + 1){
          reverse(temp.begin() + i ,temp.begin() + j + 1);
          count -= j - i + 1;
          i++;j--;
       }
       else{
           reverse(temp.begin() + i ,temp.begin() +i + count - j + i );
           count = 0;
          
       }
       if(i > j){
           cout<<"CASE "<< k+1 <<"#: "<<"IMPOSSIBLE"<<endl;return ;
       }
       
   }
   cout<<"CASE "<< k+1 <<"#: ";
   for(auto x : temp){
      cout<<x<<" ";
   }
   cout<<endl;
    return ;
}
int main()
{
    //Solve();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin>>T;
    FOR(i,0,T){
        Solve(i);
     // cout<<"CASE "<< i+1 <<"#: "<< Solve()<<endl;
    }
    
}
