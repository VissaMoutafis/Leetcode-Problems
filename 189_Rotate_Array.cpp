class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> temp{};
        std::vector<int>::iterator i = nums.end();
        k=k%size;
        if(k==0) return;
        temp.insert(temp.begin(), i - k, nums.end());
        temp.insert(temp.begin()+k,nums.begin(), nums.end()-k);
        
        nums.clear();
        nums = temp;
    }
};
