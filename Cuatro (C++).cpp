//  prog2Cuatro.cpp
//
//  Created 2/5/2020 by Miran Member for CS 141 program 2.
//  System: Windows
// Miran Member
#include <iostream>
#include <cctype>
using namespace std;
char p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16; // the only global varibles
void displayInstructions() // displayes the instrunctions fo the game and how to play.
{
    cout << "Welcome to the game of Cuatro, where you try to complete a set      \n"
         << "of four pieces that are alike.  Players take turns making moves.    \n"
         << "On each move your OPPONENT chooses the piece, then YOU get to       \n"
         << "place it on the board.  If you create a set of four alike when      \n"
         << "you place your piece, then you win!       \n"
         << "\n"
         << "A set of four alike can be completed by using four all upper (or all\n"
         << "lower) case characters, four all vowels (or all consonants), or four\n"
         << "all curved (or all straight-lined). Curved letters are 'O' and 'C'\n"
         << "(upper or lower), and straight-line letters are 'I' and 'Z' (upper or\n"
         << "lower). Groups of four can be created in a row, column, diagonal, or\n"
         << "corner quadrant.\n"
         << "\n"
         << "When prompted for input you may also enter 'x' or 'X' to exit." << endl;
}
void displayBoard(int LO,int Lo,int LC,int Lc,int LI,int Li,int LZ,int Lz){ // displayed updated board each time the mail loop runs and uses all the charcters to see if they were used before.
    cout << endl;
    cout << "      "<< "---------" << "   "  << "Square #" << endl
         << "     | " << p1 << " " << p2 << " " << p3 << " " << p4 << " |" << "  1  2  3  4" << endl
         << "     | " << p5 << " " << p6 << " " << p7 << " " << p8 << " |" << "  5  6  7  8" << endl
         << "     | " << p9 << " " << p10 << " " << p11 << " " << p12 << " |" << "  9 10 11 12" << endl
         << "     | " << p13 << " " << p14 << " " << p15 << " " << p16 << " |" << " 13 14 15 16" << endl
         << "      "<< "---------" << endl
         << "       " << "Pieces:     Curved Straight" << endl
         << "           " << "Upper: "; (LO == 0)? cout << "OO":(LO == -1 )? cout << " O": cout << "  "; cout <<"/"; (LC == 0)? cout << "CC":(LC == -1 )? cout << " C": cout << "  "; cout << "  ";(LI == 0)? cout << "II":(LI == -1 )? cout << " I": cout << "  "; cout << "/"; (LZ == 0)? cout << "ZZ":(LZ == -1 )? cout << " Z": cout << "  "; cout << endl
         << "           " << "Lower: "; (Lo == 0)? cout << "oo":(Lo == -1 )? cout << " o": cout << "  "; cout <<"/"; (Lc == 0)? cout << "cc":(Lc == -1 )? cout << " c": cout << "  "; cout << "  ";(Li == 0)? cout << "ii":(Li == -1 )? cout << " i": cout << "  "; cout << "/"; (Lz == 0)? cout << "zz":(Lz == -1 )? cout << " z": cout << "  "; cout << endl
         << "                 Vowel/Consonant" << endl;
    // displayes the chracters it uses if and else statements to see if the letter were used before, if they were used bfore than it displays only one character

}
void makeMove(int position, char& letter) { // updates all the p values from the input
    if (position == 1) { //checks what the postion of p was from the input
        p1 = letter; // assings that letter that was put in input to that p
    }
    else if (position == 2) {
        p2 = letter;
    }
    else if (position == 3) {
        p3 = letter;
    }
    else if (position == 4) {
        p4 = letter;
    }
    else if (position == 5) {
        p5 = letter;
    }
    else if (position == 6) {
        p6 = letter;
    }
    else if (position == 7) {
        p7 = letter;
    }
    else if (position == 8) {
        p8 = letter;
    }
    else if (position == 9) {
        p9 = letter;
    }
    else if (position == 10) {
        p10 = letter;
    }
    else if (position == 11) {
        p11 = letter;
    }
    else if (position == 12) {
        p12 = letter;
    }
    else if (position == 13) {
        p13 = letter;
    }
    else if (position == 14) {
        p14 = letter;
    }
    else if (position == 15) {
        p15 = letter;
    }
    else if (position == 16) {
        p16 = letter;
    }
}
bool isStraight(char p) { // for winning conditions checkes weather the letter are staright if they are it ruturns trur or else it returns false
    if (p == 'I' || p == 'i' || p == 'Z' || p =='z') {
        return true;
    }
    else {
        return false;
    }
}
bool isCurved(char p) { // for winning conditions checks weather the letter are curved and if they are the funcion returns true or else false
    if (p == 'C' || p == 'c' || p == 'O' || p =='o') {
        return true;
    }
    else {
        return false;
    }
}
bool isVowel(char p) { // for winning conditions checks if the letter are Vowels
    if (p == 'O' || p == 'o' || p == 'I' || p =='i') {
        return true;
    }
    else {
        return false;
    }
}
bool isConsonant(char p) { // for winning conditions and checked weather the letter are consonants
    if (p == 'C' || p == 'c' || p == 'Z' || p =='z') {
        return true;
    }
    else {
        return false;
    }
}
void checkRow(int& win) { // for winning conditions checks all the rows with islower, is upper, isstraight, is curved, is vowel, and is consonant if any of the condion is true it rturns win = 1
    if ((p1 != '.' && p2 !='.' && p3 != '.' && p4 != '.') || (p5 != '.' && p6 !='.' && p7 != '.' && p8 != '.') || (p9 != '.' && p10 !='.' && p11 != '.' && p12 != '.') || (p13 != '.' && p14 !='.' && p15 != '.' && p16 != '.')) {
        if ((islower(p1)&&islower(p2)&&islower(p3)&&islower(p4)) || (islower(p5)&&islower(p6)&&islower(p7)&&islower(p8)) || (islower(p9)&&islower(p10)&&islower(p11)&&islower(p12)) || (islower(p13)&&islower(p14)&&islower(p15)&&islower(p16))) {
            win = 1;
        }
        else if ((isupper(p1)&&isupper(p2)&&isupper(p3)&&isupper(p4)) || (isupper(p5)&&isupper(p6)&&isupper(p7)&&isupper(p8)) || (isupper(p9)&&isupper(p10)&&isupper(p11)&&isupper(p12)) || (isupper(p13)&&isupper(p14)&&isupper(p15)&&isupper(p16))){
            win = 1;
        }
        else if ((isStraight(p1)&&isStraight(p2)&&isStraight(p3)&&isStraight(p4)) || (isStraight(p5)&&isStraight(p6)&&isStraight(p7)&&isStraight(p8)) || (isStraight(p9)&&isStraight(p10)&&isStraight(p11)&&isStraight(p12)) || (isStraight(p13)&&isStraight(p14)&&isStraight(p15)&&isStraight(p16))) {
            win = 1;
        }
        else if ((isCurved(p1)&&isCurved(p2)&&isCurved(p3)&&isCurved(p4)) || (isCurved(p5)&&isCurved(p6)&&isCurved(p7)&&isCurved(p8)) || (isCurved(p9)&&isCurved(p10)&&isCurved(p11)&&isCurved(p12)) || (isCurved(p13)&&isCurved(p14)&&isCurved(p15)&&isCurved(p16))) {
            win = 1;
        }
        else if ((isVowel(p1)&&isVowel(p2)&&isVowel(p3)&&isVowel(p4)) || (isVowel(p5)&&isVowel(p6)&&isVowel(p7)&&isVowel(p8)) || (isVowel(p9)&&isVowel(p10)&&isVowel(p11)&&isVowel(p12)) || (isVowel(p13)&&isVowel(p14)&&isVowel(p15)&&isVowel(p16))) {
            win = 1;
        }
        else if ((isConsonant(p1)&&isConsonant(p2)&&isConsonant(p3)&&isConsonant(p4)) || (isConsonant(p5)&&isConsonant(p6)&&isConsonant(p7)&&isConsonant(p8)) || (isConsonant(p9)&&isConsonant(p10)&&isConsonant(p11)&&isConsonant(p12)) || (isConsonant(p13)&&isConsonant(p14)&&isConsonant(p15)&&isConsonant(p16))) {
            win =1;
        }
    }
}
void checkVerticle(int& win) {// for winning conditions checks all the veritcle lines with islower, is upper, isstraight, is curved, is vowel, and is consonant if any of the condion is true it rturns win = 1
    if ((p1 != '.' && p5 !='.' && p9 != '.' && p13 != '.') || (p2 != '.' && p6 !='.' && p10 != '.' && p14 != '.') || (p3 != '.' && p7 !='.' && p11 != '.' && p15 != '.') || (p4 != '.' && p8 !='.' && p12 != '.' && p16 != '.')) {
        if ((islower(p1)&&islower(p5)&&islower(p9)&&islower(p13)) || (islower(p2)&&islower(p6)&&islower(p10)&&islower(p14)) || (islower(p3)&&islower(p7)&&islower(p11)&&islower(p15)) || (islower(p4)&&islower(p8)&&islower(p12)&&islower(p16))) {
            win = 1;
        }
        else if ((isupper(p1)&&isupper(p5)&&isupper(p9)&&isupper(p13)) || (isupper(p2)&&isupper(p6)&&isupper(p10)&&isupper(p14)) || (isupper(p3)&&isupper(p7)&&isupper(p11)&&isupper(p15)) || (isupper(p4)&&isupper(p8)&&isupper(p12)&&isupper(p16))){
            win = 1;
        }
        else if ((isStraight(p1)&&isStraight(p5)&&isStraight(p9)&&isStraight(p13)) || (isStraight(p2)&&isStraight(p6)&&isStraight(p10)&&isStraight(p14)) || (isStraight(p3)&&isStraight(p7)&&isStraight(p11)&&isStraight(p15)) || (isStraight(p4)&&isStraight(p8)&&isStraight(p12)&&isStraight(p16))) {
            win = 1;
        }
        else if ((isCurved(p1)&&isCurved(p5)&&isCurved(p9)&&isCurved(p13)) || (isCurved(p2)&&isCurved(p6)&&isCurved(p10)&&isCurved(p14)) || (isCurved(p3)&&isCurved(p7)&&isCurved(p11)&&isCurved(p15)) || (isCurved(p4)&&isCurved(p8)&&isCurved(p12)&&isCurved(p16))) {
            win = 1;
        }
        else if ((isVowel(p1)&&isVowel(p5)&&isVowel(p9)&&isVowel(p13)) || (isVowel(p2)&&isVowel(p6)&&isVowel(p10)&&isVowel(p14)) || (isVowel(p3)&&isVowel(p7)&&isVowel(p11)&&isVowel(p15)) || (isVowel(p4)&&isVowel(p8)&&isVowel(p12)&&isVowel(p16))) {
            win = 1;
        }
        else if ((isConsonant(p1)&&isConsonant(p5)&&isConsonant(p9)&&isConsonant(p13)) || (isConsonant(p2)&&isConsonant(p6)&&isConsonant(p10)&&isConsonant(p14)) || (isConsonant(p3)&&isConsonant(p7)&&isConsonant(p11)&&isConsonant(p15)) || (isConsonant(p4)&&isConsonant(p8)&&isConsonant(p12)&&isConsonant(p16))) {
            win =1;
        }

    }
}
void checkQuad(int& win) { // for winning conditions checks all the four corners of the board with islower, is upper, isstraight, is curved, is vowel, and is consonant if any of the condion is true it rturns win = 1
    if ((p1 != '.' && p2 !='.' && p5 != '.' && p6 != '.') || (p9 != '.' && p10 !='.' && p13 != '.' && p14 != '.') || (p3 != '.' && p4 !='.' && p7 != '.' && p8 != '.') || (p11 != '.' && p12 !='.' && p15 != '.' && p16 != '.')) {
        if ((islower(p1)&&islower(p2)&&islower(p5)&&islower(p6)) || (islower(p9)&&islower(p10)&&islower(p13)&&islower(p14)) || (islower(p3)&&islower(p4)&&islower(p7)&&islower(p8)) || (islower(p11)&&islower(p12)&&islower(p15)&&islower(p16))) {
            win = 1;
        }
        else if ((isupper(p1)&&isupper(p2)&&isupper(p5)&&isupper(p6)) || (isupper(p9)&&isupper(p10)&&isupper(p13)&&isupper(p14)) || (isupper(p3)&&isupper(p4)&&isupper(p7)&&isupper(p8)) || (isupper(p11)&&isupper(p12)&&isupper(p15)&&isupper(p16))){
            win = 1;
        }
        else if ((isStraight(p1)&&isStraight(p2)&&isStraight(p5)&&isStraight(p6)) || (isStraight(p9)&&isStraight(p10)&&isStraight(p13)&&isStraight(p14)) || (isStraight(p3)&&isStraight(p4)&&isStraight(p7)&&isStraight(p8)) || (isStraight(p11)&&isStraight(p12)&&isStraight(p15)&&isStraight(p16))) {
            win = 1;
        }
        else if ((isCurved(p1)&&isCurved(p2)&&isCurved(p5)&&isCurved(p6)) || (isCurved(p9)&&isCurved(p10)&&isCurved(p13)&&isCurved(p14)) || (isCurved(p3)&&isCurved(p4)&&isCurved(p7)&&isCurved(p8)) || (isCurved(p11)&&isCurved(p12)&&isCurved(p15)&&isCurved(p16))) {
            win = 1;
        }
        else if ((isVowel(p1)&&isVowel(p2)&&isVowel(p5)&&isVowel(p6)) || (isVowel(p9)&&isVowel(p10)&&isVowel(p13)&&isVowel(p14)) || (isVowel(p3)&&isVowel(p4)&&isVowel(p7)&&isVowel(p8)) || (isVowel(p11)&&isVowel(p12)&&isVowel(p15)&&isVowel(p16))) {
            win = 1;
        }
        else if ((isConsonant(p1)&&isConsonant(p2)&&isConsonant(p5)&&isConsonant(p6)) || (isConsonant(p9)&&isConsonant(p10)&&isConsonant(p13)&&isConsonant(p14)) || (isConsonant(p3)&&isConsonant(p4)&&isConsonant(p7)&&isConsonant(p8)) || (isConsonant(p11)&&isConsonant(p12)&&isConsonant(p15)&&isConsonant(p16))) {
            win =1;
        }
    }
}
void checkAcross(int& win){ // for winning conditions checks all the across with islower, is upper, isstraight, is curved, is vowel, and is consonant if any of the condion is true it rturns win = 1
    if ((p1 != '.' && p6 !='.' && p11 != '.' && p16 != '.') || (p4 != '.' && p7 !='.' && p10 != '.' && p13 != '.')){
        if ((islower(p1)&&islower(p6)&&islower(p11)&&islower(p16)) || (islower(p4)&&islower(p7)&&islower(p10)&&islower(p13))) {
            win = 1;
        }
        else if ((isupper(p1)&&isupper(p6)&&isupper(p11)&&isupper(p16)) || (isupper(p4)&&isupper(p7)&&isupper(p10)&&isupper(p13))) {
            win = 1;
        }
        else if ((isStraight(p1)&&isStraight(p6)&&isStraight(p11)&&isStraight(p16)) || (isStraight(p4)&&isStraight(p7)&&isStraight(p10)&&isStraight(p13))) {
            win = 1;
        }
        else if ((isVowel(p1)&&isVowel(p6)&&isVowel(p11)&&isVowel(p16)) || (isVowel(p4)&&isVowel(p7)&&isVowel(p10)&&isVowel(p13))) {
            win = 1;
        }
        else if ((isCurved(p1)&&isCurved(p6)&&isCurved(p11)&&isCurved(p16)) || (isCurved(p4)&&isCurved(p7)&&isCurved(p10)&&isCurved(p13))) {
            win = 1;
        }
        else if ((isConsonant(p1)&&isConsonant(p6)&&isConsonant(p11)&&isConsonant(p16)) || (isConsonant(p4)&&isConsonant(p7)&&isConsonant(p10)&&isConsonant(p13))) {
            win = 1;
        }
    }
}
void checkBoard(int& win) { //runs all the winning conditions funcions and returns win with 1 if any of them are true
    checkRow(win);
    checkVerticle(win);
    checkQuad(win);
    checkAcross(win);
}
void checkLetter(char letter,bool valid,bool& letter_valid,int& LO,int& Lo,int& LC,int& Lc,int& LI,int& Li,int& LZ,int& Lz) { // checks weather the letter was used before

    if (letter == 'O' && valid) { // compares the input letter with o and if its valid position
        LO--; // if its valid than it reduces the numver LO which in turn makes o disappaer from the board
        if (LO <= -3)// if it is used more than 2 times than letter_valid becomes true which raises an error
            letter_valid =true;
    }
    else if (letter == 'o'&& valid) {// all the following are for each type of letter
        Lo--;
        if (Lo <= -3)
            letter_valid = true;
    }
    else if (letter == 'C'&& valid) {
        LC--;
        if (LC <= -3)
            letter_valid = true;
    }
    else if (letter == 'c'&& valid) {
        Lc--;
        if (Lc <= -3)
            letter_valid = true;
    }
    else if (letter == 'I'&& valid) {
        LI--;
        if (LI <= -3)
            letter_valid = true;
    }
    else if (letter == 'i'&& valid) {
        Li--;
        if (Li <= -3)
            letter_valid = true;
    }
    else if (letter == 'Z'&& valid) {
        LZ--;
        if (LZ <= -3)
            letter_valid = true;
    }
    else if (letter == 'z'&& valid) {
        Lz--;
        if (Lz <= -3)
            letter_valid = true;
    }
}
void checkMove(int position, bool& valid) { // checks weather if the postion alrady has a letter on it or not, if it does the valif bool becomes true which raises error and stops the player
    if (position == 1) {
        position = p1;
    }
    else if (position == 2) {
        position = p2;
    }
    else if (position == 3) {
        position = p3;
    }
    else if (position == 4) {
        position = p4;
    }
    else if (position == 5) {
        position = p5;
    }
    else if (position == 6) {
        position = p6;
    }
    else if (position == 7) {
        position = p7;
    }
    else if (position == 8) {
        position = p8;
    }
    else if (position == 9) {
        position = p9;
    }
    else if (position == 10) {
        position = p10;
    }
    else if (position == 11) {
        position = p11;
    }
    else if (position == 12) {
        position = p12;
    }
    else if (position == 13) {
        position = p13;
    }
    else if (position == 14) {
        position = p14;
    }
    else if (position == 15) {
        position = p15;
    }
    else if (position == 16) {
        position = p16;
    }
    if (position == '.'){
        valid = true;
    }
    else {
        valid = false;
    }
}

