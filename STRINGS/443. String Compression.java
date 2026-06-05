//problem link: https://leetcode.com/problems/string-compression/
//timeComplexity: O(n)
//spaceComplexity: o(n)

class Solution {
    public void pushDigit(int cnt,ArrayList<Character>ans){
        ArrayList<Character>temp=new ArrayList<>();
        while(cnt>0){
            char ch=(char)(cnt%10+'0');
            temp.add(ch);
            cnt/=10;
        }
        Collections.reverse(temp);
        for(int i=0;i<temp.size();i++){
            ans.add(temp.get(i));
        }
        return;
    }
    public int compress(char[] chars) {
        int n=chars.length;
        char ch=chars[0];
        int cnt=0;
        ArrayList<Character>ans=new ArrayList<>();
        for(int i=0;i<n;i++){
            if(chars[i]==ch){
                cnt++;
            }
            else{
                ans.add(ch);
                if(cnt>1){
                    pushDigit(cnt,ans);
                }
                ch=chars[i];
                cnt=1;
            }
        }
        ans.add(ch);
        if(cnt>1){
            pushDigit(cnt,ans);
        }
        int n1=ans.size();
        for(int i=0;i<n;i++){
            if(i<n1){
                chars[i]=ans.get(i);
            }
            else{
                break;
            }
        }
        return ans.size();
    }
}