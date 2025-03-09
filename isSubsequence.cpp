#include<string>
using namespace std;
bool isSubsequence(string s,string t){
int x=s.size();
int y=t.size();
int i=0;
int j=0;
while(i<x&&j<y){
    if(s[i]==t[j]){
        i++;
        j++;
    }else{
        j++;
    }
}
return i==x;
}