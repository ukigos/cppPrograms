#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,i,j;
    cin >> n;
    for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
       if(j>=n+1-i && j<=n){
        cout<<"#";
       }
       else
       cout<<" ";
      }
      cout<<endl;
    }
    return 0;

}
