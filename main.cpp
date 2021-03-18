#include <iostream>
#include <iomanip> 

using namespace std; 

/* This function will return the win loss %. User will input the 
number of wins and losses for the season*/ 
double winLossPercentage(int w, int l) {

double pct;
pct = (double) w / (w + l); 

return (pct);

}
int main ()

{
   
    int w;
    int l;
    double pct; 

cout << "Enter the number wins: ";
cin >> w; 
cout << "Enter the number of losses: "; 
cin >> l; 
pct = winLossPercentage( w, l); 
cout << fixed << setprecision(2);
cout << "Win percentage is: " << pct * 100 << endl;

return 0;



}