class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
    //    int left =0;
    //    int right =nums.size()-1;
    //    int small=0;

    //    for(auto i : nums){//this will sort all negatives to right 
    //        if(nums[left]<0 & nums[right]>0){
    //            swap(nums[left],nums[right]);          
    //            left++;
    //            right--;
    //        }
    //    }
    //    sort(nums.begin(),nums.end());
    //     for(int i=0;i<nums.size();i++){
    //         cout<<nums[i]<<" ";
    //     }
    //     for(int i=0;i<nums.size();i++){
    //           if(nums[i]==small){   
    //               cout<<"small"<<small<<endl;              
    //                small++;
    //            }
    //     }
    //     cout<<"final small:"<<small;
    //    return small;

       // above o(nlogn) its a brute force way but question wants O(n)

// step 1 eleminating the -ve integers 
    //     int small= nums[0];
    //     int n= nums.size();
    //    for(int i=0;i<nums.size();i++){
    //        if(nums[i]<0 || nums[i]>n) nums[i]=0; 
    //    }

    //     for(int i=0;i<nums.size();i++){
    //         cout<<nums[i]<<" ";
    //     }

    //     for(int i=0;i<nums.size();i++){
    //           if(nums[nums[i]-1]!=nums[i]&& nums[i]<=n){
    //               int temp = nums[nums[i]-1];
    //               nums[nums[i]-1]=nums[i];
    //               nums[i]=temp;
    //           }

    //     }

    //     for(int i=0;i<nums.size();i++){
    //         cout<<nums[i]<<" ";
    //     }
    //     // int small;
    //     return small;
    // int n=nums.size();

    // step 1 eleminating the -ve integers 
        int n= nums.size();
       for(int i=0;i<nums.size();i++){
           if(nums[i]<0 || nums[i]>n) nums[i]=0; 
       }

    for(int i = 0; i < n; ++ i)//putting the numbers in there respective index
            while(nums[i]>0&& nums[i] <= n && nums[nums[i] - 1] != nums[i])
                swap(nums[i], nums[nums[i] - 1]);
        
    for(int i = 0; i < n; ++ i)
            if(nums[i] != i + 1)
                return i + 1;
        
        return n + 1;
    }
};