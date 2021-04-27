#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
	string s1;
	stack<int>s;
	int n;
	cin >> n;
	getchar();
	for (int i = 0; i < n; i++)
	{
		int len;
		int ans = 1;
		getline(cin, s1);
		len = s1.length();
		if (len % 2)
			ans = 0;
		else
		{
			for (int j = 0; j < len; j++)
			{
				if (s1[j] == '(' or s1[j] == '[')
					s.push(s1[j]);
				else if (s1[j] == ')')
				{
					if (s.empty()) {
						ans = 0;
						break;

					}
					else if (s.top() == '(')
						s.pop();
					else
					{
						ans = 0;
						break;

					}

				}
				else if (s1[j] == ']')
				{
					if (s.empty())
					{
						ans = 0;
							break;
					}

					else if (s.top() == '[')
						s.pop();
					else
					{
						ans = 0;
							break;
					}

				}
			}
		}
		if (ans)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
	