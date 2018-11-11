/*	Project:    NAME OF PROJECT GOES HERE
	Name:       YOUR NAME GOES HERE
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/

#include <string>
#include <iostream>
#include "test.h"
#include <fstream>
//#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
	int incrementerTest = 0;
	ifstream infiletest("anothertest9.csv");
	string s;
	string t;
	Post test;

	/*for (int i = 0; i < infiletest.size(); i++)
	{
		int testIncrementer;
		cout << s.at(i);
	}*/

	while (infiletest >> s) //(getline(infile,s)) for line by line display
	{
		if (s == "Post")
		{
			t = s;
			//incrementerTest = stoi(s);

			cout << "found: \"" << s << "\"" << endl;
			incrementerTest++;
		}
		/*else
		{
			cout << "found \"" << s << "\" still searching for \"test\" " << endl;
		}*/

		//cout << s << endl;
	};
	cout << "found " << incrementerTest << " instances of \"" << t << "\"" << endl
		 << "When a new file is opened the post count will start at " << incrementerTest + 1 << endl;

	cout << endl
		 << endl
		 << endl
		 << endl
		 << "BEGIN TESTING!!!!!" << endl
		 << endl;
	test.setIncrementer(incrementerTest + 1);

	test.setAuthorsName("Omar is the author name test");
	test.setPost("Omar post is the post test");

	test.fileWritingFunctionTest();

	test.fileClosingTest();
	test.postNumberIncrementer();

	cout << test.getAuthorName() << endl
		 << test.getPost();

	test.setAuthorsName("Amanda");
	cout << endl;
	test.setPost("Amanda says Amanda is cool");
	cout << endl;
	test.postNumberIncrementer();
	test.identifierLowerByOne();

	cout << test.getAuthorName() << endl
		 << test.getPost() << endl;
	test.fileWritingFunctionTest();
	test.fileClosingTest();

	// This causes the program to pause at its completion.
	char c;
	cout << "Hit enter to exit:" << endl;
	cin.get(c);
	return 0;

	//this is a test
}
