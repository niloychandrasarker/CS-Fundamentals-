
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> indices;
        int n = nums.size();

        // Create a copy of the nums array and sort it in non-decreasing order
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());

        // Iterate through the sorted array and find the target indices
        for (int i = 0; i < n; i++) {
            if (sortedNums[i] == target) {
                // If the element is equal to the target, find its index in the original array
                indices.push_back(i);
              
            }
        }

        return indices;
    }
};