class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          //we are creating an vector to store values
            vector<int> result;
            //iterations
              for(int i=0;i<nums.size();i++){
               
                  int get = target - nums[i];    // the value we need to find
                  // cout<<"\n \n THIS IS ITERATION"<<i<<endl;

                  // cout<<"target : "<<target<<" : ";
                  // cout<<"get : "<<get<<endl;

                  for(int j=i+1;j<nums.size();j++){

                      // cout<<"Inside sec loop get:"<<get;
                      // cout<<" nums[j]:"<<j <<"value"<<nums[j]<<endl;
                      if(nums[j]==get){
                        // cout<<"we are pushing back"<<i<<":"<<j<<endl;
                        result.push_back(i);
                        result.push_back(j);
                      }
                  }                
            }
            //above is brute force
            return result;
    }
};