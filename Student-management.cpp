#include <iostream>
using namespace std;
string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];

int total = 0;

void enter()
{
    int reciveStudents;

    cout << "How many students data you want to enter!!!" << endl;
    cout << "Enter here :\t";
    cin >> reciveStudents;
    if (total == 0)
    {
        /* code */

        total = total + reciveStudents;
        for (int i = 0; i < reciveStudents; i++)
        {
            cout << "\n Enter DATA of Student :" << i + 1 << endl
                 << endl;
            cout << "Enter the name" << endl;
            cin >> arr1[i];
            cout << "Enter the roll" << endl;
            cin >> arr2[i];
            cout << "Enter the Course" << endl;
            cin >> arr3[i];
            cout << "Enter the class" << endl;
            cin >> arr4[i];
            cout << "Enter the Contact" << endl;
            cin >> arr5[i];
        }
    }
    else
    {
        /* Cannot use total = total + reciveStudents; here because it will 
        Start the Count from here and effect wil happen in next for loop

        */
        //While User ENTERING the value as second time
        for (int i = total; i < total + reciveStudents; i++)
        {
            cout << "\n Enter DATA of Student :" << i + 1 << endl
                 << endl;
            cout << "Enter the name" << endl;
            cin >> arr1[i];
            cout << "Enter the roll" << endl;
            cin >> arr2[i];
            cout << "Enter the Course" << endl;
            cin >> arr3[i];
            cout << "Enter the class" << endl;
            cin >> arr4[i];
            cout << "Enter the Contact" << endl;
            cin >> arr5[i];
        }
        total = total + reciveStudents;
        /* Need to use total here to remain the totalnormal */
    }
}

void show()
{
    if (total==0)
    {
        cout<< "ENTER the RECORD PLEASE !!!!!!" <<endl;
            
        /* code */
    }else{
    

    for (int i = 0; i < total; i++)
    {
        cout << " Data of STudent : " << i + 1 << endl
             << endl;
        cout << " Name of the Student : " << arr1[i] << endl;
        cout << "Roll : " << arr2[i] << endl;
        cout << "Course :" << arr3[i] << endl;
        cout << "Class :" << arr4[i] << endl;
        cout << "Contact :" << arr5[i] << endl;

        /* code */
    }
    }
}
void search()
{
    string rollNo;
    cout << "Enter Roll number of student" << endl;
    cin >> rollNo;

    for (int i = 0; i < total; i++)
    {
        if (rollNo == arr2[i])
        {
            /* code */
            cout << " Data of STudent : " << i + 1 << endl
                 << endl;
            cout << " Name of the Student : " << arr1[i] << endl;
            cout << "Roll : " << arr2[i] << endl;
            cout << "Course :" << arr3[i] << endl;
            cout << "Class :" << arr4[i] << endl;
            cout << "Contact :" << arr5[i] << endl;
        }

        /* code */
    }
}
void update()
{

    string rollNo;
    cout << "Enter Roll number of student" << endl;
    cin >> rollNo;

    for (int i = 0; i < total; i++)
    {
        if (rollNo == arr2[i])
        {
            cout << "******PREVIOUS DATA*******" << endl;

            /* code */
            cout << " Data of STudent : " << i + 1 << endl
                 << endl;
            cout << " Name of the Student : " << arr1[i] << endl;
            cout << "Roll : " << arr2[i] << endl;
            cout << "Course :" << arr3[i] << endl;
            cout << "Class :" << arr4[i] << endl;
            cout << "Contact :" << arr5[i] << endl;

            cout << "\n ******Enter new DATA :" << endl;
            cout << "Enter the name" << endl;
            cin >> arr1[i];
            cout << "Enter the roll" << endl;
            cin >> arr2[i];
            cout << "Enter the Course" << endl;
            cin >> arr3[i];
            cout << "Enter the class" << endl;
            cin >> arr4[i];
            cout << "Enter the Contact" << endl;
            cin >> arr5[i];
        }

        /* code */
    }
}
void deleteData()
{
    if (total==0)
    {
        cout<< "NO DATA is FOUND" <<endl;
            
        /* code */
    }else{
    

   int deleTe;
   cout<< "*******Press 1 to DELETE FULL RECORD****" <<endl;
   cout<< "*******Press 2 to DELETE FULL Specific record****" <<endl;
       cin>>deleTe;
       if (deleTe==1)
       {
           total=0;
           cout<<" All is deleted ^^/0"  <<endl;
               
           /* code */
       }else if(deleTe==2)
       {
          string roLL;
          cout<< "Enter Rollnumber that you want to DELETE!!" <<endl;
          cin>>roLL;
          for (int i = 0; i < total; i++)
          {
            if (roLL==arr2[i])
            {
                for ( int j = i; j < total; j++)
                {
                    /* code */
                    arr1[j]=arr1[j+1];
                    arr2[j]=arr2[j+1];
                    arr3[j]=arr3[j+1];
                    arr4[j]=arr4[j+1];
                    arr5[j]=arr5[j+1];
                }
                total--;
                cout<< "Your REcord is deleted...!!!" <<endl;
                    
                
                /* code */
            }
            
             
          }
          

       }
       
    }

}

int main()
{
    int value;
    while (true)
    {
        /* code */
        cout << "Press 1 to enter data" << endl;
        cout << "Press 2 to show data" << endl;
        cout << "Press 3 to  search data" << endl;
        cout << "Press 4 to update data" << endl;
        cout << "Press 5 to delete data" << endl;
        cout << "Press 6 to exit!!!!!!!" << endl;
        cout << "Enter here :\t";
        cin >> value;
        switch (value)
        {
        case 1:
            enter();
            /* code */
            break;
        case 2:
            show();
            /* code */
            break;
        case 3:
            search();
            /* code */
            break;
        case 4:
            update();
            /* code */
            break;
        case 5:
            deleteData();
            /* code */
            break;

        case 6:
            exit(0);
            /* code */
            break;

        default:
            cout << "Ivadil INPUT!!!!!" << endl;

            break;
        }
    }

    return 0;
}