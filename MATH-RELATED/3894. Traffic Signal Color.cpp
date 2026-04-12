//problem link: https://leetcode.com/problems/traffic-signal-color/
//timeComplexity: O(1)
//spaceComplexity: O(1)

class Solution {
public:
    string trafficSignal(int timer) {
        if(timer==0){
            return "Green";
        }
        else if(timer==30){
            return "Orange";
        }
        else if(timer>30 && timer<=90){
            return "Red";
        }
        return "Invalid";
    }
};