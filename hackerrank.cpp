#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int T;
    cin>>T;
    string S;
    for (int i=0;i<T;i++){
        cin>>S;
        for(int j=0;j<S.size();j++){
           if(j%2==0)
             cout<<S[j];
           }
          cout<<" ";
        for(int j=0;j<S.size();j++){
             if(j%2!=0)
               cout<<S[j];
             }
        cout<<endl;
      }
      /*int x;
    cin >> x;
    for(int i = 0; i < x; i++){
        string s;
        string s1, s2;
        cin >> s;
        for(int j=0; j < s.size(); j++){
            if(j%2==0){
                s1 += s[j];
            }else{
                s2+= s[j];
            }
        }
        cout << s1 << " " << s2 << endl;
    }*/
    return 0;
}
