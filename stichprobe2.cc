#include <iostream>
#include <fstream>
#include <cmath>
int main()
{
    std::ifstream inputfile("datensumme.txt");
    std::ifstream inputfile2("datensumme.txt");
    std::ofstream outputfile("mittelwerte.txt");
    std::ofstream outputfile2("varianzen.txt");

    double a,var_half,c;
    double b=0;
    double mean_mean = 0;
    double var_mean = 0;

    for (int i = 0; i < 26; i++)
    {
        double mean= 0;
        double var=0;
            for (int i = 0; i < 9; i++)
            {
                inputfile >> a;
                mean += a/9;   
            }
            for (int i = 0; i < 9; i++)
            {
                inputfile2 >> c;
                var_half = (c-mean)*(c-mean);
                var += var_half/9;
            }
        std::cout << "Mean: " << mean << std::endl;
        std::cout << "Variance: " << var << std::endl;
        outputfile << "" << mean << std::endl;
        outputfile2 << "" << var << std::endl;
        mean_mean += mean/26;
        var_mean += var/26;
    }
    std::cout << "Mean of mean: " << mean_mean << std::endl;
    std::cout << "Mean of Variance: " << var_mean << std::endl;
    inputfile.close();
    inputfile2.close();
    outputfile.close();
    outputfile2.close();
}