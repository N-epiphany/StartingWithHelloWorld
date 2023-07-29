class Solution {
public:


     

    vector<int> rearrangeArray(vector<int>& nums) {
//  =========== correct code but TLE========
//  int n = nums.size();

//     for (int i = 0; i < n; i++) {
//         if (i % 2 == 0) {
//             if (nums[i] <= 0) {
                // Find the next positive number and bring it to the current index
        //         for (int j = i + 1; j < n; j++) {
        //             if (nums[j] > 0) {
        //                 int temp = nums[j];
        //                 for (int k = j; k > i; k--) {
        //                     nums[k] = nums[k - 1];
        //                 }
        //                 nums[i] = temp;
        //                 break;
        //             }
        //         }
        //     }
        // } else {
        //     if (nums[i] >= 0) {
                // Find the next negative number and bring it to the current index
    //             for (int j = i + 1; j < n; j++) {
    //                 if (nums[j] < 0) {
    //                     int temp = nums[j];
    //                     for (int k = j; k > i; k--) {
    //                         nums[k] = nums[k - 1];
    //                     }
    //                     nums[i] = temp;
    //                     break;
    //                 }
    //             }
    //         }
    //     }
    // }
  
    //  return nums;
     //========END OF correct solution but TLE ===========
int n=nums.size();
        int pos=0;int neg=1;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]<0){
             ans[neg]=nums[i];
             neg+=2;
            }else{
             ans[pos]=nums[i];
             pos+=2;
            }
        }
        return ans;
    }
    
};