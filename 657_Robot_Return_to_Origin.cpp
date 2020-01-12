class Solution {
public:
    bool judgeCircle(string moves) {
        int positionX=0,positionY=0;
        for(int i=0; i<moves.length(); i++)
        {
            switch(moves[i])
            {
                case 'U': positionY ++;
                break;
                case 'D': positionY --;
                break;
                case 'L': positionX ++;
                break;
                case 'R': positionX --;
            }
        }
        return (positionX == 0 && positionY==0);
    }
};
