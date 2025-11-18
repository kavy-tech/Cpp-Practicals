#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "Kavy Vashishtha 25HEL2118 " << endl;
    ofstream outfile("Writefile.txt");
    ifstream infile("Readfile.txt");

    char ch;

    while (infile.get(ch))
    {

        if (ch != ' ' && ch != '\n')
        {

            outfile << ch;
        }
    }

    outfile.close();
    infile.close();
}