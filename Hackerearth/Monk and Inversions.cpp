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
int N;
int searchmartix(int i ,int j, vector<vector<int>>& matr){
        int temp = matr[i][j],count = 0;
        for(int k = i;k<N;k++){
           FOR(l,j,N){
               if(k == i && j == l)continue;
               if(temp > matr[k][l])count++;
           }     
        }
        return count;
}
int Solve()
{
    int count = 0;
    cin>>N;
    vector<vector<int>> matr(N,vector<int>(N));
    FOR(i,0,N)
        FOR(j,0,N){
            cin>>matr[i][j];
    }
    FOR(i,0,N)
        FOR(j,0,N){
            
                count += searchmartix(i,j,matr) ;
    }
    return count;
}
int main()
{
  //  Solve();
    int T;
    cin>>T;
    FOR(i,0,T){
      cout<< Solve()<<endl;
    }
    
}
