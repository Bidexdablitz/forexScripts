#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
    double entryLev, riskLev ,cash, pipNum, pipNum2, lotSize, target, tradeMag, tradeMag2; 
    cout <<"Enter entry level value:"<<endl; 
    cin>> entryLev; 
 
    cout<<"Enter level value for stop loss:"<<endl; 
    cin>> riskLev; 
 
    cout<<"Enter amount to risk"<<endl; 
      cin>> cash; 
         pipNum = (entryLev - riskLev) /0.0001; 
    cout <<""<<endl; 
    cout <<""<<endl; 
     pipNum2 = pipNum; 
    if (pipNum < 0){ 
      lotSize = cash/ (pipNum2*=-10); 
      }else{lotSize = cash/ (pipNum2*=10); 
      } 
 
    if ( pipNum < 0) { 
       cout<< "Open Sell limit @:"; 
        cout << "Entry: "<< entryLev<<endl; 
        cout<< "SL: "<<riskLev<<endl; 
        cout<<"Lotsize: " <<lotSize<<endl; 
        cout<< "Pips risked = "<<pipNum*-1<<" pips"<<endl; 
    } else{ 
          cout<< "Open Buy limit @:"; 
        cout << "Entry: "<< entryLev<<endl; 
        cout<< "SL: "<<riskLev<<endl; 
        cout<<"Lotsize: " <<lotSize<<endl; 
        cout<< "Pips risked = "<<pipNum<<" pips"<<endl; 
    } 
    cout <<""<<endl; 
    cout <<""<<endl; 
 
 
    cout<<"Enter target level:"<<endl; 
    cin>>target; 
    cout <<""<<endl; 
    cout <<""<<endl; 
    tradeMag = (target - entryLev)/0.0001; 
    tradeMag2 = tradeMag; 
    if (tradeMag < 0){ 
      cout<<"Trade is "<<tradeMag2*-1<<" pips "<<endl; 
      cout<<"Trade R:R is "<< (tradeMag2*-1)/(pipNum*-1)<<endl; 
    } else{ 
         cout<<"Trade is "<<tradeMag2<<" pips "<<endl; 
      cout<<"Trade R:R is "<< (tradeMag2)/(pipNum)<<endl; 
    } 
 
 
 
    return 0; 
}
