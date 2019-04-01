#include<iostream>
#include<string>
using namespace std;
//class Solution {
//public:
//	bool isPalindrome(string s) {
//		string s1;
//		int begin = 0;
//		int end = s.size() - 1;
//		while (begin <= end)
//		{
//			if (('a' <= s[begin] && s[begin] <= 'z')||('0'<=s[begin]&&s[begin]<='9'))
//				s1.push_back(s[begin]);
//			if ('A' <= s[begin] && s[begin] <= 'Z')
//				s1.push_back(s[begin] + 32);
//			begin++;
//		}
//		begin = 0;
//		end = s1.size() - 1;
//		while ((begin <= end) && (s1[begin] == s1[end]))
//		{
//			++begin;
//			--end;
//		}
//		if (begin>end)
//			return true;
//		else
//			return false;
//	}
//};
class Solution {
public:
	bool isPalindrome(string s) {
		string s1;
		int begin = 0;
		int end = s.size() - 1;
		while (begin <= end)
		{
			if ('A' <= s[begin] && s[begin] <= 'Z')
				s[begin] = s[begin] + 32;
			++begin;
		}
		begin = 0;
		while (begin < end)
		{
			while ((begin < end) && (!(('a' <= s[begin] && s[begin] <= 'z') || ('0' <= s[begin] && s[begin] <= '9'))))
				++begin;
			while ((begin < end) && (!(('a' <= s[end] && s[end] <= 'z') || ('0' <= s[end] && s[end] <= '9'))))
				--end;
			if (s[begin] != s[end])
				return false;
			++begin;
			--end;
		}
		return true;
	}
};
int main()
{
	Solution x;
	cout<<x.isPalindrome("0P")<<endl;
	system("pause");
	return 0;
}