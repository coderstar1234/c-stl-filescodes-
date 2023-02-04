#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>&v){
cout << "size: " << v.size() <<endl;
for(int i =0;i<v.size();++i){
  cout << v[i] <<  " ";
  }
  cout << endl;
 } 
  int main(){
  int N;
  cin >> N;
    vector<vector<int>> v;             // vector<int> v[N];
  for(int i=0;i<N;++i){
  int n;
  cin >> n;
  vector<int> temp; // temporay vector
  for(int j = 0;j < n;++j){
  int x;
  cin >> x;
  //v[i]
  temp.push_back(x);//one vector 
  }
  v.push_back(temp);
  }
  for(int i = 0; i< v.size(); ++i){
  printVec(v[i]);
  }
  cout << v[0][1];//indexing [0][0] 
  }
  

