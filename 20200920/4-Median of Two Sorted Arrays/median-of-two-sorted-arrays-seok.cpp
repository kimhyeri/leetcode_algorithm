class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        if (nums1.size() == 0 && nums2.size() == 0) 
        {
            return 0.0;
        }
        
        vector<int> ans;
        double median = 0.0;
        
        ans = nums1;
        for (auto i : nums2)
        {
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        int n = ans.size();
        
        
        if (n % 2 != 0)
        {
            median = ans[n / 2];
        }
        else median = (ans[n / 2] + ans[n / 2 - 1]) / 2.0;

        return median;
    }
};

/*
Runtime: 76 ms, faster than 20.71% of C++ online submissions for Median of Two Sorted Arrays.
Memory Usage: 89.7 MB, less than 21.67% of C++ online submissions for Median of Two Sorted Arrays.
*/
