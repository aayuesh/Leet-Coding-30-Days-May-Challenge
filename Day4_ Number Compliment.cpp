/*

    ##############################
    ## Author: AAYUESH BARUI #####
    ## College: LNMIIT ###########
    ##############################
*/
class Solution {
public:
    int findComplement(int num) {
        int n=log2(num)+1;
        int m=pow(2,n)-1;
        int ans=num^m;
        return ans;
    }
};