//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int count=0;
    float sum=0,eachSum;
    string textline;

    ifstream source("score.txt");
    while (getline(source,textline)){
        eachSum += pow(atof(textline.c_str()),2);
        sum += atof(textline.c_str());
        count++;
    }
    cout << "Number of data = " << count << endl;
    float avg = sum/count;
    cout << "Mean = " << avg << endl;
    float deviation = sqrt((eachSum/count)-pow(avg,2));
    cout << "Standard deviation = " << deviation << endl;

    source.close();

    return 0;
}