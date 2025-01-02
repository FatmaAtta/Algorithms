#include <bits/stdc++.h>
#include <chrono>
using namespace std;

bool can_sum_rec(int target, vector<int>nums){
    if(target == 0){
        return true;
    }
    if(target<0){
        return false;
    }
    for(int i = 0;i<nums.size();++i){
        if(can_sum_rec(target-nums[i], nums)){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> num = {5, 3, 4, 7};
    cout<<can_sum_rec(2, num);
    return 0;
}