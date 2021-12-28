/*
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.


Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"

*/

// Solution:
string reverseWords(string s) {
        int i=0;
        int front =0,end=0;
        int size=s.length()+1;
        cout<<size;
        while(i!=size){
            if(s[i]==' '||s[i]=='\0'){
                end=i;
                reverse(&s[front],&s[end]);
                front=i+1;
            }
            i++;
        }
    return s;
    }
