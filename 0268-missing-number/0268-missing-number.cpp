class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size()+1;
        //since its ranging from 0 to n 
        int targetsum= (n*(n-1))/2;
        cout<<targetsum;

        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=nums[i];
        }

        if(targetsum==sum) return 0;
        return (targetsum-sum);        
    }
};