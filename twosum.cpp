class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> nums1;
        for(int i=0;i<nums.size();i++){
            nums1.push_back({nums[i],i});
        }
        sort(nums1.begin(),nums1.end());
        vector<int> res(2);
        int i=0,j=nums1.size()-1;
        while(i<j){
            if(nums1[i].first +nums1[j].first == target)
            {
                res[0] = nums1[i].second;
                res[1] = nums1[j].second;
                return res;
            }
            else if(nums1[i].first + nums1[j].first < target){
                i++;
            }
            else
            j--;
        }
        return res;
    }
};
