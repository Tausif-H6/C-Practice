#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 56, 66, 88};
    arr[4] = 40;
    arr[5] = 7778;
    arr[0] = 55555;
    string names[]={"Tausif ","Ayaz","Rafi ", "Mokhtar"};

    for (int i = 0; i < sizeof(names); i++)
    {
        cout<<names[i]<<endl;
        if (names[0]=="Tausif")
        {
            cout<<"Matched"  <<endl;
                
            /* code */
        }
        
            
        /* code */
    }
    
    // for (int i = 0; i < 6; i++)

    // {
    //     /* code */
    //     cout << arr[i] << endl;
//     // }
//   int i=0;
//     while (i <7)
//     {
//         i++;
//         cout<< "numbers is "<<arr[i]  <<endl;
            
//         /* code */
//     }
    

    return 0;
}