#pragma once
#include<string>
#include<algorithm>
using namespace std;
class Anagram {
public:
	/**
	* @param s: The first string
	* @param b: The second string
	* @return true or false
	*/
	bool IsAnagram(string &s, string &t) {
		// write your code here
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		return s == t;
	}
};