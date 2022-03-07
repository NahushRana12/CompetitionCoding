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
int Solve()
{
   float arr[3][2],; set<pair<int,int>> result;
   for(int i =0 ;i< 3;i++){
       cin>>arr[i][0]>>arr[i][1];
   }
   
}
int main()
{
    Solve();
   /* int T;
    cin>>T;
    FOR(i,0,T){
      cout<< Solve()<<endl;
    }*/
    
}
