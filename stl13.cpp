#include<bits/stdc++.h>
using namespace std;
void PrintVec(vector<int>v){
cout<<"size:"<<v.size()<<endl;
for(int i=0;i<v.size();++i){
cout<<v[i]<<" ";
}
cout<<endl;
}
int main(){
    //vector<int>v(10);
    vector<int>v(10,3);
    v.push_back(7);
    PrintVec(v);
    }
