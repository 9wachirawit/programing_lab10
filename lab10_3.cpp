
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    string nstr;

    double m,sd = 0,sum = 0,sumx,i=0;
    ifstream source;
    source.open("score.txt");
    while(getline(source,nstr)){
        sum += atof(nstr.c_str());
        sumx = atof(nstr.c_str());
        sd += pow(sumx,2);
        i += 1;
    }
    m = sum / i;
    


        cout << "Number of data = " << i ;
        cout << setprecision(3);
        cout << "\nMean = " << m;
         cout << setprecision(3);
        cout << "\nStandard deviation = "<< sqrt((sd/i) - pow(m,2));
}
