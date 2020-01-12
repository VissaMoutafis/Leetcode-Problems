class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res=0;
        for(int i=0; i<nums.size(); ++i) //iterate through the array
        {
            int counter=0;
            while(nums[i]) //count how many digits the current number has
            {
                counter++;
                nums[i]/=10;
            }
            res += (counter%2 == 0); //add the result to the 'res' counter
        }
        return res;
    }
};
