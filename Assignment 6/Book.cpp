/*
 * Book.cpp
 *
 *  Created on: Feb 17, 2020
 *      Author: paler
 */
#include <cstdlib>
#include <iostream>
#include "Book.h"

Book::Book() {
	Title = "No Title";
	bookID = rand() % 1000 +1;
	checkedOut = false;
}
Book::Book(std::string title, int bookid, bool cOut){
	Title = title;
	bookID = bookid;
	checkedOut = cOut;
}
Book::Book(const Book &bookObj){
	Title = bookObj.Title;
	bookID = bookObj.bookID;
	checkedOut = bookObj.checkedOut;
}
std::string Book::getTitle(){
	return Title;
}
int Book::getbookID(){
	return bookID;
}
bool Book::isCheckedOut(){
	return checkedOut;
}
void Book::setTitle(std::string title){
	Title = title;
}
void Book::setbookID(int bookid){
	bookID = bookid;
}
void Book::borrowBook(){
	if(isCheckedOut() == true)
		std::cout << "Book has been checked out. Sorry Brother." << std::endl;
	else
		checkedOut = true;
}
void Book::returnBook(){
	checkedOut = false;
}
std::string Book::bookStatus(){
	std::string bA = "Book available!";
	std::string bNA = "Book not available. Sorry.";
	if (isCheckedOut() == false)
		return bA;
	else
		return bNA;
}
Book Book::operator=(const Book &right){
	Title = right.Title;
	bookID = right.bookID;
	checkedOut = right.checkedOut;
	return *this;
}
Book Book::operator+(const Book &right){
	Book temp;
	temp.Title = Title +", "+ right.Title;
	temp.bookID = rand() %1000 +1;
	temp.checkedOut = false;
	return temp;
}
Book Book::operator-(Book &right){
	Title = right.Title;
	bookID = right.bookID;
	checkedOut = right.checkedOut;
	right.Title = "No Title";
	right.bookID = 0;
	return *this;
}
