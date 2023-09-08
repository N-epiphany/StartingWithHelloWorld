class Solution {
  public: vector < int > twoSum(vector < int > & nums, int target) {

// method 1
// //we are creating an vector to store values
// vector<int> result;
// //iterations
// for(int i=0;i<nums.size();i++){
// int get = target - nums[i]; // the value we need to find
// // cout<<"\n \n THIS IS ITERATION"<<i<<endl;


// // cout<<"target : "<<target<<" : ";
// // cout<<"get : "<<get<<endl;


// for(int j=i+1;j<nums.size();j++){


// // cout<<"Inside sec loop get:"<<get;
// // cout<<" nums[j]:"<<j <<"value"<<nums[j]<<endl;
// if(nums[j]==get){
// // cout<<"we are pushing back"<<i<<":"<<j<<endl;
// result.push_back(i);
// result.push_back(j);
// }
// }
// }
//above is brute force
//Method 2
//trying to solve with a single loop
// vector<int> result;
// int n=nums.size();


// for(int i=0;i<n;i++){
// int pair = target -nums[i];
// auto it = find(nums.begin()+i+1,nums.end(),pair);
// cout<<target<<"="<<nums[i]<<"+"<<pair<<endl;
// cout<<it-nums.begin()<<endl;
// if(it!=nums.end()){
// cout<<"we are pushing"<<endl;
// cout<<i<<":"<<it-nums.begin();
// result.push_back(it-nums.begin());
// result.push_back(i);
// return result;
// }
// }


//above also has time complexity of n^2 because complexity of find() is n


// Method 3 time complexity O(nlogn)
    vector < int > sorted(nums);
    sort(sorted.begin(), sorted.end());
    int flag = 0;

    int left = 0;
    int right = sorted.size() - 1;

    while (left <= right) {
      int sum = sorted[left] + sorted[right];
      if (sum == target) {      
        flag = 1;
        break;
      } else if (sum < target) {
        left++;
      } else {
        right--;
      }
    }

    if (flag == 1) {
      int index1 = find(nums.begin(), nums.end(), sorted[left]) - nums.begin();

      int index2 = find(nums.begin(), nums.end(), sorted[right]) - nums.begin();

      cout << index1 << ":" << index2;
      if (index1 != index2) {
        return {
          index1,
          index2
        };
      } else {
        int index2 = find(nums.begin() + index1 + 1, nums.end(), sorted[right]) - nums.begin();
        return {
          index1,
          index2
        };

      }
    }

    return {};
  }
};