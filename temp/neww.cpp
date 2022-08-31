// C++ program to print name
// as output
// #include <iostream>
// using namespace std;

// // Driver code
// int main()
// {
//     int time;

//     cout << "Enter the time: ";
//     cin >> time;
//     if (time>=9 and time<=18)
//     {
//         cout << "working hour " << time; 
//     }
//     else
//     {
//         cout << "not working time  " << time;
//     }
    

    
//     return 0;
// }
// // int main()
// // {
// //     int a,b,c;
// //     cin >>a>>b;
// //     c= (a*b)/2;
// //     cout <<"area is"<< c;
// //     return 0;
// // }
// int main()
// {
//     int n=0;
    
//     if (n<10){
//         cout<<"hello";
//     }
//     // cin>> ( n);
//     // cout<<"sum is" << (n*(n+1)/2)<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    cout <<"Enter hours" ;
    int n ;
    cin >> n ;
    if (n<=9 && n>=18)
    {
        cout << "not a working hours";
    }
    else {
        cout << "working hour " << n;
    
    }
return 0;
}
 