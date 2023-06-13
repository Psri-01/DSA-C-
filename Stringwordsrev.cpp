// C++ program to reverse individual words in a given string using STL list
#include <bits/stdc++.h>
using namespace std;
// reverses individual words of a string
void reverseWords(string str)
{
	stack<char> st;
	// Traverse given string and push all characters to stack until we see a space.
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] != ' ')
			st.push(str[i]);
		// When we see a space, we print contents of stack.
		else {
			while (st.empty() == false) {
				cout << st.top();
				st.pop();
			}
			cout << " ";
		}
	}
	// Since there may not be space after last word.
	while (st.empty() == false) {
		cout << st.top();
		st.pop();
	}
}
int main()
{
	string str = "Geeks for Geeks";
	reverseWords(str);
	return 0;
}

# Python3 program to reverse individual words in a given string using STL list reverses individual words of a string

def reverseWords(string):
	st = list()
	# Traverse given string and push all characters to stack until we see a space.
	for i in range(len(string)):
		if string[i] != " ":
			st.append(string[i])
		# When we see a space, we print contents of stack.
		else:
			while len(st) > 0:
				print(st[-1], end="")
				st.pop()
			print(end=" ")
	# Since there may not be space after last word.
	while len(st) > 0:
		print(st[-1], end="")
		st.pop()
if __name__ == "__main__":
	string = "Geeks for Geeks"
	reverseWords(string)
