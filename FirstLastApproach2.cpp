class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {


        #include <vector>

class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) 
        {
            int mid = start + (end - start) / 2;
            
            if (nums[mid] >= target) 
            {
                first = mid;
                
                end = mid - 1;  // Adjust 'end' to search the left half for the first occurrence.
            } 
            else 
            {
                start = mid + 1;
            }
        }

        start = 0;
        end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (nums[mid] <= target) {
                last = mid;
                start = mid + 1;  // Adjust 'start' to search the right half for the last occurrence.
            } else {
                end = mid - 1;
            }
        }

            return vector<int>{first, last};
       
    }
};



    }
   

};
