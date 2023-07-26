//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
        // upper part
        for(int i =0 ; i<n;i++){
            // space
            for(int j=n-i-1 ;j>0 ;j--){
                cout<<" ";
            }
            // star
            for(int j=i+1;j>0 ;j--){
                cout<<"* ";
            }
    
         cout<<endl;   
        }
        // lower part
         // upper part
        for(int i =0;i<n;i++){
            
            for(int j=0;j<i ;j++){
                cout<<" ";
            }
            for(int j=(n-i);j>0 ;j--){
                cout<<"* ";
            }
            
         cout<<endl;   
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends