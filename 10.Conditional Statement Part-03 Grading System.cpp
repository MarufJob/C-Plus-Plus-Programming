#include <iostream>
using namespace std;

int main() {
int a;
    cout <<"Give a number 0-100 calculate grade = ";
    cin >>a;
    
    if (100>=a && a>=80)
        cout <<"Grade A+";
        
    else if (80>a && a>=70)
        cout <<"Grade A";
    
    else if (70>a && a>=60)
        cout <<"Grade A-";
        
    else  if (60>a && a>=50)
        cout <<"Grade B";
        
    else  if (50>a && a>=40)
        cout <<"Grade C";
        
    else  if (40>a && a>=33)
        cout <<"Grade D";
        
    else  if (33>a && a>=0)
        cout <<"Grade F";
        
    else
        cout <<"Give valid number";
    
    return 0;


}
/*
Input:Give a number 0-100 calculate grade = 85
Output:Grade A+

Input:Give a number 0-100 calculate grade = 444
Output:Give valid number
*/
