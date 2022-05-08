#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <MMsystem.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char square[43] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
int checkWin();
char drawBoard();
void playagain();
void mainMenu();
void tutorial();

int main(){
	char choice[100], choice1[100], choice2[100];
	int i, number;
	srand(time(NULL));
	system("color 0a");
	do{
		system("cls");
		mainMenu();
		scanf("%s", choice1);
		// <------------------------------------------- Player vs Player -------------------------------------------->
		if(strcmp(choice1, "1")==0){
			system("cls");
			int player = 1, i, check1=0, check2=0, check3=0, check4=0, check5=0, check6=0, check7=0;
			char mark, player1[50], player2[50]; // X,O
			printf("\n\n\n\t\t\t\t\tPlese enter your name(Player1): ");
			scanf("%s", player1);
			printf("\n\n\n\t\t\t\t\tPlese enter your name(Player2): ");
			scanf("%s", player2);
			do {
				do {
					drawBoard(player1, player2);
					player = (player % 2) ? 1 : 2;
					mark = (player == 1) ? 'X' : 'O';
					if(player==1){
						printf("\t\t\t\t\t%s",player1);
					}
					else{
						printf("\t\t\t\t\t%s",player2);
					}
					printf("(%c), enter the choice : ", mark);
					scanf("%s" ,choice);
					if(strcmp(choice, "1")==0 && check1 == 0){
						square[1] = mark;
						check1++;
					}
					else if(strcmp(choice, "1")==0 && check1 == 1){
						square[8] = mark;
						check1++;
					}
					else if(strcmp(choice, "1")==0 && check1 == 2){
						square[15] = mark;
						check1++;
					}
					else if(strcmp(choice, "1")==0 && check1 == 3){
						square[22] = mark;
						check1++;
					}
					else if(strcmp(choice, "1")==0 && check1 == 4){
						square[29] = mark;
						check1++;
					}
					else if(strcmp(choice, "1")==0 && check1 == 5){
						square[36] = mark;
						check1++;
					}
					else if(strcmp(choice, "2")==0 && check2 == 0){
						square[2] = mark;
						check2++;
					}
					else if(strcmp(choice, "2")==0 && check2 == 1){
						square[9] = mark;
						check2++;
					}
					else if(strcmp(choice, "2")==0 && check2 == 2){
						square[16] = mark;
						check2++;
					}
					else if(strcmp(choice, "2")==0 && check2 == 3){
						square[23] = mark;
						check2++;
					}
					else if(strcmp(choice, "2")==0 && check2 == 4){
						square[30] = mark;
						check2++;
					}
					else if(strcmp(choice, "2")==0 && check2 == 5){
						square[37] = mark;
						check2++;
					}
					else if(strcmp(choice, "3")==0 && check3 == 0){
						square[3] = mark;
						check3++;
					}
					else if(strcmp(choice, "3")==0 && check3 == 1){
						square[10] = mark;
						check3++;
					}
					else if(strcmp(choice, "3")==0 && check3 == 2){
						square[17] = mark;
						check3++;
					}
					else if(strcmp(choice, "3")==0 && check3 == 3){
						square[24] = mark;
						check3++;
					}
					else if(strcmp(choice, "3")==0 && check3 == 4){
						square[31] = mark;
						check3++;
					}
					else if(strcmp(choice, "3")==0 && check3 == 5){
						square[38] = mark;
						check3++;
					}
					else if(strcmp(choice, "4")==0 && check4 == 0){
						square[4] = mark;
						check4++;
					}
					else if(strcmp(choice, "4")==0 && check4 == 1){
						square[11] = mark;
						check4++;
					}
					else if(strcmp(choice, "4")==0 && check4 == 2){
						square[18] = mark;
						check4++;
					}
					else if(strcmp(choice, "4")==0 && check4 == 3){
						square[25] = mark;
						check4++;
					}
					else if(strcmp(choice, "4")==0 && check4 == 4){
						square[32] = mark;
						check4++;
					}
					else if(strcmp(choice, "4")==0 && check4 == 5){
						square[39] = mark;
						check4++;
					}
					else if(strcmp(choice, "5")==0 && check5 == 0){
						square[5] = mark;
						check5++;
					}
					else if(strcmp(choice, "5")==0 && check5 == 1){
						square[12] = mark;
						check5++;
					}
					else if(strcmp(choice, "5")==0 && check5 == 2){
						square[19] = mark;
						check5++;
					}
					else if(strcmp(choice, "5")==0 && check5 == 3){
						square[26] = mark;
						check5++;
					}
					else if(strcmp(choice, "5")==0 && check5 == 4){
						square[33] = mark;
						check5++;
					}
					else if(strcmp(choice, "5")==0 && check5 == 5){
						square[40] = mark;
						check5++;
					}
					else if(strcmp(choice, "6")==0 && check6 == 0){
						square[6] = mark;
						check6++;
					}
					else if(strcmp(choice, "6")==0 && check6 == 1){
						square[13] = mark;
						check6++;
					}
					else if(strcmp(choice, "6")==0 && check6 == 2){
						square[20] = mark;
						check6++;
					}
					else if(strcmp(choice, "6")==0 && check6 == 3){
						square[27] = mark;
						check6++;
					}
					else if(strcmp(choice, "6")==0 && check6 == 4){
						square[34] = mark;
						check6++;
					}
					else if(strcmp(choice, "6")==0 && check6 == 5){
						square[41] = mark;
						check6++;
					}
					else if(strcmp(choice, "7")==0 && check7 == 0){
						square[7] = mark;
						check7++;
					}
					else if(strcmp(choice, "7")==0 && check7 == 1){
						square[14] = mark;
						check7++;
					}
					else if(strcmp(choice, "7")==0 && check7 == 2){
						square[21] = mark;
						check7++;
					}
					else if(strcmp(choice, "7")==0 && check7 == 3){
						square[28] = mark;
						check7++;
					}
					else if(strcmp(choice, "7")==0 && check7 == 4){
						square[35] = mark;
						check7++;
					}
					else if(strcmp(choice, "7")==0 && check7 == 5){
						square[42] = mark;
						check7++;
					}
					else {
						printf("\t\t\t\t\tInvalid option !");
						player--;
						getch();
						}
						i = checkWin();
						player++;	
					
				}while(i == -1);
				
				drawBoard(player1, player2);
				
				if(i==1){
					if(player-1==1){
						printf("\t\t\t\t\t==> %s", player1);
					}
					else{
						printf("\t\t\t\t\t==> %s", player2);
					}
					printf(" won.");
					getch();
					do {
						playagain();
						scanf("%s", choice2);
						if(strcmp(choice2, "1")==0){
							int j;
							for(j=0;j<=43;j++){
								square[j] = ' ';
							}
							check1=0;
							check2=0;
							check3=0;
							check4=0;
							check5=0;
							check6=0;
							check7=0;
							i = -1;
						}
						else if(strcmp(choice2, "2")==0 || strcmp(choice2, "3")==0){
							int j;
							for(j=0;j<=43;j++){
								square[j] = ' ';
							}
							check1=0;
							check2=0;
							check3=0;
							check4=0;
							check5=0;
							check6=0;
							check7=0;
							i = -2;
						}
						else{
							printf("\n\t\t\t\t\t   Invalid option !");
							getch();
							i = 5;
						}
					}while(i==5);
				}
				
				//		PlaySound(TEXT("C:\\Users\\dell\\Music\\win.wav"),NULL,SND_SYNC);
				else {
					printf("\t\t\t\t\t==> Game draw");
					getch();
					do {
						playagain();
						scanf("%s", choice2);
						if(strcmp(choice2, "1")==0){
							int j;
							for(j=0;j<=43;j++){
								square[j] = ' ';
							}
							check1=0;
							check2=0;
							check3=0;
							check4=0;
							check5=0;
							check6=0;
							check7=0;
							i = -1;
						}
						else if(strcmp(choice2, "2")==0 || strcmp(choice2, "3")==0){
							int j;
							for(j=0;j<=43;j++){
								square[j] = ' ';
							}
							check1=0;
							check2=0;
							check3=0;
							check4=0;
							check5=0;
							check6=0;
							check7=0;
							i = -2;
						}
						else{
							printf("\n\t\t\t\t\t   Invalid option !");
							getch();
							i = 5;
						}
					}while(i==5);
					
				}
			}while(i!=-2);
		}
		// <------------------------------------------- Player vs AI -------------------------------------------->
		else if(strcmp(choice1, "2")==0){
			system("cls");
			int player = 1, i, j, k, check1=0, check2=0, check3=0, check4=0, check5=0, check6=0, check7=0, block=0;
			char mark, player1[50], player2[50]; // X,O
			printf("\n\n\n\t\t\t\t\tPlese enter your name: ");
			scanf("%s", player1);
			strcpy(player2, "AI001");
			do {
				do {
					drawBoard(player1, player2);
					player = (player % 2) ? 1 : 2;
					mark = (player == 1) ? 'X' : 'O';
					if(player==1){
						printf("\t\t\t\t\t%s",player1);
						printf("(%c), enter the choice : ", mark);
						scanf("%s" ,choice);
					}
					else{
						printf("\t\t\t\t\tAI001(O) turn....\n");
						
						// Naew non
						// Naew tung
						// Naew cheang
						
						if(strcmp(choice, "1")==0){
							number = (rand() % 2)+1;
							if(number==1 && check1<4){
								strcpy(choice, "1");
							}
							else if(number==2 && check2<4){
								strcpy(choice, "2");
							}
							else if(check1>=5 && check2>=5){
								number = (rand() % 5)+3;
								if(number==3 && check3<4){
									strcpy(choice, "3");
								}
								else if(number==4 && check4<4){
									strcpy(choice, "4");
								}
								else if(number==5 && check5<4){
									strcpy(choice, "5");
								}
								else if(number==6 && check6<4){
									strcpy(choice, "6");
								}
								else if(number==7 && check7<4){
									strcpy(choice, "7");
								}
							}
						}
						else if(strcmp(choice, "2")==0){
							number = (rand() % 3)+1;
							if(number==1 && check1<4){
								strcpy(choice, "1");
							}
							else if(number==2 && check2<4){
								strcpy(choice, "2");
							}
							else if(number==3 && check3<4){
								strcpy(choice, "3");
							}
							else if(check1>=5 && check2>=5 && check3>=5){
								number = (rand() % 4)+4;
								if(number==4 && check4<4){
									strcpy(choice, "4");
								}
								else if(number==5 && check5<4){
									strcpy(choice, "5");
								}
								else if(number==6 && check6<4){
									strcpy(choice, "6");
								}
								else if(number==7 && check7<4){
									strcpy(choice, "7");
								}
							}
							
						}
						else if(strcmp(choice, "3")==0){
							number = (rand() % 3)+2;
							if(number==2 && check2<4){
								strcpy(choice, "2");
							}
							else if(number==3 && check3<4){
								strcpy(choice, "3");
							}
							else if(number==4 && check4<4){
								strcpy(choice, "4");
							}
							else if(check2>=5 && check3>=5 && check4>=5){
								number = (rand() % 4)+5;
								if(number==5 && check5<4){
									strcpy(choice, "5");
								}
								else if(number==6 && check6<4){
									strcpy(choice, "6");
								}
								else if(number==7 && check7<4){
									strcpy(choice, "7");
								}
								else if(number==8 && check1<4){
									strcpy(choice, "1");
								}
							}
						}
						else if(strcmp(choice, "4")==0){
							number = (rand() % 3)+3;
							if(number==3 && check3<4){
								strcpy(choice, "3");
							}
							else if(number==4 && check4<4){
								strcpy(choice, "4");
							}
							else if(number==5 && check5<4){
								strcpy(choice, "5");
							}
							else if(check3>=5 && check4>=5 && check5>=5){
								number = (rand() % 4)+6;
								if(number==6 && check6<4){
									strcpy(choice, "6");
								}
								else if(number==7 && check7<4){
									strcpy(choice, "7");
								}
								else if(number==8 && check1<4){
									strcpy(choice, "1");
								}
								else if(number==9 && check2<4){
									strcpy(choice, "2");
								}
							}
						}
						else if(strcmp(choice, "5")==0){
							number = (rand() % 3)+4;
							if(number==4 && check4<4){
								strcpy(choice, "4");
							}
							else if(number==5 && check5<4){
								strcpy(choice, "5");
							}
							else if(number==6 && check6<4){
								strcpy(choice, "6");
							}
							else if(check4>=5 && check5>=5 && check6>=5){
								number = (rand() % 4)+7;
								if(number==7 && check7<4){
									strcpy(choice, "7");
								}
								else if(number==8 && check1<4){
									strcpy(choice, "1");
								}
								else if(number==9 && check2<4){
									strcpy(choice, "2");
								}
								else if(number==10 && check3<4){
									strcpy(choice, "3");
								}
							}
						}
						else if(strcmp(choice, "6")==0){
							number = (rand() % 3)+5;
							if(number==5 && check5<4){
								strcpy(choice, "5");
							}
							else if(number==6 && check6<4){
								strcpy(choice, "6");
							}
							else if(number==7 && check7<4){
								strcpy(choice, "7");
							}
							else if(check5>=5 && check6>=5 && check7>=5){
								number = (rand() % 4)+8;
								if(number==8 && check1<4){
									strcpy(choice, "1");
								}
								else if(number==9 && check2<4){
									strcpy(choice, "2");
								}
								else if(number==10 && check3<4){
									strcpy(choice, "3");
								}
								else if(number==11 && check4<4){
									strcpy(choice, "4");
								}
							}
						}
						else if(strcmp(choice, "7")==0){
							number = (rand() % 2)+6;
							if(number==6 && check6<4){
								strcpy(choice, "6");
							}
							else if(number==7 && check7<4){
								strcpy(choice, "7");
							}
							else if(check6>=5 && check7>=5){
								number = (rand() % 5)+8;
								if(number==8 && check1<4){
									strcpy(choice, "1");
								}
								else if(number==9 && check2<4){
									strcpy(choice, "2");
								}
								else if(number==10 && check3<4){
									strcpy(choice, "3");
								}
								else if(number==11 && check4<4){
									strcpy(choice, "4");
								}
								else if(number==12 && check5<4){
									strcpy(choice, "5");
								}
							}
						}
						getch();
					}
					if(strcmp(choice, "1")==0 && check1 == 0){
						square[1] = mark;
						check1++;
					}
					else if(strcmp(choice, "1")==0 && check1 == 1){
						square[8] = mark;
						check1++;
					}
					else if(strcmp(choice, "1")==0 && check1 == 2){
						square[15] = mark;
						check1++;
					}
					else if(strcmp(choice, "1")==0 && check1 == 3){
						square[22] = mark;
						check1++;
					}
					else if(strcmp(choice, "1")==0 && check1 == 4){
						square[29] = mark;
						check1++;
					}
					else if(strcmp(choice, "1")==0 && check1 == 5){
						square[36] = mark;
						check1++;
					}
					else if(strcmp(choice, "2")==0 && check2 == 0){
						square[2] = mark;
						check2++;
					}
					else if(strcmp(choice, "2")==0 && check2 == 1){
						square[9] = mark;
						check2++;
					}
					else if(strcmp(choice, "2")==0 && check2 == 2){
						square[16] = mark;
						check2++;
					}
					else if(strcmp(choice, "2")==0 && check2 == 3){
						square[23] = mark;
						check2++;
					}
					else if(strcmp(choice, "2")==0 && check2 == 4){
						square[30] = mark;
						check2++;
					}
					else if(strcmp(choice, "2")==0 && check2 == 5){
						square[37] = mark;
						check2++;
					}
					else if(strcmp(choice, "3")==0 && check3 == 0){
						square[3] = mark;
						check3++;
					}
					else if(strcmp(choice, "3")==0 && check3 == 1){
						square[10] = mark;
						check3++;
					}
					else if(strcmp(choice, "3")==0 && check3 == 2){
						square[17] = mark;
						check3++;
					}
					else if(strcmp(choice, "3")==0 && check3 == 3){
						square[24] = mark;
						check3++;
					}
					else if(strcmp(choice, "3")==0 && check3 == 4){
						square[31] = mark;
						check3++;
					}
					else if(strcmp(choice, "3")==0 && check3 == 5){
						square[38] = mark;
						check3++;
					}
					else if(strcmp(choice, "4")==0 && check4 == 0){
						square[4] = mark;
						check4++;
					}
					else if(strcmp(choice, "4")==0 && check4 == 1){
						square[11] = mark;
						check4++;
					}
					else if(strcmp(choice, "4")==0 && check4 == 2){
						square[18] = mark;
						check4++;
					}
					else if(strcmp(choice, "4")==0 && check4 == 3){
						square[25] = mark;
						check4++;
					}
					else if(strcmp(choice, "4")==0 && check4 == 4){
						square[32] = mark;
						check4++;
					}
					else if(strcmp(choice, "4")==0 && check4 == 5){
						square[39] = mark;
						check4++;
					}
					else if(strcmp(choice, "5")==0 && check5 == 0){
						square[5] = mark;
						check5++;
					}
					else if(strcmp(choice, "5")==0 && check5 == 1){
						square[12] = mark;
						check5++;
					}
					else if(strcmp(choice, "5")==0 && check5 == 2){
						square[19] = mark;
						check5++;
					}
					else if(strcmp(choice, "5")==0 && check5 == 3){
						square[26] = mark;
						check5++;
					}
					else if(strcmp(choice, "5")==0 && check5 == 4){
						square[33] = mark;
						check5++;
					}
					else if(strcmp(choice, "5")==0 && check5 == 5){
						square[40] = mark;
						check5++;
					}
					else if(strcmp(choice, "6")==0 && check6 == 0){
						square[6] = mark;
						check6++;
					}
					else if(strcmp(choice, "6")==0 && check6 == 1){
						square[13] = mark;
						check6++;
					}
					else if(strcmp(choice, "6")==0 && check6 == 2){
						square[20] = mark;
						check6++;
					}
					else if(strcmp(choice, "6")==0 && check6 == 3){
						square[27] = mark;
						check6++;
					}
					else if(strcmp(choice, "6")==0 && check6 == 4){
						square[34] = mark;
						check6++;
					}
					else if(strcmp(choice, "6")==0 && check6 == 5){
						square[41] = mark;
						check6++;
					}
					else if(strcmp(choice, "7")==0 && check7 == 0){
						square[7] = mark;
						check7++;
					}
					else if(strcmp(choice, "7")==0 && check7 == 1){
						square[14] = mark;
						check7++;
					}
					else if(strcmp(choice, "7")==0 && check7 == 2){
						square[21] = mark;
						check7++;
					}
					else if(strcmp(choice, "7")==0 && check7 == 3){
						square[28] = mark;
						check7++;
					}
					else if(strcmp(choice, "7")==0 && check7 == 4){
						square[35] = mark;
						check7++;
					}
					else if(strcmp(choice, "7")==0 && check7 == 5){
						square[42] = mark;
						check7++;
					}
					else {
						printf("\t\t\t\t\tInvalid option !");
						player--;
						getch();
						}
						i = checkWin();
						player++;	
						
				}while(i == -1);
				
				drawBoard(player1, player2);
					
				if(i==1){
					if(player-1==1){
						printf("\t\t\t\t\t==> %s", player1);
					}
					else{
						printf("\t\t\t\t\t==> AI001");
					}
					printf(" won.");
					getch();
					do {
						playagain();
						scanf("%s", choice2);
						if(strcmp(choice2, "1")==0){
							int j;
							for(j=0;j<=43;j++){
								square[j] = ' ';
							}
							check1=0;
							check2=0;
							check3=0;
							check4=0;
							check5=0;
							check6=0;
							check7=0;
							i = -1;
						}
						else if(strcmp(choice2, "2")==0 || strcmp(choice2, "3")==0){
							int j;
							for(j=0;j<=43;j++){
								square[j] = ' ';
							}
							check1=0;
							check2=0;
							check3=0;
							check4=0;
							check5=0;
							check6=0;
							check7=0;
							i = -2;
						}
						else{
							printf("\n\t\t\t\t\t   Invalid option !");
							getch();
							i = 5;
						}
					}while(i==5);
				}
				
				//		PlaySound(TEXT("C:\\Users\\dell\\Music\\win.wav"),NULL,SND_SYNC);
				else {
					printf("\t\t\t\t\t==> Game draw");
					getch();
					do {
						playagain();
						scanf("%s", choice2);
						if(strcmp(choice2, "1")==0){
							int j;
							for(j=0;j<=43;j++){
								square[j] = ' ';
							}
							check1=0;
							check2=0;
							check3=0;
							check4=0;
							check5=0;
							check6=0;
							check7=0;
							i = -1;
						}
						else if(strcmp(choice2, "2")==0 || strcmp(choice2, "3")==0){
							int j;
							for(j=0;j<=43;j++){
								square[j] = ' ';
							}
							check1=0;
							check2=0;
							check3=0;
							check4=0;
							check5=0;
							check6=0;
							check7=0;
							i = -2;
						}
						else{
							printf("\n\t\t\t\t\t   Invalid option !");
							getch();
							i = 5;
						}
					}while(i==5);
					
				}
			}while(i!=-2);
				
		}
		// <------------------------------------------ tutorial ------------------------------------------------->
		else if(strcmp(choice1, "3")==0){
			tutorial();
			i = 6;
		}
		// <------------------------------------------ Quit ----------------------------------------------------->
		else if(strcmp(choice1, "4")==0){
			return 0;
		}
		else{
			printf("\n\t\t\t\t\t   Invalid option !");
			getch();
			i = 6;
		}
	}while((i==6 || strcmp(choice2, "2")==0) && strcmp(choice2, "3")!=0);
	
	return 0;
}

