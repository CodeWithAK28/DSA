class Solution {
public:

    vector<int>parent;
        vector<int>rank;
        int find(int x)
        {
            if(x == parent[x])return x;
            return parent[x] = find(parent[x]);
        }
        void Union(int x, int y)
        {
            int x_parent = find(x);
            int y_parent = find(y);
             if(x_parent == y_parent) return;

            if(rank[x_parent]>rank[y_parent])
            {
                parent[y_parent] = x_parent;
            }
            else if(rank[x_parent]<rank[y_parent])
            {
                parent[x_parent] = y_parent;
            }
            else
            {
                parent[x_parent] = y_parent;
                rank[y_parent]++;
            }

        }

    vector<bool> areConnected(int n, int threshold, vector<vector<int>>& queries) {
        
        parent.resize(n+1);
        rank.assign(n+1,0);

        for(int i=0;i<=n;i++)
        {
            parent[i] = i;
        }
        
        int th = threshold;
       for(int d=th+1;d<=n;d++)
            {
                for(int mul=2*d ; mul<=n ; mul += d)
                {
                    Union(d, mul);
                }
            }
        vector<bool>ans;
        
        for(auto &q : queries)
        {
            int u = q[0];
            int v = q[1];

            


            if(find(u)==find(v))
            {
                ans.push_back(true);
            }
            else 
            {
                
            ans.push_back(false);
            }
            
        }
    return ans;

    }
};