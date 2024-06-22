// problem link
// https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/


class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        int count = 0;
        for(int i : nums){
            if(i%3 != 0){
                count++;
            }
        }

        return count;

    }
};
