//problem link: https://leetcode.com/problems/number-of-elapsed-seconds-between-two-times/
//timeComplexity: O(1)
//spaceComplexity: O(1)

class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int stHr=stoi(startTime.substr(0,2));
        int stMin=stoi(startTime.substr(3,2));
        int stSec=stoi(startTime.substr(6,2));
        int endHr=stoi(endTime.substr(0,2));
        int endMin=stoi(endTime.substr(3,2));
        int endSec=stoi(endTime.substr(6,2));
        return (endHr*3600+endMin*60+endSec)-(stHr*3600+stMin*60+stSec);
    }
};