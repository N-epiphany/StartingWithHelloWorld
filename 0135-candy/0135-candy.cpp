class Solution {
public:
    int candy(vector<int>& ratings) {
//initialise candies vector with 1 because Each child must have at least one candy.
//iterate from left to right and thn right to left with two pointers checking on adjacent ratings

     int n = ratings.size();
     vector<int> candies(n, 1); // Initialize all children with 1 candy

    // Traverse from left to right 
    for (int i = 1; i < n; i++) {
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
        }
    }

    // Traverse from right to left 
    for (int i = n - 2; i >= 0; i--) {
        if (ratings[i] > ratings[i + 1] && candies[i] <= candies[i + 1]) {
            // adding extra condition to make sure we stick to minimum no of candies req, no repeatition
            candies[i] = candies[i + 1] + 1;
        }
    }

    // Calculate the total number of candies needed
     int totalCandies = 0;
for (int i = 0; i < candies.size(); i++) {
    totalCandies += candies[i];
}
   

    return totalCandies;
}
};