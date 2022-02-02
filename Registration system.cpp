// Registration system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>


using namespace std; 



class Student {
public:
    string name, faculty;
    int ID;
    


    Student(string sName, int sID, string sFaculty) {
        name = sName;
        faculty = sFaculty;
        ID = sID;
    }
};

bool isLoggedin() 
{

    string username, un, password , pw;

    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream read( username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int choice; 
    Student one("Oluwanifemi Ajayi", 201652476, "science");

    cout << "1: Register\n2: Login\n3. Forgot password\nYour choice: "; cin >> choice;
    if (choice == 1)
    {
        string username, password;
        cout << "select a username: "; cin >> username;
        cout << "select a password: "; cin >> password;

        ofstream file;
        file.open( username + ".txt");
        file << username << endl << password;
        file.close();

        main();

    }
    else if (choice == 2)
    {
        bool status = isLoggedin();

        if (!status)
        {
            cout << "False Login" << endl;
            system("PAUSE");
            return 0;
        }
        else
        {
            cout << "Succefully logged in" << endl;
            system("PAUSE");
            return 1;
        }
        
    }
    else if (choice == 3)
    {
        string username, un, pw;

        cout << "Enter username: ";
        cin >> username;

        ifstream read(username + ".txt");
        getline(read, un);
        getline(read, pw);

        if (username == un)
        {
            cout <<"password is: " << pw << endl;
        }
    }

    main();
    
}

