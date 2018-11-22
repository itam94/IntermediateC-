#include <fstream>
#include<iostream>
#include <sstream>

using namespace std;

    int main(int argc, char const *argv[])
    {
        /* code */
        ifstream mainReadStream;
        ofstream mainWriteStream;
        int totalAmount;
        string name;
        string toAdd;
        string lastAmount;
        string line;


        mainReadStream.open("/home/mateusz/VSC/c++c/four/donation_total.txt");
        while(getline(mainReadStream,line)){
            totalAmount = stoi(line);
        }
        mainReadStream.close();
        stringstream userString;

        cin >> name >>toAdd;
        cout << toAdd;
        totalAmount += stoi(toAdd);

        mainWriteStream.open("/home/mateusz/VSC/c++c/four/donation_total.txt",ios_base::app);
        mainWriteStream << endl << totalAmount;

        mainWriteStream.close();




        return 0;
    }

