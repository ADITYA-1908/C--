// // basic array access
// #include <bits/stdC++.h>
// using namespace std;
// int main(){
//     int arr[3];
//     cout << "Enter array element number ";
//     cin >> arr[0] >> arr[1] >> arr[2];
//     cout << "print array element number ";
//     cout << arr[0]<< " " << arr[1]<< " " << arr[2];
//     cout << endl;
//     cout << "print updated array element number ";
//     arr[0]+=5;
//     cout << arr[0]<< " " << arr[1]<< " " << arr[2];
  

//     return 0;
// }




// //integer array
// #include <bits/stdC++.h>
// using namespace std;
// int main(){
//     int arr[5];
//     cout << "Enter array elements : ";
//     for(int i=0; i<5; i++){
//         cin >> arr[i];
//     }
//     cout << "array elements are: ";
//     for(int i=0; i<5; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }




//2D Array
#include <bits/stdc++.h> 
using namespace std;
int main(){
    int arr[2][3];
    cout << "Enter array elements : ";
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }
    cout << "array elements are: " << endl;
   for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

