class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice = 0;
        int bob = 0;
        int count =0;
        int n=colors.size();
        
        // thene A and 3 B ka set nikal lo jo jada wo jeeta
        
        for(int i=0;i<n;i++)
        {
            if(colors[i] == 'A')
                count++;
            else
            {
                if(count>=3)
                    alice += count-2;
                count = 0;
            }
        }
        if(count>=3)
        alice += count-2;
                
        count = 0;
        
        for(int i=0;i<n;i++)
        {
            if(colors[i] == 'B')
                count++;
            else
            {
                if(count>=3)
                    bob += count-2;
                count = 0;
            }
        }
        if(count>=3)
        bob += count-2;
        
        if(alice>bob)
            return true;
        return false;
    }
};