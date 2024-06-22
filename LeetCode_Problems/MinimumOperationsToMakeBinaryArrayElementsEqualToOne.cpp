// problem link
// https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i/description/


class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int op = 0;

        for(int i = 0; i<= n-3;i++){
            if(nums[i] == 0){
                nums[i] = (1^nums[i]);
                nums[i+1] = (1^nums[i+1]);
                nums[i+2] = (1^nums[i+2]);
                op++;
            }
        }

        int count = 0;

        for(int i : nums){
            if(i == 1){
                count++;
            }
        }

        if(count == n){
            return op;
        }else{
            return -1;
        }

    }
};
