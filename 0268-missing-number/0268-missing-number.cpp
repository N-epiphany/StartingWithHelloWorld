class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //since its ranging from 0 to n 
        int n= nums.size()+1;
        // cout<<n<<";";
        int targetsum= (n*(n-1))/2;
        cout<<targetsum;

        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=nums[i];

        }
        cout<<sum;
        if(targetsum==sum) return 0;

        return (targetsum-sum);
        
    }
};