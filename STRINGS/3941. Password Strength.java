//problem link: https://leetcode.com/problems/password-strength/
//timeComplexity: O(n)
//spaceComplexity: O(n)

class Solution {
    public int passwordStrength(String password) {
        int n=password.length();
        HashSet<Character>st=new HashSet<>();
        for(int i=0;i<n;i++){
            char ch=password.charAt(i);
            st.add(ch);
        }
        int cnt=0;
        for(char it: st){
            if(Character.isLetter(it)){
                if(Character.isLowerCase(it)){
                    cnt+=1;
                }
                else{
                    cnt+=2;
                }
            }
            else if(Character.isDigit(it)){
                cnt+=3;
            }
            else{
                cnt+=5;
            }
        }
        return cnt;
    }
}