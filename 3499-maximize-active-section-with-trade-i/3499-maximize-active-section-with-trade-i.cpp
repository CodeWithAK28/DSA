class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        int cnt1 = count(s.begin(), s.end(), '1');

        vector<int>zb;
        int i=0;
        while(i<n)
        {
            int start = i;

            while(i<n && s[i]==s[start])
            {
                i++;
            }
            if(s[start] == '0')
            {
                zb.push_back(i-start);
            }
        }
        int m = zb.size();
        if(m<2)
        {
            return cnt1;
        }
        int bestgain = 0;
        for(int i=0;i<m-1;i++)
        {
            bestgain = max(bestgain, zb[i] + zb[i+1]);
        }
        return cnt1 + bestgain;

    }
};