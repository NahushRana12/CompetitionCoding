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

unsigned long long arr[64];

void Solve()
{
   
   vector<unsigned long long> collection;
   unsigned long long N;
   cin>>N;
   if(N == 1){cout<<"1 \n1\n";return;}
   bitset<64> s(N); 
   
   for(int i = 0;i < 64 ;i++){
       if(s[i]){
           collection.push_back(arr[i]);
       }
   }
   printf("%d\n",collection.size());
   for(auto x : collection){
       printf("%llu ", x);
   }
   printf("\n");
}
void power(){
    for(int i = 0;i< 64;i++){
        if(i == 0) arr[0] = 1;
        else
            arr[i] = arr[i-1] *3;
    }
}

int main()
{
    power();
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    //Solve();
   int T;
    cin>>T;
    FOR(i,0,T){
      Solve();
    }
    return 0;
}
