class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans=1;// as it at least it will be 1 point at the line
        for(int i=0;i<n;i++){
            map<double,int>mp;
            for(int j=0;j<n;j++){
                if(j==i)
                   continue;//     y2            y1             x2             x1     
                mp[atan2(points[j][1] - points[i][1], points[j][0] - points[i][0])]++;
            }
            for(auto [s,cnt]:mp){
                ans = max(ans,cnt+1);
            }
        }
        return ans;

    }
};
