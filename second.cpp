#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <iomanip>

using namespace std;

int main()
{
    system("clear");

    cout << setw(58) << "WELCOME TO PERSON GPT TO EFFECTIVELY COMMMUNICATE" << endl;
    cout << setw(45) << "I am The Second Person GPT" << endl
         << endl;
    cout << setw(59) << "/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/" << endl;
    cout << setw(59) << "/----------------Message Detail--------------------/" << endl;
    cout << setw(59) << "/-----------------Persons GPT----------------------/" << endl;
    cout << setw(59) << "/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/" << endl;

    string name;

    while (true)
    {
        ifstream input1;
        input1.open("first_person.txt");

        string alpha1;
        getline(input1, alpha1);

        while ((alpha1[0] >= 'A' && alpha1[0] <= 'Z') || (alpha1[0] >= 'a' && alpha1[0] <= 'z'))
        {

            cout << '/' << setw(20) << setiosflags(ios::internal)
                 << "Message ( " << alpha1 << " )" << endl;
            cout << "/--------------------------------------------------------------/" << endl;

            cout << '/' << setw(30) << "Recieved at ( " << __TIME__ << " ) " << __DATE__ << setw(11) << '/' << endl;
            cout << "/--------------------------------------------------------------/" << endl;
            input1.close();
            ofstream second_outputss;
            second_outputss.open("first_person.txt");
            second_outputss << '{';
            second_outputss.close();
            input1.open("first_person.txt");
            getline(input1, alpha1);
        }
        ifstream check;
        string myvar;
        check.open("second_person.txt");
        getline(check, myvar, '\n');
        if (!(myvar[0] == '{'))
        {
            cout << endl
                 << endl
                 << "Send a message or only press Enter to receive a message :-)  ";
            while (!(getline(cin, name, '\n')))
                ;
            {
                cout << endl;
                if (name[0] != '\n')
                {
                    system("clear");

                    cout << setw(58) << "WELCOME TO PERSON GPT TO EFFECTIVELY COMMMUNICATE" << endl;
                    cout << setw(45) << "I am The Second Person GPT" << endl
                         << endl;
                    cout << setw(59) << "/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/" << endl;
                    cout << setw(59) << "/----------------Message Detail--------------------/" << endl;
                    cout << setw(59) << "/-----------------Persons GPT----------------------/" << endl;
                    cout << setw(59) << "/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/" << endl;
                    cout << endl
                         << endl;

                    cout << "/--------------------------------------------------------------/" << endl;

                    cout << '/' << setw(38) << "Sent Message" << setw(25) << '/' << endl
                         << '/' << setw(63) << '/'
                         << endl;
                    cout << '/' << setw(20) << setiosflags(ios::internal)
                         << "Message (" << name << ")" << setw(10) << endl;
                    cout << "/--------------------------------------------------------------/" << endl;

                    cout << '/' << setw(30) << "Recieved at ( " << __TIME__ << " ) " << __DATE__ << setw(11) << '/' << endl;
                    cout << "/--------------------------------------------------------------/" << endl;
                }
                ifstream message;
                message.open("first_person.txt");
                string messages;
                getline(message, messages);

                if ((messages[0] >= 'A' && messages[0] <= 'Z') || (messages[0] >= 'a' && messages[0] <= 'z'))
                {
                    system("clear");

                    cout << setw(58) << "WELCOME TO PERSON GPT TO EFFECTIVELY COMMMUNICATE" << endl;
                    cout << setw(45) << "I am The Second Person GPT" << endl
                         << endl;
                    cout << setw(59) << "/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/" << endl;
                    cout << setw(59) << "/----------------Message Detail--------------------/" << endl;
                    cout << setw(59) << "/-----------------Persons GPT----------------------/" << endl;
                    cout << setw(59) << "/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/" << endl;
                    cout << endl
                         << endl;

                    cout << "/--------------------------------------------------------------/" << endl;
                    cout << '/' << setw(40) << "Recieved a Message" << setw(23) << '/' << endl
                         << '/' << setw(63) << '/'
                         << endl;
                }
                message.close();
            }

            input1.open("first_person.txt");
            getline(input1, alpha1);

            while ((alpha1[0] >= 'A' && alpha1[0] <= 'Z') || (alpha1[0] >= 'a' && alpha1[0] <= 'z'))
            {
                cout << '/' << setw(20) << setiosflags(ios::internal)
                     << "Message ( " << alpha1 << " )" << endl;
                cout << "/--------------------------------------------------------------/" << endl;

                cout << '/' << setw(30) << "Recieved at ( " << __TIME__ << " ) " << __DATE__ << setw(11) << '/' << endl;
                cout << "/--------------------------------------------------------------/" << endl;
                input1.close();
                ofstream second_outputss;
                second_outputss.open("first_person.txt");
                second_outputss << '{';
                second_outputss.close();
                input1.open("first_person.txt");
                getline(input1, alpha1);
            }
        }

        ofstream output;
        ifstream input;
        output.open("second_person.txt");
        input.open("first_person.txt");

        if (output.is_open())
        {
            {
                output << name << endl;
                output.close();

                string alpha;
                getline(input, alpha);

                while ((alpha[0] >= 'A' && alpha[0] <= 'Z') || (alpha[0] >= 'a' && alpha[0] <= 'z'))
                {
                    cout << '/' << setw(20) << setiosflags(ios::internal)
                         << "Message ( " << alpha << " )" << endl;
                    cout << "/--------------------------------------------------------------/" << endl;

                    cout << '/' << setw(30) << "Recieved at ( " << __TIME__ << " ) " << __DATE__ << setw(11) << '/' << endl;
                    cout << "/--------------------------------------------------------------/" << endl;
                    input.close();
                    ofstream second_output;
                    second_output.open("first_person.txt");
                    second_output << '{';
                    second_output.close();
                    input.open("first_person.txt");
                    getline(input, alpha);
                }
            }
        }
    }
}