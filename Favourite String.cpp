/* A string S is called Chef's favourite if every substring chef in S

must have a substring code before it.

You are given a string S
of size N that contains both code and chef as a substring. Please determine if S

is Chef's favourite.

Note: A substring is a continuous part of string which can be obtained by deleting some (may be none) character's from the beginning and some (may be none) character's from the end.
Input Format

    The first line of the input contains an integer T

- the number of test cases. The test cases then follow.
The first line of each test contains an integer N
- the size of the string.
The second line of each test contains a string S
Output Format

For each test case, output on a single line AC if S

is Chef's favourite, or WA otherwise.
Constraints

    1≤T≤10

1≤N≤104
|S|=N
S
consists only of lowercase English characters
Both code and chef appear as a substring at least once in S

Sample Input 1

4
8
codechef
8
chefcode
14
sxycodeghychef
21
sxychefvsvcodehghchef



Solution */

#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	string w1="code";
	string w2="chef";
	int t=0;
	cin>>t;
	for(int i=0;i<t;i++){
        int len;
        cin>>len;
	    string str;
	    getline(cin>>ws,str);
        int x=str.find(w1);
	    int y=str.find(w2);
	    if(x<y) cout<<"WA"<<endl;
	    else cout<<"AC"<<endl;
	}
	return 0;
}


