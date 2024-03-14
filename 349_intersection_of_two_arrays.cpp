class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       std:: unordered_set<int> set1(nums1.begin(),nums1.end());
        std:: unordered_set<int> set2(nums2.begin(),nums2.end());

      std::  vector<int> result;
        for(auto &nums:set1){
            if(set2.find(nums)!=set2.end())
            {
                result.push_back(nums);
            }
        }
        return result;
    }
};
