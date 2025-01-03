#include <bits/stdc++.h>
using namespace std;

int findVal(string s, vector<pair<string,int>>&v){
    for(const auto & p: v){
        if(p.first==s){
            return p.second;
        }
    }
    return -1;
}
// Function to find the length of the longest common subsequence in two strings.
int getLCSLength(string& s1, string& s2, vector<pair<string,int>> &v ={}) {
    string s1s2 = s1 + "," + s2;
    // your code here
    size_t pos = s2.find(s1[0]);
    if(s1.size() == 1){
        if(pos!=string::npos){
            v.push_back({s1s2,1});
            return 1;
        }
        else{
            v.push_back({s1s2,0});
            return 0;
        }
    }
    string sub1 = s1.substr(1);
    string sub2 = s2.substr(pos+1);
    string sub1s2 = sub1 + "," + s2;
    string sub1sub2 = sub1 + "," + sub2;
    if(pos!=string::npos){
        int sum1=-1,sum2=-1;

        if(findVal(sub1s2, v)!= -1){
            sum =
        }

        return max(getLCSLength(sub1, s2),getLCSLength(sub1, sub2) + 1);
    }
    else{
        return getLCSLength(sub1,s2);
    }
}

int main(){

    return 0;
}