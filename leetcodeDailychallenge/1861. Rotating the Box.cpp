//problem link: https://leetcode.com/problems/rotating-the-box/?envType=daily-question&envId=2026-05-06
//timeComplexity:  O(n*m^2)
//spaceComplexity: O(n*m)

class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n=boxGrid.size();
        int m=boxGrid[0].size();
        vector<vector<char>>res(m,vector<char>(n,'.'));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[j][i]=boxGrid[i][j];
            }
        }
        for(int i=0;i<m;i++){
            reverse(res[i].begin(),res[i].end());
        }
        for(int i=0;i<n;i++){
            int indx=m-1;
            while(indx>0){
                if(res[indx][i]=='.'){
                    int prev=indx-1;
                    while(prev>=0 && res[prev][i]!='*'){
                        if(res[prev][i]=='#'){
                            swap(res[indx][i],res[prev][i]);
                            break;
                        }
                        prev--;
                    }
                }
                indx--;
            }
        }
        return res;
    }
};