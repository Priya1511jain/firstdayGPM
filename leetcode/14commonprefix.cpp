class Solution {
public:
    string longestCommonPrefix(vector<string>& words) {
        int n=words.size();
        if(n==0)
            return " ";                                               
        sort(words.begin(),words.end());
        string a = words[0];
        string b = words[n-1];
        string ans ="";
        
        for (int i=0 ; i<a.size() ; i++)
        {
            if(a[i]==b[i])
                
                ans+=a[i];
            
            else break;
            
        }
        return ans;
    }
};
