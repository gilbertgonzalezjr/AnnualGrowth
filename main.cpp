/* 
 * Assignment:   Annual Growth
 * Author: Gilberto Gonzalez
 * Class & Section: CSCE 121-517
 *
 * Created on January 19, 2019, 7:59 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
/*Initiating variables*/
    string firstName;
    string lastName;
    int birthYear;
    int feet;
    int inches;
    int userAge;
    int feetToInches;
    double feetToCenti;
    double inchToCenti;
    double HeightInCenti;
    double avgGrowth;
/*Getting Inputs*/
    cout<<"First name: ";
    cin>>firstName;
    cout<<"Last name: ";
    cin>>lastName;
    cout<<"Birth year: ";
    cin>>birthYear;
    cout<<"Height in feet (do not include inches): ";
    cin>>feet;
    cout<<"Height in inches (do not include feet): "<<endl;
    cin>>inches;
    
/*creating constant for this year*/
     int year=2019;
    
/*User's Age*/
    userAge=year-birthYear;
    
/*Feet and Inches to Centimeters*/
    feetToInches=feet*12;
    feetToCenti=feetToInches*2.54;
    inchToCenti=inches*2.54;
    HeightInCenti=feetToCenti+inchToCenti;
    
/*AverageGrowth of user without counting height in birth*/
    avgGrowth=(HeightInCenti-51)/userAge;
    
/*Outputs*/    
    cout<<"Hello "<< firstName<<" "<<lastName<<"."<<endl;
    cout<<"You are "<<userAge<< " years old in " << year<<"."<<endl;
    cout<<"Your height is "<< HeightInCenti<<" cm."<<endl; 
    cout<<"You grew an average of "<<avgGrowth<< " cm per year (assuming you were 51 cm at birth)."<<endl;

    return 0;
}

