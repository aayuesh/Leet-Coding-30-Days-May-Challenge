/*

    ##############################
    ## Author: AAYUESH BARUI #####
    ## College: LNMIIT ###########
    ##############################
*/
#define F first
#define S second
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coo) {
        vector<pair<int,int>> vp;
        int i;
        for(i=0;i<coo.size();i++)
        {
            vp.push_back({coo[i][0],coo[i][1]});
        }
       // sort(vp.begin(),vp.end());
        int co=0;
        for(int i=1;i<vp.size();i++)
        {
            if(vp[i].F==vp[i-1].F)
                co++;
        }
        if(co!=0 && co!=vp.size()-1)
        {
            return false;
        }
        if(co==vp.size()-1)
        {
            return true;
        }
        set<double> s;
        for(int i=1;i<vp.size();i++)
        {
            double d=((double)vp[i].S-(double)vp[i-1].S)/((double)vp[i].F-(double)vp[i-1].F);
            s.insert(d);
        }
        if(s.size()==1)
            return true;
        return false;
    }
};