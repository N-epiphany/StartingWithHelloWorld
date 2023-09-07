class Solution {
public:

 
    void sortColors(vector<int>& nums) {
        // int min=INT_MAX;
       int min=INT_MIN;
       for(int i=0 ; i<nums.size(); i++){
           min=nums[i];
            for(int j=i ; j<nums.size();j++){
                if(nums[j]<nums[i]){
                    // cout<<"swapping"<<nums[i]<<":"<<nums[j];
                    swap(nums[i],nums[j]);                   
                }                      
            }
       }
    //    for(int i=0 ; i<nums.size();i++){
    //      cout<<nums[i];
    //  }
    }
};