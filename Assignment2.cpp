#include <iostream>

//declare constants
const int ROWS = 15;
const int SEATS_PER_ROW = 30;
const int FRONT_ROW_COST = 50;
const int BACK_ROW_COST = 40;
int TOTAL_SEATS = 450;

int main() {

    //declare and initialize seating array to have a '#' in every element
    char concertSeats[ROWS][SEATS_PER_ROW];
    for(int i=0; i< ROWS; i++){
        for(int j=0; j<SEATS_PER_ROW; j++){
            concertSeats[i][j]='#';
        }
    }

    int totalSales = 0;  //tracks total sales
    int totalSeats = 450;
    char userChoice; 	//tracks users choice for the various options
    int numTix, row, column;
    int row1=15,row2=15,row3=15,row4=15,row5=15,row6=15,row7=15,row8=15,row9=15,row10=15,row11=15,row12=15,row13=15,row14=15,row15=15;
    bool validSeat = false;		//tracks if the user selects a valid seat or not for traversing the while loop
    do {
 		//display choices
		std::cout << "'D' - display seating chart\n'B' - buy tickets\n'T' - show total sales\n'S' - show seating info\n'Q' - quit\nEnter option: ";
		std::cin >> userChoice;
		userChoice = std::toupper(userChoice);		//toUpper so that the user can enter lowercase letters

		//switch statement for user choice of various functions
        switch (userChoice) {
            case 'D':
               //code for displaying seating chart
            	std::cout << "     \t" << "123456789012345678901234567890" << std::endl;
            	 for (int i = 0; i < ROWS; i++){
            		 std::cout<< "Row "<<i+1<<"\t";
            	        for (int j = 0; j < SEATS_PER_ROW; j++){
            	            std::cout << concertSeats[i][j];
            	        }
            	        std::cout << std::endl;
            	  }
            	 std::cout << std::endl;
            	 break;
            case 'B':
				//code for letting user buy tickets
            	while(validSeat == false){	//if the user enters a seat that is incorrect, they wont have to completely start over.
					std::cout << "Enter the number of tickets you'd like to purchase: ";
					std::cin >> numTix;
					for (int i = 0;i< numTix;i++){
						std::cout<< "Enter the row: ";
						std::cin >> row;
						if (row>15 ||row<1){		//if the user selects a row/column that is out of array range, break.
							std::cout<< "Please choose a valid row. Try again."<<std::endl;
							break;
						}
						row -=1;	//helps aid array assignment because arrays start at 0 and we want our rows to start at 1.
						std::cout<< "Enter the column: ";
						std::cin >> column;
						if (column>30 ||column<1){
							std::cout<< "Please choose a valid column. Try again."<<std::endl;
							break;
						}
						column -=1;

						if (concertSeats[row][column] == '#'){		//if seat is empty
							concertSeats[row][column] = '*';		//fill it
							totalSeats -= 1;						//subtract 1 from total seats
							validSeat = true;						//to get out of loop after were done
							std::cout<< "Great! That seat is available!" <<std::endl;
							row += 1;					//return the value of row back to what it was before
							//assigning cost
							if (row < 8)
								totalSales += FRONT_ROW_COST;
							else
								totalSales += BACK_ROW_COST;
							//subtract seat when purchased
							if(row ==1)
								row1--;
							else if(row ==2)
								row2--;
							else if(row ==3)
								row3--;
							else if(row ==4)
								row4--;
							else if(row ==5)
								row5--;
							else if(row ==6)
								row6--;
							else if(row ==7)
								row7--;
							else if(row ==8)
								row8--;
							else if(row ==9)
								row9--;
							else if(row ==10)
								row10--;
							else if(row ==11)
								row11--;
							else if(row ==12)
								row12--;
							else if(row ==13)
								row13--;
							else if(row ==14)
								row14--;
							else if(row ==15)
								row15--;
						}
						else
							std::cout << "Sorry, that seat is taken." <<std::endl;
					}
            	}
            	validSeat = false;		//reset the value for next time
            	break;
            case 'T':
				std::cout<< "Total Sales: $" << totalSales <<std::endl;
                break;
            case 'S':
				/*code for displaying seat info, e.g.
					-how many seats have sold
					-how many seats available for each row
					-how many seats available for the entire auditorium
				*/
            	std::cout << "\nNumber of seats sold: " << totalSeats << std::endl;
            	std::cout << "Seats Remaining per Row\nRow 1: "<<row1<<std::endl;
            	std::cout << "Row 2: " <<row2 <<std::endl;
            	std::cout << "Row 3: " <<row3 <<std::endl;
            	std::cout << "Row 4: " <<row4 <<std::endl;
            	std::cout << "Row 5: " <<row5 <<std::endl;
            	std::cout << "Row 6: " <<row6 <<std::endl;
            	std::cout << "Row 7: " <<row7 <<std::endl;
            	std::cout << "Row 8: " <<row8 <<std::endl;
            	std::cout << "Row 9: " <<row9 <<std::endl;
            	std::cout << "Row 10: " <<row10 <<std::endl;
            	std::cout << "Row 11: " <<row11 <<std::endl;
            	std::cout << "Row 12: " <<row12 <<std::endl;
            	std::cout << "Row 13: " <<row13 <<std::endl;
            	std::cout << "Row 14: " <<row14 <<std::endl;
            	std::cout << "Row 15: " <<row15 <<std::endl;
            	std::cout << "Seats Available in Auditorium: " <<totalSeats<<std::endl;
            	break;
            case 'Q':
				//code to quit program
                std::cout << "Thank you for using Seat Charter";
                break;
            default:
                std::cout << "Invalid choice" << std::endl; //this should never happen
        }

    } while (userChoice != 'Q');
    return 0;
}
