#pragma once
#include <string>
using namespace std;
#include <iostream>
#include <fstream>

class Post
{

  public:
	void testfunction();
	string anotherTest();
	string getAuthorName() const;
	void setAuthorsName(string userName);
	string getPost() const;
	void setPost(string post);
	int getPostNumber() const;
	void postNumberIncrementer();
	void fileWritingFunctionTest();
	void fileClosingTest();
	ofstream testingFiles;
	//ifstream testingWritingToFiles;
	char word{50};
	void identifierLowerByOne();
	int setIncrementer(int test);

	Post()
	{
		userPost = "no post entered yet";
		authorsName = "name not entered yet";
		identifier = 1;
	};

  private:
	string authorsName;
	string userPost;
	int identifier;
	string fileWriting;
};
