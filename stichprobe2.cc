#include <iostream>
#include <fstream>
#include <cmath>
int main(){
    std::ifstream inputfile("datensumme.txt");
    std::ifstream inputfile2("datensumme.txt");
    std::ofstream outputfile("mittelwerte.txt");
    std::ofstream outputfile2("varianzen.txt");

    double a,var_half,c;
    double b=0;

for (int i = 0; i < 26; i++){
    double mean= 0;
    double var=0;
    for (int i = 0; i < 9; i++){
        inputfile >> a;
        mean += a/9;   
    }
    for (int i = 0; i < 9; i++){
        inputfile2 >> c;
        var_half = (c-mean)*(c-mean);
        var += var_half;
    }
    std::cout << "Mean: " << mean << std::endl;
    std::cout << "Variance: " << var/9 << std::endl;
    outputfile << "" << mean << std::endl;
    outputfile2 << "" << var/9 << std::endl;
}
inputfile.close();
inputfile2.close();
outputfile.close();
outputfile2.close();
}