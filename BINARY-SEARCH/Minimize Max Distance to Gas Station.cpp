//problem link: https://www.geeksforgeeks.org/problems/minimize-max-distance-to-gas-station/1
//timeComplexity: O((n+k)*log(n))
//spaceComplexity: O(n)


class Solution {
  public:
    double minMaxDist(vector<int> &stations, int k) {
        // Code here
        int n=stations.size();
        if(n==1){
            return 0.00;
        }
        priority_queue<pair<double,int>>pq;
        for(int i=0;i<n-1;i++){
            pq.push({stations[i+1]-stations[i],i});
        }
        int howMany[n-1];
        for(int i=0;i<n-1;i++){
            howMany[i]=0;
        }
        for(int gas=1;gas<=k;gas++){
            auto it=pq.top();
            pq.pop();
            int secIndx=it.second;
            double inDiff=stations[secIndx+1]-stations[secIndx];
            howMany[secIndx]++;
            double secLen=inDiff/(double)(howMany[secIndx]+1);
            pq.push({secLen,secIndx});
        }
        return pq.top().first;
    }
};