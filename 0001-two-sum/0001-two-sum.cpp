class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
            vector<int> sorted(nums);
            sort(sorted.begin(),sorted.end());
            int flag=0;

            int left=0;
            int right=sorted.size()-1;

            while(left<=right){
                int sum = sorted[left]+sorted[right];
                if(sum==target){
                    //  int index1 = find(nums.begin(), nums.end(), sorted[left]) - nums.begin();
                    // int index2 = find(nums.begin(), nums.end(), sorted[right]) - nums.begin();
                    cout<<left<<right;
                    flag=1;
                    break;

                    // if (index1 != index2) {
                    //    return{index1,index2};
                    //  }
                }
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }
            if(flag==1){
                int index1 = find(nums.begin(), nums.end(), sorted[left]) - nums.begin();

                int index2 = find(nums.begin(), nums.end(), sorted[right]) - nums.begin();

                cout<<index1<<":"<<index2;
                if (index1 != index2) {
                       return{index1,index2};
                     }
                     else{
                         int index2 = find(nums.begin()+index1+1, nums.end(), sorted[right]) - nums.begin();
                          return{index1,index2};

                     }
            }
            
             
              return {};
    }
};
