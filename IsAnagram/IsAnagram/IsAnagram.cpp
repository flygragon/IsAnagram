// IsAnagram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"IsAnagram.h"

int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;
	Anagram An;
	cout << boolalpha << An.IsAnagram(s1, s2) << '\n';
	exit(0);
    return 0;
}

