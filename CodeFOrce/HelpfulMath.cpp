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
   
    string s;
    cin>>s;
    vector<string> token = SplitbyRegex(s,"\\d+");
    sort(token.begin(),token.end());
    FOR(i,0,token.size()-1){
        cout<<token[i]<<"+";
    }
    cout<<token[token.size()-1]<<endl;
    
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
