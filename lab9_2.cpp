//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream source;
    ofstream dest ("cheerbook_copy.txt");
    source.open("cheerbook.txt");
    string textline;
    dest << "-------------------- SOTUS ---------------------" << endl; 
    while (getline(source,textline)){
         dest << textline << endl;
    }

    dest << "-------------------- SOTUS ---------------------";
    source.close();
    dest.close();

    return 0;
}