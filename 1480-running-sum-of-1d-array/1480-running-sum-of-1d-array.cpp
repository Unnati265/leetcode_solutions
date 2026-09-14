class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int count = 0;
        int n= nums.size();
        vector<int> temp(n);

        temp[0] = nums[0];

        for (int i = 1; i < n; i++) {
            temp[i] = temp[i - 1] + nums[i];
        }

        return temp;
    }
};