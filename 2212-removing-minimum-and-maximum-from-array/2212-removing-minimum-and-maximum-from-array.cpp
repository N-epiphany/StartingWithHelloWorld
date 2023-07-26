class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        // Find the positions of the minimum and maximum elements
    int min_val = *min_element(nums.begin(), nums.end());
    int max_val = *max_element(nums.begin(), nums.end());
    int min_pos = std::find(nums.begin(), nums.end(), min_val) - nums.begin();
    int max_pos = std::find(nums.begin(), nums.end(), max_val) - nums.begin();

    // Calculate the number of deletions required to remove the minimum element
    int min_del_front = min_pos+1;
    int min_del_back = nums.size() - min_pos ;
cout<<min_del_front<<min_del_back<<endl;

   

    // Calculate the number of deletions required to remove the maximum element
    int max_del_front = max_pos +1;
    int max_del_back = nums.size() - max_pos ;
cout<<max_del_front<<max_del_back<<endl;



     int maxpos=min(max_del_front, max_del_back);
int minpos=min(min_del_front, min_del_back);
cout<<minpos<<maxpos;
int res=0;
    // Return the minimum number of deletions
    int val1=max(max_del_front,min_del_front);
    int val2=max(max_del_back,min_del_back);
    int val3=minpos+maxpos;
     res=min(min(val1,val2),val3);


    return res;

    }
};