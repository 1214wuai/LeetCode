#include<iostream>
#include<string>
using namespace std;

class Solution {
	/*long long StrToInt(string str)
	{
		long long value = 0;
		for (size_t i = 0; i<str.size(); ++i)
		{
			value = value * 10 + (str[i] - '0');
		}
		return value;
	}

	string IntToStr(long long x)
	{
		string s;
		if (x != 0)
		{
			while (x != 0)
			{
				int y = x % 10;
				y = y + '0';
				s.push_back(y);
				x /= 10;
			}
		}
		else
		{
			x = x + '0';
			s.push_back(x);
		}
		
		
		int begin = 0;
		int end = s.size() - 1;
		while (begin <= end)
		{
			swap(s[begin], s[end]);
			++begin;
			--end;
		}
		return s;
	}*/
public:
	string addStrings(string num1, string num2) {
		int flag = 0;
		int end1 = num1.size() - 1;
		int end2 = num2.size() - 1;
		string s;
		int x = 0;
		while (end1 >= 0 || end2 >= 0)
		{
			if (end1 >= 0 && end2 >= 0)
				x = num1[end1] - '0' + num2[end2] - '0'+flag;
			else if(end1>=0)
				x = num1[end1] - '0' + flag;
			else
				x = num2[end2] - '0' + flag;
			flag = 0;
			if (x >= 10)
			{
				flag = 1;
				x %= 10;
			}
			s.push_back((x + '0'));
			--end1;
			--end2;
		}
		
		if (flag == 1)
			s.push_back((flag + '0'));
		int begin = 0;
		int end = s.size() - 1;
		while (begin <= end)
		{
			swap(s[begin], s[end]);
			++begin;
			--end;
		}
		
		return s;
	}
};

int main()
{
	string num1("91");
	string num2("9");
	
		
	Solution x;
	x.addStrings(num1, num2);
	cout << x.addStrings(num1, num2) << endl;
	//cout << num1 << endl;
	system("pause");
	return 0;
}