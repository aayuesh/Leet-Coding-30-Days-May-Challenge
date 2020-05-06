/*

    ##############################
    ## Author: AAYUESH BARUI #####
    ## College: LNMIIT ###########
    ##############################
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int maj=(nums.size()+1)/2,i;
        for(i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]]==maj)
            {
                return nums[i];
            }
        }
        return 0;
        
    }
};