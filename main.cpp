
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
    double infinalVelocity;
    double ininitialVelocity;
    double inacceleration;
    double intime;
    double indisplacement;
    int choice;




int main(){
    string continues;
    bool isRunning= true;
    do{

;
       // cout << fixed << setprecision(2);
    cout << "\nEquations of Motion Solver\n";
    cout << "\nEnter 0 for the unknown variable\n";
    cout << "\n****************************************\n";
    cout << "1. Solve for v\n";
    cout << "2. Solve for u\n";
    cout << "3. Solve for a\n";
    cout << "4. Solve for t\n";
    cout << "5. Solve for s\n";
    cout << "\nEnter choice: ";
    cin >> choice;
    cout << "\n****************************************";



    if(choice==1){
  cout << "\n1. Solve for final velocity\n ";
  cout << "\n****************************************";
  finalvelocitys();



    ///////////////////////////////////////////


    }
    else if(choice==2){
  cout << "\n2. Solve for initial velocity\n ";
  cout << "\n****************************************";
         initialvelocitys();


    }
       else if(choice==3){
        cout << "\n3. Solve for acceleration\n ";
        accelerations();
        cout << "\n****************************************";



    }
       else if(choice==4){
     cout << "\n4. Solve for time\n ";
     cout << "\n****************************************";

     times();





    }
       else if(choice==5){
        cout << "\n5. Solve for displacement\n ";
        cout << "\n****************************************";
        displacements();



    }else{

          cout << "\nOption is not found!!";
          cout << "\n****************************************";

    }






    /////////////////////////////////////////////////////finished======





     cout << "\nDo you wish to continue? 1 for YES 0 for NO:";
    // cout << "\n****************************************";
    cin>> continues;
    if(continues=="1"){

 cout << "\nEquations of Motion Solver\n";
    cout << "\nEnter 0 for the unknown variable\n";
    cout << "\n****************************************\n";
    cout << "1. Solve for v\n";
    cout << "2. Solve for u\n";
    cout << "3. Solve for a\n";
    cout << "4. Solve for t\n";
    cout << "5. Solve for s\n";
    cout << "\nEnter choice: ";
     cout << "\n****************************************";
    cin >> choice;
    cout << "\n****************************************";



    ///////////////////////////////////////////

    if(choice==1){
  cout << "\n1. Solve for final velocity\n ";
   cout << "\n****************************************";
  finalvelocitys();
   isRunning = false;

    }
    else if(choice==2){
cout << "\n2. Solve for initial velocity\n ";
 cout << "\n****************************************";
         initialvelocitys();
            isRunning = false;


    }
       else if(choice==3){
        cout << "\n3. Solve for acceleration\n ";
         cout << "\n****************************************";
            accelerations();

   isRunning = false;

    }
       else if(choice==4){
     cout << "\n4. Solve for time\n ";

     times();


   isRunning = false;
    }
       else if(choice==5){
        cout << "\n5. Solve for displacement\n ";
         cout << "\n****************************************";
        displacements();

   isRunning = false;

    }else{

          cout << "\nOption is not found!!";
           cout << "\n****************************************";
             isRunning = false;

    }






    /////////////////////////////////////////////////////





    /////////////////////////////////////////////////////



    }
    else if(continues=="0"){
 cout << "\nYou quited thanks for visiting!!\n ";
  cout << "\n****************************************";
 isRunning=false;

    }
    else if(continues.empty()){
        cout << "\nPlease try to insert a value\n !!";
         cout << "\n****************************************";
        isRunning=false;


    }else{
        cout << "\nInvalid input please try again!!\n ";
         cout << "\n****************************************";
        isRunning=false;
    }





}while(isRunning);




    EquationsOfMotion equations(infinalVelocity,ininitialVelocity,inacceleration,intime,indisplacement);

                equations.getfinalVelocity();
                 equations.getinitialVelocity();
                  equations.getacceleration();
                   equations.gettime();
                    equations.getdisplacement();


}







