/*
 * Pig.cpp
 *
 *  Created on: Jan 20, 2020
 *      Author: paler
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <stdio.h>

int main(){
	int userPlayer, p1Score=0, p2Score=0, roll, turnTotal=0, turnTotal2=0 , currentPlayer=1;
	char userChoice;
	bool whosTurn = false;

	srand(time(0));
	userPlayer = rand() %2 +1;		//randomly decides who is player 1 (user or cpu)

	std::cout << "You will be player " << userPlayer << "." << std::endl;
	std::cout << "Enter R to roll; enter any other character to hold." << std::endl;

	while(p2Score < 100 ){ // loop for the whole game
		// when I tried "while(p1Score < 100 || p2Score < 100)" It didn't exit the loop until both p1 & p2 scores were above 100 for some reason?
		std::cout << "Player 1 score: " <<  p1Score << "\nPlayer 2 score: " << p2Score<< "\n"<< std::endl;

/*		if (whosTurn)
			currentPlayer = 1;
		else
			currentPlayer = 2;*/

		std::cout << "It is player " << "1's turn." << std::endl;
		turnTotal = 0;
		while(roll != 1){			// cpu's loop to "roll"
			sleep(1);
			srand(time(0));
			roll = rand() %6 +1;
			std::cout << "Roll: " << roll << std::endl;
			turnTotal+= roll;

			if(roll ==1){
				turnTotal = 0;
				std::cout<< "Turn Total: " << turnTotal << "\nNew Score: "<<p1Score<< std::endl;
			}else if(turnTotal >= 20){
				p1Score += turnTotal;
				std::cout<< "Turn Total: " << turnTotal << "\nNew Score: " << p1Score<< std::endl;
				break;
			}
		}
		std::cout << "Player 1 score: " <<  p1Score << "\nPlayer 2 score: " << p2Score<< std::endl;
		std::cout << "\nIt is player 2's turn." <<std::endl;
		roll = rand() %6 +1;				//covers the first roll
		turnTotal2 = 0;
		turnTotal2 +=roll;
		std::cout << "Roll: " << roll;

		while(roll != 1 || userChoice != 'h'){		// users while loop
			if (roll == 1)
				break;
			std::cout << "\nTurn Total: " <<turnTotal2<< "\tRoll/Hold? ";
			std::cin >> userChoice;
			if ((userChoice =='r')){
				srand(time(0));
					roll = rand() %6 +1;
					turnTotal2 +=roll;
					std::cout << "Roll: " << roll;

				if (roll ==1){
					turnTotal2 = 0;
					std::cout << "\nTurn Total: " << turnTotal2 << "\nNew Score: " << p2Score << std::endl;
				break;
				}
			}else{
				roll = 0;
				turnTotal2 += roll;
				p2Score += turnTotal2;
				std::cout << "Turn Total: " << turnTotal2 << std::endl;
				break;
			}
		}
	}
	int winner;
	if(p1Score > p2Score)
		winner = 1;
	else
		winner = 2;

	std::cout << "\nCongratulations! Player " << winner << " wins!" <<std::endl;

}
