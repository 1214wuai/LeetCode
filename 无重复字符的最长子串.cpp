class Solution {
public:
	bool Find(const string& s, const int& sz, const int pos, int j)
	{
		for (int i = pos; i<j; i++)
		{
			if (s[j] == s[i])
				return true;
		}
		return false;
	}
	int lengthOfLongestSubstring(string s) {
		int sz = s.size();
		if (sz <= 1)
			return sz;
		vector<int> v(sz, 0);
		for (int i = 0; i < sz; i++)
		{
			int count = 0;
			for (int j = i; j < sz; j++)
			{
				if (Find(s, sz, i, j))
				{
					if (count == 0)
						count = 1;
					v[i] = count;
					break;
				}
				count++;
			}
            v[i] = count;
		}
		int max = v[0];
		for (int i = 1; i<v.size(); i++)
		{
			if (max<v[i])
				max = v[i];
		}
		return max;
	}
};