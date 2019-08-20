class Solution {
public:
    string longestPalindrome(string s) {
        int sz = s.size();
        if(sz<2)
            return s;
        vector<vector<bool>> is_pal(sz,vector<bool>(sz,false));
        int right = 0, left = 0;
        for(int i = 0; i<sz; i++)
        {
            is_pal[i][i] = true;//一个字符是回文
            for(int j = i-1; j>=0; j--)
            {
                is_pal[i][j] = (s[i]==s[j]) &&(i-j==1 || is_pal[i-1][j+1]);
                if(is_pal[i][j] && (i-j)>(right-left))
                {
                    right = i;
                    left = j;
                }
            }
        }
        return s.substr(left,right-left+1);
    }
};