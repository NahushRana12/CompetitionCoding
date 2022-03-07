
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
   int N;int value = 0;
   cin>>N;
   vector<int> array(N);
   FOR(i,0,N){
     //  int temp;
       cin>>array[i];
     //  array[i] = temp;
     //  cout<<array[i];
   }
   FOR(i,0,N - 1){
       int temp = i;
       FOR(j,i,N){
          if(array[temp] > array[j]){
              temp = j;
          }
       }
      // cout<<temp<< i <<" ";
       // for(auto x : array)cout<<x;cout<<" ";
       reverse(array.begin() + i ,array.begin() + temp + 1 );
      // for(auto x : array)cout<<x;
       value = value + temp - i + 1;
      // cout<<"\t"<<value<<"\n";
   }
    return value;
}
int main()
{
    //Solve();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin>>T;
    FOR(i,0,T){
      cout<<"CASE "<< i+1 <<"#: "<< Solve()<<endl;
    }
    
}
