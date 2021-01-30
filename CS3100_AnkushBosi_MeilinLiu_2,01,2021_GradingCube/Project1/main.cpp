//CS3100 / 5100: Data Structures and Algorithms Spring 2021
//Programming Assignment #1


#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cassert>
#include <string>

using namespace std;



//function decerations

int reading_From_Keyboard();
int reading_From_InputFile();
int my_Strcmp(string string_1, string string_2);
int string_Comparision();
int menu();


int main() {

    cout << "Hello World!" << endl;
    menu();
    return 0;
}



int menu()
{
    int user_Option;
    while (1) {
        cout << "Choose any option" << endl;
        cout << "1 Read a specified number of the strings (last names) from the keyboard, and display them on the screen" << endl;
        cout << "2 Read a specified number of the strings (last names) from the inputFile, and display them on the screen" << endl;
        cout << "3 Read two strings (last names) from the keyboard, and test if the first string is less than, equal to, or larger than the second string, and display the testing result to the screen" << endl;
        cout << "4 Quit" << endl;
        cin >> user_Option;
        if (user_Option == 4)
        {
            break;
        }
        else {
            switch (user_Option) {
            case  1: reading_From_Keyboard();
                break;
            case  2: reading_From_InputFile();
                break;
            case  3: string_Comparision();
                break;
                //case  4: break;
            }
        }

    }
    return 0;
}





int reading_From_Keyboard() {
    string string_Name;
    int lowerLimit, upperLimit,i;
    cout << "reading funtion 1" << endl;
    cout << "Enter the string" << endl;
    cin >> string_Name;
    //cout << "The entered string is " << string_Name << endl;
     cout << "Enter the lower limit" << endl;
     cin >> lowerLimit;
     cout << "Enter the upper limit" << endl;
     cin >> upperLimit;
        for(i = lowerLimit; i <= upperLimit; i++) {
            cout << string_Name[i] << endl;
        }
    return 0;
}

//

int reading_From_InputFile() {
    cout << "reading funtion from file 2" << endl;

    return 0;
}



int my_Strcmp(string string_1, string string_2) {

    int result = 0;
    int count1 = 0; 
    int count2 = 0;
    for (int i = 0; i < string_1.length(); i++) {
        count1++;
    }
    for (int j = 0; j < string_2.length(); j++) {
        count2++;
    }
    if (count1 > count2) {
        return 1;
    }
    else if (count1 < count2) {
        return 2;
    }
    else return 0;

    return 0;
}



int string_Comparision() {

    string my_String_1, my_String_2;
    int my_String_Cmp;
    cout << "sring function 3" << endl;
    cout << "enter the first string" << endl;
    cin >> my_String_1;
    cout << "enter the second string" << endl;
    cin >> my_String_2;
    my_String_Cmp = my_Strcmp(my_String_1, my_String_2);
    if (my_String_Cmp == 1) {

        cout << "String 1 is greater than string 2" << endl;

    }
    else if (my_String_Cmp == 2) {

        cout << "String 1 is less than string 2" << endl;

    }
    else if(my_String_Cmp == 0 ) {

        cout << "Both the string are equal" << endl;

    }

    return 0;
}