int checkWin(){
	int j,k,draw=0;
	// Naew Non
	for(j=0;j<6;j++){
		for(k=0;k<4;k++){
			if(square[1+k+j*7] == square[2+k+j*7] && square[2+k+j*7] == square[3+k+j*7] && square[3+k+j*7] == square[4+k+j*7] && square[1+k+j*7] != ' ' && square[2+k+j*7] != ' ' && square[3+k+j*7] != ' ' && square[4+k+j*7] != ' ')
				return 1;
		}
	}
	// Naew Tung
	for(j=0;j<7;j++){
		for(k=0;k<3;k++){
			if(square[1+j+k*7] == square[8+j+k*7] && square[8+j+k*7] == square[15+j+k*7] && square[15+j+k*7] == square[22+j+k*7] && square[1+j+k*7] != ' ' && square[8+j+k*7] != ' ' && square[15+j+k*7] != ' ' && square[22+j+k*7] != ' ')
			return 1;
		}
	}
	// Naew Cheang
	for(j=0;j<3;j++){
		for(k=0;k<4;k++){
			if(square[1+k+7*j] == square[9+k+7*j] && square[9+k+7*j] == square[17+k+7*j] && square[17+k+7*j] == square[25+k+7*j] && square[1+k+7*j] != ' ' && square[9+k+7*j] != ' ' && square[17+k+7*j] != ' ' && square[25+k+7*j] != ' ')
				return 1;
		}
	}
	for(j=0;j<3;j++){
		for(k=0;k<4;k++){
			if(square[4+k+7*j] == square[10+k+7*j] && square[10+k+7*j] == square[16+k+7*j] && square[16+k+7*j] == square[22+k+7*j] && square[4+k+7*j] != ' ' && square[10+k+7*j] != ' ' && square[16+k+7*j] != ' ' && square[22+k+7*j] != ' ')
				return 1;
		}
	}
	for(j=1;j<=42;j++){
		if(square[j]==' '){
			draw+=1;
		}
	}
	if(draw==0){
		printf("%d", draw);
		return 0;
	}
	return -1;
}

