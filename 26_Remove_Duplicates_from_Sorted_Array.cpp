class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,len = nums.size();
        int j=1;
        if(len == 0) return 0;
        for(i=0; i<len; i++)
        {
            while(j < len && nums[j] == nums[i])
            {
                j++;
            }
            if(j<len){
                nums[i+1] = nums[j];
            }
            else
            {
                break;
            }
        }
        
        return i+1;
    }
};
