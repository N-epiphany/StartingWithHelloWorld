class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]<val)
            continue;
            else if (nums[i]>val){
                break;
            }
            else{
                nums[i]=-1;
            }
        }
        vector<int> temp;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==-1) continue;
            else {
                temp.push_back(nums[i]);
                j++;
            }
        }
        nums=temp;
        
        return temp.size();
        
    }
};