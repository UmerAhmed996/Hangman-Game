#include <iostream>
#include <Stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	char restart = 1, end = 0;
	int wins = 0, lose = 0;
	while (restart == 1)
	{
		cout <<"***************************************************"<<endl;
		cout <<"*            WELCOME TO HANGMAN GAME              *" << endl;
		cout <<"***************************************************" << endl;
		cout << "\npress any key to start your game" << endl;
		char start = 0;
		cin >> start;
		cout << endl;

		char word_one[] = { 'j','a','z','z','\0' };			                          const int size_word_one = 4;	    //0
		char word_two[] = { 'g','a','l','a','x','y','\0' };		        	          const int size_word_two = 6;		//1
		char word_three[] = { 'j','o','y','f','u','l','\0' };	                   	  const int size_word_three = 6;   	//2
		char word_four[] = { 'f','u','n','n','y','\0' };	                          const int size_word_four = 5;	    //3
		char word_five[] = { 'w','h','e','e','z','y','\0' };	         	          const int size_word_five = 6;		//4
		char word_six[] = { 'r','a','z','z','m','a','t','a','z','z','\0' };	    	  const int size_word_six = 10;    	//5
		char word_seven[] = { 'z','i','p','p','e','r','\0' };			              const int size_word_seven = 6;    //6
		char word_eight[] = { 's','n','a','z','z','y','\0' };		                  const int size_word_eight = 6;	//7
		char word_nine[] = { 'v','o','o','d','o','o','\0' };                          const int size_word_nine = 6;    	//8
		char word_ten[] = { 'f','l','o','w','\0' };			                          const int size_word_ten = 4;	    //9

		srand(time(NULL));
		int rand_choice = rand() % 10;
		int life = 5;
	
		if (rand_choice == 0)  //-----------------------------
		{
			char temp = '\0';
			char enter[26] = { '\0' };
			char answer[size_word_one] = { '_',  '_', '_', '_' };
			int check = 0;
			int counter = 0, counter1 = 0;
			
			while (1)
			{
				for (int b = 0; b < size_word_one; b++)
				{
					cout << answer[b] << " ";
				}
				cout << "				      Life: " << life << endl;

				if (counter == size_word_one)
				{
					wins++;
					cout << "You have guessed the word.\nGAME OVER!!!\n";
					break;
				}

				cin >> temp;
				if (temp >= 0 && temp <= 64 || temp >= 91 && temp <= 96 || temp >= 123 && temp <= 127)
				{
					cout << "Please give input in alphabet" << endl;
					cin >> temp;
				}

				if (temp >= 65 && temp <= 90 )
				{
					temp = temp + 32;
				}
								
				for (int b = 0; b < size_word_one; b++)
				{					
					if (word_one[b] == temp)
					{
						counter++;
						answer[b] = word_one[b];
						check = 1;
						word_one[b] = '\0';
					}
					else if (temp == answer[b])
					{
						cout << "Letter already used.\n";
						check = 1;	
						break;
					}
				}

				if (check != 1)
				{
					for (int i = 0; i < counter1; i++)
					{
						if (temp == enter[i])
						{
							cout << "Letter already used.\n";
							check = 1;
							break;
						}
					}

					if (check != 1)
					{
						enter[counter1] = temp;
						counter1++;
						life--;
					}
					else
					{
						check = 0;
					}
				}
				else 
				{
					check = 0;
				}

				if (life == 0)
				{
					lose++;
					cout << "All lifes are over given word is jaaz";
					break;
				}
				cout << endl;
			}
		}

		else if (rand_choice == 1)  //------------------------------
		{
			char temp = '\0';
			char enter[26] = { '\0' };
			char answer[size_word_two] = { '_',  '_', '_', '_','_', '_' };
			int check = 0;
			int counter_1 = 0, counter1 = 0;
			
			while (1)
			{
				for (int b = 0; b < size_word_two; b++)
				{
					cout << answer[b] << " ";
				}
				cout << "				      Life: " << life << endl;

				if (counter_1 == size_word_two)
				{
					wins++;
					cout << "You have guessed the word.\nGAME OVER!!!\n";
					break;
				}

				cin >> temp;
				if (temp >= 0 && temp <= 64 || temp >= 91 && temp <= 96 || temp >= 123 && temp <= 127)
				{
					cout << "Please give input in alphabet" << endl;
					cin >> temp;
				}

				if (temp >= 65 && temp <= 90)
				{
					temp = temp + 32;
				}

				for (int b = 0; b < size_word_two; b++)
				{
					if (word_two[b] == temp)
					{
						counter_1++;
						answer[b] = word_two[b];
						check = 1;
						word_two[b] = '\0';
					}
					else if (temp == answer[b])
					{
						cout << "Letter already used.\n";
						check = 1;
						break;
					}

				}

				if (check != 1)
				{
					for (int i = 0; i < counter1; i++)
					{
						if (temp == enter[i])
						{
							cout << "Letter already used.\n";
							check = 1;
							break;
						}
					}

					if (check != 1)
					{
						enter[counter1] = temp;
						counter1++;
						life--;
					}
					else
					{
						check = 0;
					}
				}
				else
				{
					check = 0;
				}

				if (life == 0)
				{
					lose++;
					cout << "All lifes are over given word is galaxy";
					break;
				}
				cout << endl;
			}
		}

		else if (rand_choice == 2)  //------------------------------------
		{
			char temp = '\0';
			char enter[26] = { '\0' };
			char answer[size_word_three] = { '_',  '_', '_', '_','_', '_' };
			int check = 0;
			int counter_2 = 0, counter1 = 0;
		
			while (1)
			{
				for (int b = 0; b < size_word_three; b++)
				{
					cout << answer[b] << " ";
				}
				cout << "				      Life: " << life << endl;

				if (counter_2 == size_word_three)
				{
					wins++;
					cout << "You have guessed the word.\nGAME OVER!!!\n";
					break;
				}

				cin >> temp;
				if (temp >= 0 && temp <= 64 || temp >= 91 && temp <= 96 || temp >= 123 && temp <= 127)
				{
					cout << "Please give input in alphabet" << endl;
					cin >> temp;
				}

				if (temp >= 65 && temp <= 90)
				{
					temp = temp + 32;
				}

				for (int b = 0; b < size_word_three; b++)
				{
					if (word_three[b] == temp)
					{
						counter_2++;
						answer[b] = word_three[b];
						check = 1;
						word_three[b] = '\0';
					}
					else if (temp == answer[b])
					{
						cout << "Letter already used.\n";
						check = 1;
						break;
					}

				}

				if (check != 1)
				{
					for (int i = 0; i < counter1; i++)
					{
						if (temp == enter[i])
						{
							cout << "Letter already used.\n";
							check = 1;
							break;
						}
					}

					if (check != 1)
					{
						enter[counter1] = temp;
						counter1++;
						life--;
					}
					else
					{
						check = 0;
					}
				}
				else
				{
					check = 0;
				}

				if (life == 0)
				{
					lose++;
					cout << "All lifes are over given word is joyful";
					break;
				}
				cout << endl;
			}
		}

		else if (rand_choice == 3)  //------------------------------------
		{
			char temp = '\0';
			char enter[26] = { '\0' };
			char answer[size_word_four] = { '_',  '_', '_', '_','_' };
			int check = 0;
			int counter_3 = 0, counter1 = 0;
			

			while (1)
			{
				for (int b = 0; b < size_word_four; b++)
				{
					cout << answer[b] << " ";
				}
				cout << "				      Life: " << life << endl;

				if (counter_3 == size_word_four)
				{
					wins++;
					cout << "You have guessed the word.\nGAME OVER!!!\n";
					break;
				}

				cin >> temp;
				if (temp >= 0 && temp <= 64 || temp >= 91 && temp <= 96 || temp >= 123 && temp <= 127)
				{
					cout << "Please give input in alphabet" << endl;
					cin >> temp;
				}

				if (temp >= 65 && temp <= 90)
				{
					temp = temp + 32;
				}

				for (int b = 0; b < size_word_four; b++)
				{
					if (word_four[b] == temp)
					{
						counter_3++;
						answer[b] = word_four[b];
						check = 1;
						word_four[b] = '\0';
					}
					else if (temp == answer[b])
					{
						cout << "Letter already used.\n";
						check = 1;
						break;
					}

				}

				if (check != 1)
				{
					for (int i = 0; i < counter1; i++)
					{
						if (temp == enter[i])
						{
							cout << "Letter already used.\n";
							check = 1;
							break;
						}
					}

					if (check != 1)
					{
						enter[counter1] = temp;
						counter1++;
						life--;
					}
					else
					{
						check = 0;
					}
				}
				else
				{
					check = 0;
				}

				if (life == 0)
				{
					lose++;
					cout << "All lifes are over given word is funny";
					break;
				}
				cout << endl;
			}
		}

		else if (rand_choice == 4)  //------------------------------------
		{
			char temp = '\0';
			char enter[26] = { '\0' };
			char answer[size_word_five] = { '_',  '_', '_', '_','_', '_' };
			int check = 0;
			int counter_4 = 0, counter1 = 0;
			

			while (1)
			{
				for (int b = 0; b < size_word_five; b++)
				{
					cout << answer[b] << " ";
				}
				cout << "				      Life: " << life << endl;

				if (counter_4 == size_word_five)
				{
					wins++;
					cout << "You have guessed the word.\nGAME OVER!!!\n";
					break;
				}

				cin >> temp;
				if (temp >= 0 && temp <= 64 || temp >= 91 && temp <= 96 || temp >= 123 && temp <= 127)
				{
					cout << "Please give input in alphabet" << endl;
					cin >> temp;
				}

				if (temp >= 65 && temp <= 90)
				{
					temp = temp + 32;
				}

				for (int b = 0; b < size_word_five; b++)
				{
					if (word_five[b] == temp)
					{
						counter_4++;
						answer[b] = word_five[b];
						check = 1;
						word_five[b] = '\0';
					}
					else if (temp == answer[b])
					{
						cout << "Letter already used.\n";
						check = 1;
						break;
					}

				}

				if (check != 1)
				{
					for (int i = 0; i < counter1; i++)
					{
						if (temp == enter[i])
						{
							cout << "Letter already used.\n";
							check = 1;
							break;
						}
					}

					if (check != 1)
					{
						enter[counter1] = temp;
						counter1++;
						life--;
					}
					else
					{
						check = 0;
					}
				}
				else
				{
					check = 0;
				}
				

				if (life == 0)
				{
					lose++;
					cout << "All lifes are over given word is wheezy";
					break;
				}
				cout << endl;
			}
		}

		else if (rand_choice == 5)  //------------------------------------
		{
			char temp = '\0';
			char enter[26] = { '\0' };
			char answer[size_word_six] = { '_',  '_', '_', '_','_', '_', '_', '_','_', '_' };
			int check = 0;
			int counter_5 = 0, counter1 = 0;
			

			while (1)
			{
				for (int b = 0; b < size_word_six; b++)
				{
					cout << answer[b] << " ";
				}
				cout << "				      Life: " << life << endl;

				if (counter_5 == size_word_six)
				{
					wins++;
					cout << "You have guessed the word.\nGAME OVER!!!\n";
					break;
				}

				cin >> temp;
				if (temp >= 0 && temp <= 64 || temp >= 91 && temp <= 96 || temp >= 123 && temp <= 127)
				{
					cout << "Please give input in alphabet" << endl;
					cin >> temp;
				}

				if (temp >= 65 && temp <= 90)
				{
					temp = temp + 32;
				}

				for (int b = 0; b < size_word_six; b++)
				{
					if (word_six[b] == temp)
					{
						counter_5++;
						answer[b] = word_six[b];
						check = 1;
						word_six[b] = '\0';
					}
					else if (temp == answer[b])
					{
						cout << "Letter already used.\n";
						check = 1;
						break;
					}

				}
				if (check != 1)
				{
					for (int i = 0; i < counter1; i++)
					{
						if (temp == enter[i])
						{
							cout << "Letter already used.\n";
							check = 1;
							break;
						}
					}

					if (check != 1)
					{
						enter[counter1] = temp;
						counter1++;
						life--;
					}
					else
					{
						check = 0;
					}
				}
				else
				{
					check = 0;
				}

				if (life == 0)
				{
					lose++;
					cout << "All lifes are over given word is razzmatazz";
					break;
				}
				cout << endl;
			}
		}
		else if (rand_choice == 6)  //------------------------------------
		{
			char temp = '\0';
			char enter[26] = { '\0' };
			char answer[size_word_seven] = { '_',  '_', '_', '_','_', '_' };
			int check = 0;
			int counter_6 = 0, counter1 = 0;
			

			while (1)
			{
				for (int b = 0; b < size_word_seven; b++)
				{
					cout << answer[b] << " ";
				}
				cout << "				      Life: " << life << endl;

				if (counter_6 == size_word_seven)
				{
					wins++;
					cout << "You have guessed the word.\nGAME OVER!!!\n";
					break;
				}

				cin >> temp;
				if (temp >= 0 && temp <= 64 || temp >= 91 && temp <= 96 || temp >= 123 && temp <= 127)
				{
					cout << "Please give input in alphabet" << endl;
					cin >> temp;
				}

				if (temp >= 65 && temp <= 90)
				{
					temp = temp + 32;
				}

				for (int b = 0; b < size_word_seven; b++)
				{
					if (word_seven[b] == temp)
					{
						counter_6++;
						answer[b] = word_seven[b];
						check = 1;
						word_seven[b] = '\0';
					}
					else if (temp == answer[b])
					{
						cout << "Letter already used.\n";
						check = 1;
						break;
					}

				}

				if (check != 1)
				{
					for (int i = 0; i < counter1; i++)
					{
						if (temp == enter[i])
						{
							cout << "Letter already used.\n";
							check = 1;
							break;
						}
					}

					if (check != 1)
					{
						enter[counter1] = temp;
						counter1++;
						life--;
					}
					else
					{
						check = 0;
					}
				}
				else
				{
					check = 0;
				}

				if (life == 0)
				{
					lose++;
					cout << "All lifes are over given word is zipper";
					break;
				}
				cout << endl;
			}
		}
		else if (rand_choice == 7)  //------------------------------------
		{
			char temp = '\0';
			char enter[26] = { '\0' };
			char answer[size_word_eight] = { '_',  '_', '_', '_','_', '_' };
			int check = 0;
			int counter_7 = 0, counter1 = 0;
			

			while (1)
			{
				for (int b = 0; b < size_word_eight; b++)
				{
					cout << answer[b] << " ";
				}
				cout << "				      Life: " << life << endl;

				if (counter_7 == size_word_eight)
				{
					wins++;
					cout << "You have guessed the word.\nGAME OVER!!!\n";
					break;
				}

				cin >> temp;
				if (temp >= 0 && temp <= 64 || temp >= 91 && temp <= 96 || temp >= 123 && temp <= 127)
				{
					cout << "Please give input in alphabet" << endl;
					cin >> temp;
				}

				if (temp >= 65 && temp <= 90)
				{
					temp = temp + 32;
				}

				for (int b = 0; b < size_word_eight; b++)
				{
					if (word_eight[b] == temp)
					{
						counter_7++;
						answer[b] = word_eight[b];
						check = 1;
						word_eight[b] = '\0';
					}
					else if (temp == answer[b])
					{
						cout << "Letter already used.\n";
						check = 1;
						break;
					}

				}

				if (check != 1)
				{
					for (int i = 0; i < counter1; i++)
					{
						if (temp == enter[i])
						{
							cout << "Letter already used.\n";
							check = 1;
							break;
						}
					}

					if (check != 1)
					{
						enter[counter1] = temp;
						counter1++;
						life--;
					}
					else
					{
						check = 0;
					}
				}
				else
				{
					check = 0;
				}

				if (life == 0)
				{
					lose++;
					cout << "All lifes are over given word is snazzy";
					break;
				}
				cout << endl;
			}
		}
		else if (rand_choice == 8)  //------------------------------------
		{
			char temp = '\0';
			char enter[26] = { '\0' };
			char answer[size_word_nine] = { '_',  '_', '_', '_','_', '_' };
			int check = 0;
			int counter_8 = 0, counter1 = 0;
			

			while (1)
			{
				for (int b = 0; b < size_word_nine; b++)
				{
					cout << answer[b] << " ";
				}
				cout << "				      Life: " << life << endl;

				if (counter_8 == size_word_nine)
				{
					wins++;
					cout << "You have guessed the word.\nGAME OVER!!!\n";
					break;
				}

				cin >> temp;
				if (temp >= 0 && temp <= 64 || temp >= 91 && temp <= 96 || temp >= 123 && temp <= 127)
				{
					cout << "Please give input in alphabet" << endl;
					cin >> temp;
				}

				if (temp >= 65 && temp <= 90)
				{
					temp = temp + 32;
				}

				for (int b = 0; b < size_word_nine; b++)
				{
					if (word_nine[b] == temp)
					{
						counter_8++;
						answer[b] = word_nine[b];
						check = 1;
						word_nine[b] = '\0';
					}
					else if (temp == answer[b])
					{
						cout << "Letter already used.\n";
						check = 1;
						break;
					}

				}

				if (check != 1)
				{
					for (int i = 0; i < counter1; i++)
					{
						if (temp == enter[i])
						{
							cout << "Letter already used.\n";
							check = 1;
							break;
						}
					}

					if (check != 1)
					{
						enter[counter1] = temp;
						counter1++;
						life--;
					}
					else
					{
						check = 0;
					}
				}
				else
				{
					check = 0;
				}

				if (life == 0)
				{
					lose++;
					cout << "All lifes are over given word is voodoo";
					break;
				}
				cout << endl;
			}
		}
		else if (rand_choice == 9)  //------------------------------------
		{
			char temp = '\0';
			char enter[26] = { '\0' };
			char answer[size_word_ten] = { '_',  '_', '_', '_' };
			int check = 0;
			int counter_9 = 0, counter1 = 0;
			

			while (1)
			{
				for (int b = 0; b < size_word_ten; b++)
				{
					cout << answer[b] << " ";
				}
				cout << "				      Life: " << life << endl;

				if (counter_9 == size_word_ten)
				{
					wins++;
					cout << "You have guessed the word.\nGAME OVER!!!\n";
					break;
				}

				cin >> temp;
				if (temp >= 0 && temp <= 64 || temp >= 91 && temp <= 96 || temp >= 123 && temp <= 127)
				{
					cout << "Please give input in alphabet" << endl;
					cin >> temp;
				}

				if (temp >= 65 && temp <= 90)
				{
					temp = temp + 32;
				}

				for (int b = 0; b < size_word_ten; b++)
				{
					if (word_ten[b] == temp)
					{
						counter_9++;
						answer[b] = word_ten[b];
						check = 1;
						word_ten[b] = '\0';
					}
					else if (temp == answer[b])
					{
						cout << "Letter already used.\n";
						check = 1;
						break;
					}

				}

				if (check != 1)
				{
					for (int i = 0; i < counter1; i++)
					{
						if (temp == enter[i])
						{
							cout << "Letter already used.\n";
							check = 1;
							break;
						}
					}

					if (check != 1)
					{
						enter[counter1] = temp;
						counter1++;
						life--;
					}
					else
					{
						check = 0;
					}
				}
				else
				{
					check = 0;
				}

				if (life == 0)
				{
					lose++;
					cout << "All lifes are over given word is flow";
					break;
				}
				cout << endl;
			}
		}
		
		cout << "\nDo you want to play again " 
		     << "press Y to play again and N for exit" << endl;
		cin >> end;
		
		if (end == 'y' || end == 'Y')
		{
			restart = 1;
		}
		else 
		{ 
			while (end != 'n' && end != 'N')
			{
				cout << "Press N to exit" << endl;
				cin >> end;
			}
			cout << "------------------" << endl;
			cout << "|  Player Stats  |" << endl;
			cout << "------------------" << endl;
			cout << "|win = " << wins << "         |";
			cout << "\n|loose = " << lose << "       |" << endl;
			cout << "------------------" << endl;
			restart = 0;
		}
	}
	system("pause");
	return 0;
}