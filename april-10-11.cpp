#include<iostream>
using namespace std;
int main()
{
    int cm, meter, kilometer;

    cout << " \n\n Convert length in meter and kilometer : \n";
    cout << "----------------------------------------------\n";

    cout << " Enter length in centimeter : ";
    cin >> cm;

    meter = (cm/100);
    kilometer = (cm/100000);

    cout << "Your entered length in centimeter is " <<cm <<" and converted it into meter is : "<< meter<< " meter and in kilometer : " <<kilometer << " kilometer"<< endl;
    return 0;
}
