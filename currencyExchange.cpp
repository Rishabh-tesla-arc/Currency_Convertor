#include "iostream"
#include "vector"
#include "string"
#include "cctype"
using namespace std;
int main()
{
    //Taking the names of currency...
    vector<string> currency;
    currency.push_back("USD");
    currency.push_back("EUR");
    currency.push_back("YEN");
    currency.push_back("GPB");
    currency.push_back("CAD");
    currency.push_back("AUD");
    currency.push_back("DRM");
    currency.push_back("NZD");
    currency.push_back("KWD");
    currency.push_back("CYN");



    //Taking the fixed values of each currencies...
    vector<float> currencyValue;
    currencyValue.push_back(0.012);
    currencyValue.push_back(0.011);
    currencyValue.push_back(1.71);
    currencyValue.push_back(0.0095);
    currencyValue.push_back(0.016);
    currencyValue.push_back(0.018);
    currencyValue.push_back(0.045);
    currencyValue.push_back(0.020);
    currencyValue.push_back(0.0037);
    currencyValue.push_back(0.087);



    bool flag=false;   //flag variable to check whether entered currency name exists or not...
    float rValue;
    string cur;
    cout <<"Welcome to Exchange Rate Office..." << endl;
    cout <<"USD,EUR,YEN,GBP,CAD,AUD,DRM,NZD,KWD,CYN" << endl;
    cout <<"I want to exchange Rupees for :  ";
    cin>>cur;



    //converting to upper_case (dealing with case-sensitivity)
    for (char &i: cur) {
        i = toupper(i);
    }



    //Checking if the entered Currency exists or not...
    int index=-1;
    for (int i = 0; i < currency.size(); ++i) {
        if(currency[i]==cur)
        {
            index=i;
            flag = true;
        }
    }



    if(flag)  //if currency Exists... then money will be asked to enter otherwise appropriate message is display
    {
        cout << "Enter: Rs ";
        cin >> rValue;

        cout << "Your Money: " << "Rs " << rValue << " = " << cur <<" "<< rValue * currencyValue[index] << endl;
    }
    else
        cout << "Sorry, Currency Doesn't exist in our Database "<<endl;


    system("pause>0");
}