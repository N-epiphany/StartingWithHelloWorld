class Solution {
   public: int majorityElement(vector < int > & nums) {
      int n = nums.size();
      int majority = n / 2;
      sort(nums.begin(), nums.end());
      int num = nums[0];
      int count = 0;

    //   cout << "initial values are \n majority :" << majority << "\n num:" << num << "\n count:" << count;
      for (int i = 0; i < n; i++) {
        //  cout << "num" << num << ":";
        //  cout << "nums" << nums[i] << endl;
         if (nums[i] == num) {
            count++;
            // cout << "element found" << num;
         } else {
            num = nums[i];
            count = 1;
         }
         if (count > majority) {
            return num;
         }
      }
      return -1;

   }
};