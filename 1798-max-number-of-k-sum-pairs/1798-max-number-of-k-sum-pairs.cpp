class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // Approach : keep count of each number in hashmap
                     // iterate to see if number & (k-number) found decrement its count and increment operation if not then increment the count of number

        unordered_map<int, int> numCount;
         int operations = 0;

    
    for (int num : nums) {
        int complement = k - num;

        if (numCount[complement] > 0) {
             operations++;
             numCount[complement]--;
        } else {
            
            numCount[num]++;
        }
    }

      return operations;
    }
};