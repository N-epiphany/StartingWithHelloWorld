class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
            int n = gas.size();
/* Approach: greedy algo inspo
    iterate through the gas stations in a loop and keep track of the current tank's level.
    If at any point the tank goes negative, reset the starting point to the next station.
    If, at the end of the loop, the tank is still positive, it means we can complete the circuit and return to the starting point. 
    Otherwise, return -1.*/
    int total_gas = 0;

    int current_gas = 0;

    int start_station = 0;

    for (int i = 0; i < n; i++) {

        total_gas += gas[i] - cost[i];

        current_gas += gas[i] - cost[i];

        if (current_gas < 0) {

            current_gas = 0;

            start_station = i + 1;

        }

    }

    return (total_gas >= 0) ? start_station : -1;
    }
};