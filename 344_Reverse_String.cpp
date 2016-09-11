//344. Reverse String
//description:
/*
Write a function that takes a string as input and returns the string reversed.

Example:
Given s = "hello", return "olleh".
*/


//information: http://www.cplusplus.com/reference/string/string/


class Solution {
public:
    string reverseString(string s) {
        string reversS;
        for(std::string::reverse_iterator ritr = s.rbegin(); ritr != s.rend(); ritr++ )
            reversS += *ritr;
            
        return reversS;
    }
};
