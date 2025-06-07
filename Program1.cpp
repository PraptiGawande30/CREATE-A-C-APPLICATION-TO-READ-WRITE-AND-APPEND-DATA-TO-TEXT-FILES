#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string filename = "example.txt";
    int choice;

    cout << "Text File Operations Menu:\n";
    cout << "1. Write to File (overwrite)\n";
    cout << "2. Append to File\n";
    cout << "3. Read from File\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    cin.ignore();

    if (choice == 1) 
    {
        ofstream outfile(filename);
        string data;
        cout << "Enter text to write to the file:\n";
        getline(cin, data);
        outfile << data << endl;
        outfile.close();
        cout << "Data written to file successfully.\n";

    } 
    else if (choice == 2)
    {
        ofstream outfile(filename, ios::app);
        string data;
        cout << "Enter text to append to the file:\n";
        getline(cin, data);
        outfile << data << endl;
        outfile.close();
        cout << "Data appended to file successfully.\n";

    }
    else if (choice == 3) 
    {
        ifstream infile(filename);
        string line;
        cout << "Contents of the file:\n";
        while (getline(infile, line)) {
            cout << line << endl;
        }
        infile.close();

    } 
    else
    {
        cout << "Invalid choice.\n";
    }

    return 0;
}
