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
    int N;cin>>N;vector<int > permu;
   string s[N];int B[N],C[N],D[N],maxi = -1,POS;
   FOR(i,0,N){cin>>s[i]>>B[i]>>C[i];
        D[i] = B[i] + C[i];
        if(D[i] > maxi){
                POS = i;
                maxi = D[i];            
        }
   }
   int l = s[i].length();
   
   for(int i = 0;i < l<< l;i++){
      
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
