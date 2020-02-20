/*
 * Book.h
 *
 *  Created on: Feb 17, 2020
 *      Author: paler
 */
#include <string>
#ifndef BOOK_H_
#define BOOK_H_

class Book {
private:
	std::string Title;
	int bookID;
	bool checkedOut;		//t/f if book is checked out
public:
	//CONSTRUCTORS
	Book();		//default title
	Book(std::string title, int bookid, bool cOut = false);	//constructor, 3rd parameter is optional
	Book(const Book &bookObj);	//copy constructor

	//GETTERS
	std::string getTitle();	//returns title of book
	int getbookID();		//returns ID of a book
	bool isCheckedOut();	//returns if book is checked out

	//SETTERS
	void setTitle(std::string title);	//sets title
	void setbookID(int bookid);			//sets book ID

	void borrowBook();		//if checkedOut flag is true, outputs message saying book is unavailable. If checkedOut is false, sets checkedOut to true.
	void returnBook();		//sets checkedOut flag to false
	std::string bookStatus();
};

#endif /* BOOK_H_ */
