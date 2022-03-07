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
  bool Compare(set<char> s, set<char> s2) 
{ 
    if(s.size() == s2.size()){
        string p,p1;

        for(auto x : s){
            p = p + x;
            
        }
        for(auto x : s2){
            p1 = p1 + x;
            
        }
        return p < p1;
    }
    else
    return s.size() > s2.size();
} 
string Solve()
{
   int N;cin>>N;
   vector<set<char>> Arr(N);
 
   FOR(i,0,N)   
   {
       string s;
       cin>>s;
       for(int j=  0;j < s.length();j++)
       {
           Arr[i].insert(s[j]);
       //    cout<<c;
       }
   }
   sort(Arr.begin(),Arr.end(),Compare);
   
   string s = "";
    for(auto x : Arr[0]){
            s = s + x;
            
        }
   return s;
}
int main()
{
    
   int T;
    cin>>T;
    FOR(i,1,T+1){
        string s = Solve();
      cout<<"CASE #" << i <<":"<< s<<endl;
    }
    
}
