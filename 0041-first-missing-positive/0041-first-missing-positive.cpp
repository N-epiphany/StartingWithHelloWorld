class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
       int left =0;
       int right =nums.size()-1;
       int small=1;

    //    for(auto i : nums){//this will sort all negatives to right 
    //        if(nums[left]<0 & nums[right]>0){
    //            swap(nums[left],nums[right]);          
    //            left++;
    //            right--;
    //        }
    //    }
       sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        for(int i=0;i<nums.size();i++){
              if(nums[i]==small){   
                  cout<<"small"<<small<<endl;              
                   small++;
               }
        }
        cout<<"final small:"<<small;
       return small;
    }
};