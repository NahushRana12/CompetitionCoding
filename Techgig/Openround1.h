


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
string V;
int Solve(string B)
{
   int Blen = B.length(), Vlen = V.length();
   int i = 0,j = 0;
   while(i < Blen || j < Vlen){
       if(B[i] == V[i]){
           i++;j++;
       }
       else{
           j++;
       }
       if( i == Blen - 1 ){
           cout<<"Positive\n";
           return 0;
       }
   }
   cout<<"Negative\n";
   return 0;
    
}
int main()
{
    cin>>V;
    int N;
    cin>>N;
    string B;
    FOR(i,0,N){
    cin>>B;
    Solve(B);
    }
   /* int T;
    cin>>T;
    FOR(i,0,T){
      cout<< Solve()<<endl;
    }*/
    return 0;
}
