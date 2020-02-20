/*
 * bookmain.cpp
 *
 *  Created on: Feb 19, 2020
 *      Author: paler
 */
#include <iostream>
#include "book.h"

int main(){
	//First Book
	Book b1;
	std::string t;
	int bID;
	std::cout << "Please enter a Title: " << std::endl;
	std::cin >> t;
	b1.setTitle(t);
	std::cout << "Please enter a book ID: " <<std::endl;
	std::cin >> bID;
	b1.setbookID(bID);
	std::cout << "Title: " << b1.getTitle() <<std::endl;
	std::cout << "Book ID: " << b1.getbookID() <<std::endl;
	std::cout << "Status:  " << b1.bookStatus() <<std::endl;
	b1.borrowBook();
	std::cout << "Title: " << b1.getTitle() <<std::endl;
	std::cout << "Book ID: " << b1.getbookID() <<std::endl;
	std::cout << "Status:  " << b1.bookStatus() <<std::endl;

	//Second Book
	Book b2("Strange Case of Dr Jekyll and Mr Hyde",23,true);
	std::cout << "Title: " << b2.getTitle() <<std::endl;
	std::cout << "Book ID: " << b2.getbookID() <<std::endl;
	std::cout << "Status:  " << b2.bookStatus() <<std::endl;
	b2.returnBook();
	std::cout << "Title: " << b2.getTitle() <<std::endl;
	std::cout << "Book ID: " << b2.getbookID() <<std::endl;
	std::cout << "Status:  " << b2.bookStatus() <<std::endl;

	//Third Book
	Book b3(b2);
	std::cout << "Title: " << b3.getTitle() <<std::endl;
	std::cout << "Book ID: " << b3.getbookID() <<std::endl;
	std::cout << "Status:  " << b3.bookStatus() <<std::endl;

	return 0;
}

