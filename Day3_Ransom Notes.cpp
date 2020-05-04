class Solution {
public:
    bool canConstruct(string s1, string s2) {
        map<char,int> mpp;
        bool ans=1;
        int i;
        for(i=0;i<s2.size();i++)
            mpp[s2[i]]++;
        for(i=0;i<s1.size();i++)
        {
            if(mpp[s1[i]]<=0)
                ans=0;
            mpp[s1[i]]--;
        }
        return ans;
    }
};