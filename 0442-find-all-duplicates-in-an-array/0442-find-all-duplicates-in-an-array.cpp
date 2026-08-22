class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }

        vector<int> result(n / 2);
        int k = 0;

        for (int i = 1; i <= n; i++) {
            if (freq[i] == 2) {
                result[k] = i;
                k++;
            }
        }

        result.resize(k);
        return result;
    }
};
