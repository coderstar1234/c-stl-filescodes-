#include<bits/stdc++.h>
using namespace std;

/*
simple element ka iterator ki ha code
int main(){
    vector<int> v = {2,3,4,4,3};
    for(int i = 0;i < v.size(); ++i) {
    cout << v[i] << " " ;
    }
    cout << endl;
    vector<int> ::iterator it = v.begin();
    for(it = v.begin(); it != v.end(); ++it){
    cout << (*it) << endl;
    }
  }*/
  
  //isma code ma set ka iterator ki ja rha ha 
 int main(){
    vector<int> v = {2,3,4,4,3};
    for(int i = 0;i < v.size(); ++i) {
    cout << v[i] << " " ;
    }
    cout << endl;
    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it;
    for (it = v_p.begin();it != v_p.end(); ++it){
    //cout << (*it).first << " " << (*it).second << endl; are both same (*it).first <=> (it->first)
    cout << (it->first) << " " << (it->second) << endl;
     
    }
    }
    
  
    
