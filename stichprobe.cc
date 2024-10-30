#include <iostream>
#include <fstream>
#include <cmath>
int main(){
    std::ifstream inputfile("datensumme.txt");
    // std::ofstream outputfile("datensumme.txt");
    double a,var_half,i;
    double b=0;
    double sum= 0;
    double var=0;
    while (inputfile >> a)
    {
        for (i=0;i<90;i++){
            i+=1;
            b+=1;
            sum += a;
        }
        double mean = sum/b;
        std::cout << "Mean: " << mean << std::endl;
    }
    
    
    
    inputfile.close();
    inputfile.open("datensumme.txt");

    while (inputfile >> a)
    {
        var_half = (a-mean)*(a-mean);
        var += var_half;
    }
    std::cout << "Variance: " << var/b << std::endl;
    std::cout << "Standard deviation: " << sqrt(var/b) << std::endl;
    inputfile.close();

}