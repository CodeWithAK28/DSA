class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<vector<int>>adj = rooms;
        int n = rooms.size();
        int src=0;
        vector<int>vis(n,0);
        queue<int>q;
        vis[src]=1;
        q.push(src);
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(auto it : adj[node])
            {
                if(!vis[it])
                {
                    vis[it]=1;
                    q.push(it);
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            if(!vis[i])return false; 
        }
        return true;

    }
};