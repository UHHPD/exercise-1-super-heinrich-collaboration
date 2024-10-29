#include <iostream>
#include <fstream>
int main(){
    std::ifstream inputfile("daten.txt");
    std::ofstream outputfile("datensumme.txt");
    double a, b;
    double sum;
    while (inputfile >> a >> b)
    {
    sum = a+b;
    std::cout << "Summe: " << sum << std::endl;
    outputfile << " " << sum << std::endl;
    }
    inputfile.close();
    outputfile.close();
}