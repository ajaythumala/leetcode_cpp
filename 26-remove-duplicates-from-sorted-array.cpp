class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 0, next_unique = 1;
        int size = nums.size();
        while (unique < size && next_unique < size)
        {
            if (nums[unique] != nums[next_unique])
            {
                unique ++;
                nums[unique] = nums[next_unique];
                next_unique ++;
            }
            else
                next_unique ++;
        }
        return unique + 1;
    }
};
