#include <iostream> 
 
using namespace std; 
/* program to calculate how much to stake per trade */ 
int main() 
{ 
    double Capital, Risk; 
    char sign; 
 
    cout<<"Enter capital amount:"<<endl; 
        cin>> Capital; 
    cout <<" Enter risk percentage: "<<endl; 
        cin>> Risk ; 
 
      double R = Risk ; 
           R = R *= 0.01; 
      double Cap = Capital; 
   double riskCapital = Cap * R; 
        double C; 
        int increment = 0; 
      double NR = Risk; 
    double NewRisk = NR*=0.01; 
        cout<<""<<endl; 
cout<<"First trade should be taken with a risk of: "<<Capital * R<<"$"<<endl; 
        cout<<""<<endl; 
     for( C = 0; Cap> 0; C++ ){ 
       Cap =  Cap - (NewRisk*Cap); 
 
           increment ++; 
    if (C==0) { 
 
            cout<<"After "<<increment<<" loss capital left = "<< Cap<<"$"<<endl; 
            cout<<Risk<<"% of new capital is = "<< NewRisk * Cap <<"$"<<endl; 
            cout<<""<<endl; 
 
    } else if (C>=0 && C<=5){ 
 
     cout<<"After "<<increment<<" losses capital left = "<< Cap<<"$"<<endl; 
     cout<<Risk<<"% of new capital is = "<< NewRisk * Cap <<"$"<<endl; 
                 cout<<""<<endl; 
 
} 
}  
    return 0; 
}
