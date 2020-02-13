#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>


int main() {
	int ecounter=0;				//counter for number of e words
	int longestElength=0;		//counter for length of the longest e word
	std::string longestE;		//longest e word
	std::string eWord;			//current e word we are focused on
	std::string word;			//current word we are focused on
	std::fstream myfile ("storytime.txt");		//how we open the file and read the words

	if (myfile.is_open()){
		while (myfile >> word){				//the >> operator works on white space so it can be used to separate words
			for(unsigned int i=0;i<word.length();i++){		//for loop to iterate through the letters in each word
				if(word[i] == 'e'){			//check if the word has the letter e in it
					ecounter++;
					eWord = word;			//assign the current eword if the word has an e
					if(eWord.length() > longestE.length())		//if the length of our currently focused e word is longer than our longest e word,
						longestE = eWord;						//replace it
					longestElength = 0;		//make sure that the counter is zeroed out
					for(unsigned int i=0;i<longestE.length();i++)		//iterate through the longest e word's letters and count each
						longestElength++;
				}
			}
		}
		myfile.close();		//close the file
	}
	else std::cout << "Unable to open file";
	//display the values
	std::cout << "Number of words where e appears: "<<ecounter<< std::endl;
	std::cout << "Longest word with e: "<<longestE<<std::endl;
	std::cout << "Number of characters in longest word with e: "<<longestElength<<std::endl;
	return 0;
}
