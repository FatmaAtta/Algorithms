#include <bits/stdc++.h>
using namespace std;

int getLCSLength(string& s1, string& s2) {
    // your code here
    size_t pos = s2.find(s1[0]);
    if(s1.size() == 1){
        if(pos!=string::npos){
            return 1;
        }
        else{
            return 0;
        }
    }
    string sub1 = s1.substr(1);
    string sub2 = s2.substr(pos+1);
    if(pos!=string::npos){
        return max(getLCSLength(sub1, s2),getLCSLength(sub1, sub2) + 1);
    }
    else{
        return getLCSLength(sub1,s2);
    }
}

int main(){
    string a = "FATMA";
    string b = "AMBER";
    cout<<getLCSLength(a,b);

    return 0;
}
