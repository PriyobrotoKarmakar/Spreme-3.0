#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> transferWater(int j1,int j2,int c1,int c2){
    int newj1 = max(0, j1+j2-c2);
    int newj2 = min(c2, j1+j2);

    return {newj1,newj2};
}
vector<vector<int>> waterProblem(){
    int j1 = 0,j2 = 0,c1 = 4,c2 = 3;
    int goal = 2;
    vector<vector<int>> steps;
    while(1){
        if(j1==goal || j2==goal){
            break;
        }
        else if(j1==0){
            j1 = c1;
        }
        else if(j2==c2){
            j2 = 0;
        }else{
            vector<int> newJugs = transferWater(j1,j2,c1,c2);
            j1 = newJugs[0];
            j2 = newJugs[1];
        }
        steps.push_back({j1,j2});
    }
    return steps;
}
int main(){
    vector<vector<int>> steps = waterProblem();
    for(auto step:steps){
        cout<<step[0]<<"->"<<step[1]<<endl;
    }
    return 0;
}