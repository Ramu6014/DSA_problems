//problem link: https://leetcode.com/contest/biweekly-contest-182/problems/score-validator/
//timeComplexity: O(n)
//spaceComplexity: O(1)

class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int n=events.size();
        int score=0,counter=0;
        for(int i=0;i<n;i++){
            if(counter==10){
                break;
            }
            if(events[i]=="W"){
                counter++;
            }
            else if(events[i]=="WD" || events[i]=="NB"){
                score++;
            }
            else{
                score+=stoi(events[i]);
            }
        }
        return {score,counter};
    }
};©leetcode