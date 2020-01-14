class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        int count = 0;
        while(z){
            if(z%2){count++;}
            z /=2;
        }
        return count;
    }
};
