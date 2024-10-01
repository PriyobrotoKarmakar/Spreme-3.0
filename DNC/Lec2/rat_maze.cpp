// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool isSafe(vector<vector<int>> &m,int n,int srcx,int srcy,vector<vector<bool>> &visited){

        
        

        if(srcx<0 || srcy<0 || srcx>=n || srcy>=n){
            return false;
        }
        if(visited[srcx][srcy]==true){
            return false;
        }
        if(m[srcx][srcy]==0){
            return false;
        } 
        //block hua toh return false
        
        return true;
    
    
    }


    void solve(vector<vector<int>> &m,int n,int srcx,int srcy,int destx,int desty,vector<vector<bool>> &visited,string output,vector<string>&ans){
        if(srcx == destx && srcy==desty){
            ans.push_back(output);
            return;
        }


        //UP
        int newx = srcx-1;
        int newy = srcy;
        if(isSafe(m,n,newx,newy,visited)){
            visited[newx][newy] = true;
            solve(m,n,newx,newy,destx,desty,visited,output+'U',ans);
            visited[newx][newy] = false;
        }


        //left
        newx = srcx;
        newy = srcy-1;
        if(isSafe(m,n,newx,newy,visited)){
            visited[newx][newy] = true;
            solve(m,n,newx,newy,destx,desty,visited,output+'L',ans);
            visited[newx][newy] = false;
        }



        //DOWN
        int newx = srcx+1;
        int newy = srcy;
        if(isSafe(m,n,newx,newy,visited)){
            visited[newx][newy] = true;
            solve(m,n,newx,newy,destx,desty,visited,output+'D',ans);
            visited[newx][newy] = false;
        }



        //RIGHT
        int newx = srcx;
        int newy = srcy+1;
        if(isSafe(m,n,newx,newy,visited)){
            visited[newx][newy] = true;
            solve(m,n,newx,newy,destx,desty,visited,output+'R',ans);
            visited[newx][newy] = false;
        }



    
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // ek ans banalo
        vector<string> ans;
        //ek visited matrix banalo
        vector<vector<bool>> visited(n,vector<bool>(n,false));
        visited[0][0] = true;
        //temporary ans store ke liye temp diye banalo
        string output = "";
        //rat ka index store karlo
        int srcx = 0;
        int srcy = 0;
        
        //destination ka index store karlo
        int destx = n-1;
        int desty = n-1;
        //agar pahla eliment block hua toh return
        if(m[0][0]==0){
            return ans;
        }




        //function call karlo
        solve(m,n,srcx,srcy,destx,desty,visited,output,ans);
    }
};

    


//{ Driver Code Starts.


// } Driver Code Ends