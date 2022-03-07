
#include <bits/stdc++.h> 
using namespace std;

#define FOR(i, a, n) for (register int i = (a); i < (int)(n); ++i)
    
int X,Y,gcost =0;
int mini = INT_MAX;
vector<int> pos;
int calcost(string x){
    int cost = gcost;
    for(int i = 0 ; i < pos.size(); i++){
        if(x[pos[i]] == 'C'){
            if(x[pos[i] - 1 ] == 'J'){
                cost += Y;
            }
            if(x[pos[i ] + 1] == 'J'){
                cost += X;
            }
        }
        else if(x[pos[i]] == 'J'){
            if(x[pos[i] - 1] == 'C'){
                cost += X;
            }
            if(x[pos[i] + 1] == 'C'){
                cost += Y;
            }
        }
    }
    return cost;
}
int Solve()
{
   mini= INT_MAX;
   gcost = 0;
   cin>>X>>Y;
   string array;
   scanf("%s",&array);
   int i = 0;
   pos.clear();
    for(auto x:array){
        if(array[i] == 'C' && array[i+1] == 'J'){
            gcost += X;
        }
        
        else if(array[i] == 'J' && array[i+1] == 'C'){
            gcost += Y;
        }
        if(x == '?'){
            pos.push_back(i);
        }
        i++;
    }
   // cout<<"gcost"<<gcost<<endl;
    int len = pos.size() ;
    for(int i  = 0; i <= (1 << len); i++){
        string temp = array;
        for(int posi = 0; posi < len ; posi++){
            
             if(i & (1 << posi)) {
                 array[pos[posi]] = 'C';
             }  
             else {
             array[pos[posi]] = 'J';
             }
         }   
         if(i != 0)
         mini = min(mini,calcost(temp));
    }
  
        
    return mini;
}
int main()
{
    //Solve();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin>>T;
    FOR(i,0,T){
      cout<<"CASE #"<< i+1 <<": "<< Solve()<<endl;
    }
    
}
