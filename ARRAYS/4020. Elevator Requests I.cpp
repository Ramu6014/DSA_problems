//problem link: https://leetcode.com/problems/elevator-requests-i/
//timeComplexity: o(n)
//spaceComplexity: o(1)

class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int cnt=0;
        int stPos=0;
        for(int i=0;i<requests.size();i++){
            if(stPos==requests[i]){
                continue;
            }
            int val=abs(requests[i]-stPos);
            cnt+=val;
            stPos=requests[i];
        }
        return cnt;
    }
};