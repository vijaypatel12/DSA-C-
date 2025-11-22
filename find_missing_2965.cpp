class Solution{
    public:
    vector<int> FindMissingAndRepeatedValues(vector<vector<int>>& grid){
        vector<int> ans;
        unordered_set<int> s;
        int n=grid.size();
        int a,b;
        
        int exSum=0,actualSum=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                actualSum+=grid[i][j];
                if(s.find(grid[i][j])!=s.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                    break;
                }
                s.insert(grid[i][j]);
            }
        }
        exSum=(n*n)*(n*n+1)/2;
        b=exSum+a-actualSum;
        ans.push_back(b);
        return ans;
    }
};

