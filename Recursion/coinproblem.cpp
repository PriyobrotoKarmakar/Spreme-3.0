#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int CoinChange(vector<int>coins,int amount){
    //if amount  is 0 then retuturn 0
    if(amount<=0){
        return 0;
    }
    //create a mincoint set to INT_MAX
    int mincoin=INT_MAX;

    //iterate over the coins
    for(int coin:coins){
        //if the coin is less than or equal to the amount then call the function recursively
        if(coin<=amount){
            int RecurseAns = CoinChange(coins,amount-coin);
            //if the RecurseAns is not equal to INT_MAX then update the mincoin
            if(RecurseAns!=INT_MAX){
                int CoinUsed = RecurseAns+1;
                mincoin = min(mincoin,CoinUsed);
            }
        }
    }
    //if the mincoin is not equal to INT_MAX then return the mincoin
    return mincoin;
}
int main(){
    int amount=10;
    vector<int>coins = {4,5};
    int ans =  CoinChange(coins,amount);
    if(ans==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}
