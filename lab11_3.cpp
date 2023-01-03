#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    ifstream source;
	source.open("score.txt");
	double M , S , A , A2 ; 
	int N = 0 ;
	string textline ;
	while (getline(source,textline))
	{
        A = A+stof(textline) ; 
        A2 = A2+pow(stof(textline),2) ;
	    N++ ;
	}
	M = A/N ;
    S = sqrt((A2/N)-pow(M,2)) ;
    cout << "Number of data = " << N <<"\n";
    cout << setprecision(3);
    cout << "Mean = " << M << "\n" ;
    cout << "Standard deviation = " << S << "\n";
}