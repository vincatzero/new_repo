#include <iostream>
using namespace std;
#include "test.h"
#include <fstream>
#include <cstdlib>

void Post::testfunction()
{
	cout << "holy crap it worked";
}

string Post::anotherTest()
{
	string test = "file writing test ";
	return test;
}

string Post::getAuthorName() const
{
	return authorsName;
}

void Post::setAuthorsName(string userName)
{
	authorsName = userName;
}

string Post::getPost() const
{
	return userPost;
}

void Post::setPost(string post)
{
	userPost = post;
}

int Post::getPostNumber() const
{
	return identifier;
}

void Post::postNumberIncrementer()
{
	cout << "Post number: " << identifier << endl;
	identifier++;
}

void Post::fileWritingFunctionTest()
{
	testingFiles.open("anothertest9.csv", ios::app);

	if (!testingFiles.is_open())
	{
		cout << "error opening file" << endl;
	}
	else
	{
		cout << "Success creating/opening file" << endl;
	}
}

void Post::fileClosingTest()
{
	testingFiles << "Post " << identifier << endl
				 << getAuthorName() << endl
				 << getPost() << endl
				 << endl;
	testingFiles.close();
	if (!testingFiles.is_open())
	{
		cout << "success closing file" << endl;
	}
	else
	{
		cout << "error closing file" << endl;
	}
}

void Post::identifierLowerByOne()
{
	identifier--;
}

int Post::setIncrementer(int test)
{
	identifier = test;

	return identifier;
}