class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int first , second;
         
        for(int first=0 , second =1;second<nums.size();first++,second++){
            //cout<<first<<":"<<second<<endl;
            if(nums[first]!=nums[second]) continue;
            else{
             nums[first]=-102;   
            }
            cout<<nums[first];
        }

        
        vector<int> temp;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==-102) continue;
            else {
                temp.push_back(nums[i]);
                j++;
            }
        }
        nums=temp;
        for(int i=0;i<nums.size();i++){
            cout<<temp[i];
        }
        return temp.size();
    }
};