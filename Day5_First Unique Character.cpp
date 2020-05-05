/*

    ##############################
    ## Author: AAYUESH BARUI #####
    ## College: LNMIIT ###########
    ##############################
*/

class Solution {
public:
    int firstUniqChar(string s) {
        int fr[26]={0};
        for(int i=0;i<s.size();i++)
        {
            fr[(s[i]-'a')]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(fr[(s[i]-'a')]==1)
            {
                return i;
            }
        }
        return -1;
    }
};