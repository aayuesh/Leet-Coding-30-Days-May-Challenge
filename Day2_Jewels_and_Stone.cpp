class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int i;
        map<char,int> mpp;
        for(i=0;i<J.size();i++)
            mpp[J[i]]=1;
        int ans=0;
        for(i=0;i<S.size();i++)
        {
            ans+=mpp[S[i]];
        }
        return ans;
            
    }
};