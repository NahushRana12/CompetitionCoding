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
   int N,maxi = -5;
   cin>>N;
   if(N == 1)return 0;
   vector<vector<int>> arr(N-1,vector<int> (2));
   int node[N] = {};set<int> connect[N];
   for(int i =0;i< N-1;i++){
      
       cin>>arr[i][0]>>arr[i][1];
       
     node[arr[i][1] - 1]= max(node[arr[i][0] -1 ] + 1,node[arr[i][1]- 1] + 1); 
     connect[arr[i][0] - 1].insert(arr[i][1] - 1);
     merge(connect[arr[i][0] - 1].begin(), connect[arr[i][0] - 1].end(), connect[arr[i][1] - 1].begin(), connect[arr[i][1] - 1].end(), inserter(connect[arr[i][0] - 1], connect[arr[i][0] - 1].end()));
 //    cout<<node[arr[i][1] -1];
     if(node[arr[i][1] - 1] > maxi)
         maxi = node[arr[i][0] - 1];
   }int i= 1;
   for(auto x : connect){
       cout<<i<<" ";
    for(auto y : x){
        cout<<y + 1<<" ";
    }
    cout<<endl;i++;
   }
   return maxi* 3;
   
}
int main()
{
    cout<<Solve()<<endl;
   /* int T;
    cin>>T;
    FOR(i,0,T){
      cout<< Solve()<<endl;
    }*/
    
}