int main(){
    displayInstructions();
    p1=p2=p3=p4=p5=p6=p7=p8=p9=p10=p11=p12=p13=p14=p15=p16='.';
    int LO=0;int Lo=0;int LC=0;int Lc=0;int LI=0;int Li=0;int LZ=0;int Lz=0;
    int pieceToMove = 1;           // '1' gets the first move
    int moveNumber = 1; // keeps track of the moves and if no one wins than it breaks the loop after 16 times because 16 spaces on the board
    int win = 0; // win is 0 in the start unless win condition is detected than it becomes 1 which would use break; to get out of the loop
    int position; // for input of position
    char letter; // for input of letter
    displayBoard(LO,Lo,LC,Lc,LI,Li,LZ,Lz); // siplay board requires all the letters and since they are not global i have to put them in the parenthesis
    bool valid;
    bool letter_valid;

    while(true) { // loop runs forever unless the winning condions or the move > 16
        valid = true; // each loop valid is intialiez to true
        letter_valid=false;// each loop letter_valid is true
        cout << moveNumber << ". Player ";(pieceToMove == 1) ? cout << 1 : cout << 2;cout << " enter piece, and Player ";(pieceToMove == 1) ? cout << 2 : cout << 1;cout << " enter destination:";// alternates between 1 and 2 player
        cin >> letter >> position; // takes in user input
        if (letter == 'x' || letter == 'X') { // checks if the user entered the exiting condition
            break;
        }
        else if (((letter != 'o' && letter != 'O') && (letter != 'c' && letter != 'C')) &&
                 ((letter != 'i' && letter != 'I') && (letter != 'z' && letter != 'Z'))) { // checked weather the letter is valid or not
            cout << "*** Sorry, that is an invalid piece.  Please retry." << endl;
            displayBoard(LO,Lo,LC,Lc,LI,Li,LZ,Lz);;
            continue;
        }
        else if(!(position > 0 && position < 17)){ // checkes if the position is valid and if not then the continue; loops again
            cout << "*** Sorry, that destination is invalid.  Please retry." << endl;
            displayBoard(LO,Lo,LC,Lc,LI,Li,LZ,Lz);;
            continue;
        }
        else if (position !=0) {
            checkMove(position,valid); // runs the checkmove which will return false if the postion is taken
            checkLetter(letter,valid,letter_valid,LO,Lo,LC,Lc,LI,Li,LZ,Lz); //checked weather the letter was used before or not
            if (letter_valid) { // letter_valid would return true if player used letter already and so it raises the error.
                cout << "*** Sorry, that is an invalid piece.  Please retry." << endl;
                displayBoard(LO,Lo,LC,Lc,LI,Li,LZ,Lz);;
                continue;
            }
            if (valid){ // only makes move if the letter is valid and if not than it raises the error and promps the user to enter diffrent postion
                makeMove(position, letter);
            }
            else {
                cout << "*** Sorry, that destination is occupied.  Please retry." << endl;
                displayBoard(LO,Lo,LC,Lc,LI,Li,LZ,Lz);;
                continue;
            }// make the move to place teh character on the board
            checkBoard(win);      //checks the board for winning condition
            if (win == 1) { //if win is detected then it displays the board and prints out the messege and return 0 to end the game
                displayBoard(LO,Lo,LC,Lc,LI,Li,LZ,Lz);;
                cout << endl;
                cout << "*** Player ";((pieceToMove == 1) ? cout << 2 : cout << 1 );cout << " you won!" << endl;// if win was detected then the game stops
                return 0;
            }
            // the game continues if the win flag was not set to 1
            if (pieceToMove == 1) {
                pieceToMove = 2;
            } else {
                pieceToMove = 1;

            }
        }

        displayBoard(LO,Lo,LC,Lc,LI,Li,LZ,Lz);;    //display the current board

        moveNumber++;// increases the movenumber each time the loop is successfully run
        if (moveNumber == 17) { // if no one won the game it ends the game
            return 0;
        }

    }
    cout << "Exiting program..." << endl;
    return 0;
}
