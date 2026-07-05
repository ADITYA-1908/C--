// //String array
// #include <bits/stdC++.h>
// using namespace std;
// int main(){
//     string arr[5];
//     cout << "Enter array of strings : ";
//     for(int i=0; i<5; i++){
//         cin >> arr[i];
//     }
//     cout << "array of strings are: ";
//     for(int i=0; i<5; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



#include <bits/stdC++.h>
using namespace std;
int main(){
   string str="Aditya";
   
   int l= str.length();
   for(int i=0; i<l; i++){
     cout << str[i];
   }
     cout << endl;
  
    str[0]='a';
    for(int i=0; i<l; i++){
     cout << str[i];
   }
    return 0;
}

