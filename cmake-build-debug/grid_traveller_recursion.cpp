#include <bits/stdc++.h>
using namespace std;

int grid_traveller(int x, int y){
    if(x==0 || y==0){
        return 0;
    }
    if(x==1 || y==1){
        return 1;
    }
    if(x>1&&y>1){
        return grid_traveller(x-1,y) + grid_traveller(x,y-1);
    }
}

int main(){
    cout<<grid_traveller(5,5);
    return 0;
}