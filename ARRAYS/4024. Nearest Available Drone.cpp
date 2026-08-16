//problem link: https://leetcode.com/problems/nearest-available-drone/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int minDist=INT_MAX;
        int indx=-1;
        for(int i=0;i<drones.size();i++){
            int dist=abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]);
            if(dist<=drones[i][2]){
                if(dist<minDist){
                    indx=i;
                    minDist=dist;
                }
            }
        }
        return indx;
    }
};