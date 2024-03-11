class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            int x = target - nums[i];
            int index = linearSearch(nums, x, i + 1);
            if (index != -1) {
                result.push_back(i);
                result.push_back(index);
                return result;
            }
        }

        return result;
    }

private:
    int linearSearch(const vector<int>& nums, int target, int start) {
        for (int i = start; i < nums.size(); ++i) {
            if (nums[i] == target) {
                return i;
            }
        }

        return -1;
    }
};

// Below Code I tried to use a binary search algorithm but did not work for every test case like when the value of the element is 0.
/*private:
    int binarySearch(const std::vector<int>& nums, int target, int start) {
        int left = start;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1;
    }
};*/
