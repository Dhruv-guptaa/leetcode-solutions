class Solution {
public:
    bool isPrefixString(string s, vector<string>& words)
    {
        int i;
        string check="";
        for(i=0;i<words.size();i++)
        {
            check=check+words[i];
            if(check == s)
                return true;
        }
        return false;
    }
};