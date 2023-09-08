class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //   //we are creating an vector to store values
        //     vector<int> result;
        //     //iterations
        //       for(int i=0;i<nums.size();i++){
               
        //           int get = target - nums[i];    // the value we need to find
        //           // cout<<"\n \n THIS IS ITERATION"<<i<<endl;

        //           // cout<<"target : "<<target<<" : ";
        //           // cout<<"get : "<<get<<endl;

        //           for(int j=i+1;j<nums.size();j++){

        //               // cout<<"Inside sec loop get:"<<get;
        //               // cout<<" nums[j]:"<<j <<"value"<<nums[j]<<endl;
        //               if(nums[j]==get){
        //                 // cout<<"we are pushing back"<<i<<":"<<j<<endl;
        //                 result.push_back(i);
        //                 result.push_back(j);
        //               }
        //           }                
        //     }
            //above is brute force

            //trying to solve with a single loop
            vector<int> result;

            //sort(nums.begin(),nums.end());
            int n=nums.size();

            for(int i=0;i<n;i++){
                int pair = target -nums[i];
                auto it = find(nums.begin()+i+1,nums.end(),pair);
                cout<<target<<"="<<nums[i]<<"+"<<pair<<endl;
                cout<<it-nums.begin()<<endl;
                if(it!=nums.end()){
                    cout<<"we are pushing"<<endl;
                    cout<<i<<":"<<it-nums.begin();
                    result.push_back(it-nums.begin());
                    result.push_back(i);
                    return result;
              }
            }
            return result;
    }
};
