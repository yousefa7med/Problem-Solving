class Solution {
public:
    int getSum(vector<int>& nums, int divisor) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {

            sum += ceil(((double)nums[i] / divisor));
        }
        return sum;
    }

    int max(vector<int>& nums) {
        int max = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
        }
        return max;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1;
        int end = max(nums);
        int mid = 0;
        int divisor = end;
        while (start <= end) {
            mid = (start + end) / 2;
            int sum = getSum(nums, mid);
            if (sum <= threshold) {
                end = mid - 1;
                divisor = mid;
            } else {
                start = mid + 1;
            }
        }
        return divisor;
    }
};