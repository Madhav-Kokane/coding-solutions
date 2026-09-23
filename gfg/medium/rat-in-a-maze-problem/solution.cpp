class Solution {
  public:
    vector<string> result;
    
    void soln(int i,int j,int m,int n,vector<vector<int>>& maze,string str,vector<vector<int>>& visited){
        if(i==m-1 && j==n-1){
            result.push_back(str);
            return;
        }
        
        visited[i][j] = 1;
        if(j+1<n && maze[i][j+1] == 1 && visited[i][j+1]==0){
            str.push_back('R');
            soln(i,j+1,m,n,maze,str,visited);
            str.pop_back();
        }
        
        if(i+1<m && maze[i+1][j] == 1 && visited[i+1][j]==0){
            str.push_back('D');
            soln(i+1,j,m,n,maze,str,visited);
            str.pop_back();
        }
        
        if(i-1>=0 && maze[i-1][j] == 1 && visited[i-1][j ]==0){
            str.push_back('U');
            soln(i-1,j,m,n,maze,str,visited);
            str.pop_back();
        }
        
        if(j-1>=0 && maze[i][j-1]== 1 && visited[i][j-1]==0){
            str.push_back('L');
            soln(i,j-1,m,n,maze,str,visited);
            str.pop_back();
        }
        
        visited[i][j] = 0;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int m=maze.size();
        int n=maze[0].size();
        
        if(maze[0][0] == 0){
            return result;
        }
        string str="";
        vector<vector<int>> visited(m,vector<int>(n,0));
        soln(0,0,m,n,maze,str,visited);
        sort(result.begin(),result.end());
        return result;
        
    }
};