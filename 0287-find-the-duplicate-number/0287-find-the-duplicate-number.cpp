class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //  for(int i=0;i<nums.size();i++){
        //    cout<<nums[i];
        // // }
        // for(int i=0;i<nums.size();i++){
        //     // cout<<nums[i]<<endl;
        //     if(nums[nums[i]-1]<0) return nums[i];
            
        //     nums[nums[i]-1]=nums[nums[i]-1]*(-1);
        // }
        // // for(int i=0;i<nums.size();i++){
        // //    cout<<nums[i];
        // // }


        for(int i=0;i<nums.size();i++){
            int curr = abs(nums[i]);
            if(nums[curr]<0) return curr;

            nums[curr]*=-1;
        }
       return -1; 
    }
};