char drawBoard(char player1[50], char player2[50]){
	system("cls");
	printf("\n\t\t\t\t\t\t\t MoNoFobia \n\n");
	if(strcmp(player2, "AI001")==0){
		printf("\t\t\t\t\t\tPlayer:%s (X) - %s (O) \n\n\n",player1,player2);
	}
	else{
		printf("\t\t\t\t\t    Player1:%s (X) - Player2:%s (O) \n\n\n",player1,player2);
	}
	printf("\t\t\t\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
	printf("\t\t\t\t\t _________________________________________\n");
	printf("\t\t\t\t\t|     |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", square[36], square[37], square[38], square[39], square[40], square[41], square[42]);
	printf("\t\t\t\t\t|_____|_____|_____|_____|_____|_____|_____|\n");
	printf("\t\t\t\t\t|     |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", square[29], square[30], square[31], square[32], square[33], square[34], square[35]);
	printf("\t\t\t\t\t|_____|_____|_____|_____|_____|_____|_____|\n");
	printf("\t\t\t\t\t|     |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", square[22], square[23], square[24], square[25], square[26], square[27], square[28]);
	printf("\t\t\t\t\t|_____|_____|_____|_____|_____|_____|_____|\n");
	printf("\t\t\t\t\t|     |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", square[15], square[16], square[17], square[18], square[19], square[20], square[21]);
	printf("\t\t\t\t\t|_____|_____|_____|_____|_____|_____|_____|\n");
	printf("\t\t\t\t\t|     |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", square[8], square[9], square[10], square[11], square[12], square[13], square[14]);
	printf("\t\t\t\t\t|_____|_____|_____|_____|_____|_____|_____|\n");
	printf("\t\t\t\t\t|     |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |\n", square[1], square[2], square[3], square[4], square[5], square[6], square[7]);
	printf("\t\t\t\t\t|_____|_____|_____|_____|_____|_____|_____|\n\n");
}

void playagain(){
	system("cls");
	printf("\n\n\n\n\t\t\t\t\t[1] Play Again\n");
	printf("\n\n\t\t\t\t\t[2] Main Menu\n");
	printf("\n\n\t\t\t\t\t[3] Quit\n");
	printf("\n\n\t\t\t\t\t ==> Choose your choice: ");
}

void mainMenu(){
	system("cls");
	printf("\n\n\n\n\n\t\t\t\t\t\t MoNoFobia 4 in A line!");
	printf("\n\n\n\n\t\t\t\t\t[1] Player vs Player\n");
	printf("\n\n\t\t\t\t\t[2] Player vs AI\n");
	printf("\n\n\t\t\t\t\t[3] Tutorial\n");
	printf("\n\n\t\t\t\t\t[4] Quit\n");
	printf("\n\n\t\t\t\t\t ==> Choose your choice: ");
}

void tutorial(){
	system("cls");
	printf("\n\t\t\t\t\t  There are two types of marks: X/O \n\t\t\t\t\tSelect these numbers to drop your mark. \n\t\t\t\t      If the number you selected already has a mark\n\t\t\t    Your mark will be in the previous row of that mark. (above that mark)\n");
	printf("\t\t\t\t\t   |     |     |     |     |     |     |   \n");
	printf("\t\t\t\t\t   V     V     V     V     V     V     V   \n");
	printf("\t\t\t\t\t|  1  |  2  |  3  |  4  |  5  |  6  |  7  |\n");
	printf("\t\t\t\t\t _________________________________________\n");
	printf("\t\t\t\t\t|     |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|     |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|_____|_____|_____|_____|_____|_____|_____|\n");
	printf("\t\t\t\t\t|     |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|     |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|_____|_____|_____|_____|_____|_____|_____|\n");
	printf("\t\t\t\t\t|     |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|  X  |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|_____|_____|_____|_____|_____|_____|_____|\n");
	printf("\t\t\t\t\t|     |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|  O  |  X  |  O  |     |     |     |     |\n");
	printf("\t\t\t\t\t|_____|_____|_____|_____|_____|_____|_____|\n");
	printf("\t\t\t\t\t|     |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|  O  |  O  |  X  |     |     |     |     |\n");
	printf("\t\t\t\t\t|_____|_____|_____|_____|_____|_____|_____|\n");
	printf("\t\t\t\t\t|     |     |     |     |     |     |     |\n");
	printf("\t\t\t\t\t|  X  |  O  |  X  |  X  |     |     |     |\n");
	printf("\t\t\t\t\t|_____|_____|_____|_____|_____|_____|_____|\n");
	getch();
	system("cls");
	printf("\n\n\t\t\t\t\t\t\tHow to win?\n\n\n");
	printf("\n\t\t\tYou need to find a way to keep your mark aligned as in the example below.\n\n\n\n\n");
	printf("          _____ \t                             \t                       _____ \t     _____                   \n");
	printf("         |     |\t                             \t                      |     |\t    |     |                  \n");
	printf("         |  X  |\t                             \t                      |  X  |\t    |  X  |                  \n");
	printf("         |_____|\t                             \t                 _____|_____|\t    |_____|_____             \n");
	printf("         |     |\t     _____ _____ _____ _____ \t                |     |      \t          |     |            \n");
	printf("         |  X  |\t    |     |     |     |     |\t                |  X  |      \t          |  X  |            \n");
	printf("     (1) |_____|\t(2) |  X  |  X  |  X  |  X  |\t(3)        _____|_____|      \t(4)       |_____|_____       \n");
	printf("         |     |\t    |_____|_____|_____|_____|\t          |     |            \t                |     |      \n");
	printf("         |  X  |\t                             \t          |  X  |            \t                |  X  |      \n");
	printf("         |_____|\t                             \t     _____|_____|            \t                |_____|_____ \n");
	printf("         |     |\t                             \t    |     |                  \t                      |     |\n");
	printf("         |  X  |\t                             \t    |  X  |                  \t                      |  X  |\n");
	printf("         |_____|\t                             \t    |_____|                  \t                      |_____|\n");
	getch();
}
