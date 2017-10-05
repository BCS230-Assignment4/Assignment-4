//
//  main.cpp
//  Assignment 4
//
//  Created by Ryan Livingston on 10/5/17.
//  Copyright © 2017 Ryan Livingston. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "PatientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"

using namespace std;

void printCost(PatientAccount&);
void printMenu();
void clearScreen();

int main() {
    
    PatientAccount patient;
    Surgery operation;
    Pharmacy meds;
    
    int menu, surgeryMenu, pharmMenu;
    
    clearScreen();
   do       
   {    printMenu();
       cin >> menu;
       
       switch (menu) {
           case 1:
               clearScreen();
               patient.calcStayCost();
               clearScreen();
               printCost(patient);
               break;
           case 2:
               clearScreen();
               cout << "*************** OPERATIONS ***************\n";
               cout << "***          1. Hand Surgery           ***\n";
               cout << "***          2. Spinal Surgery         ***\n";
               cout << "***          3. Brain Surgery          ***\n";
               cout << "***          4. Heart Surgery          ***\n";
               cout << "***          5. Knee Surgery           ***\n";
               cout << "******************************************\n";
               cout << "\t\tSelect a surgery (1-5): ";
               cin >> surgeryMenu;
               switch (surgeryMenu) {
                   case 1:
                       operation.Hand(patient);
                       break;
                   case 2:
                       operation.Spinal(patient);
                       break;
                   case 3:
                       operation.Brain(patient);
                       break;
                   case 4:
                       operation.Cardiac(patient);
                       break;
                   case 5:
                       operation.Knee(patient);
                       break;
                   default:
                       cout << "\t\t\tInvalid Choice!\n";
                       break;
               }
               cout << "***      Press enter to continue!      ***\n";
               cin.get();
               cin.get();
               break;
           case 3:
               clearScreen();
               cout << "**************** PHARMACY ****************\n";
               cout << "***          1. Levothyroxine          ***\n";
               cout << "***          2. Rosuvastatin           ***\n";
               cout << "***          3. Albuterol              ***\n";
               cout << "***          4. Esomeprazole           ***\n";
               cout << "***          5. Fluticasone            ***\n";
               cout << "******************************************\n";
               cout << "\t\tSelect a medication (1-5): ";
               cin >> pharmMenu;
               switch (pharmMenu) {
                   case 1:
                       meds.levothyroxine(patient);
                       break;
                   case 2:
                       meds.rosuvastatin(patient);
                       break;
                   case 3:
                       meds.albuterol(patient);
                       break;
                   case 4:
                       meds.esomeprazole(patient);
                       break;
                   case 5:
                       meds.fluticasone(patient);
                       break;
                   default:
                       cout << "\t\t\tInvalid Choice!\n";
                       break;
               }
               cout << "***      Press enter to continue!      ***\n";
               cin.get();
               cin.get();
               break;
       }
       clearScreen();
       printCost(patient);
   }while(1);
    
    return 0;
}

void printCost(PatientAccount& x)
{
    cout << "********** Patient Cost Tracker **********\n";
    cout << fixed << setprecision(2);
    cout << "\tRoom & Board: "  << setw(2) << "$" << x.getStayCost() << "\n";
    cout << "\tSurgery: " << setw(7) << "$" << x.getSurgeryCost() << "\n";
    cout << "\tPharmacy: " << setw(6) << "$" << x.getPharmacyCost() << "\n\n";
    cout << "\tTotal Cost: " << setw(4) << "$" << x.getTotalCost() << "\n\n";
}

void printMenu()
{
    cout << "****************** MENU ******************\n";
    cout << "***     1. Charge nights stayed        ***\n";
    cout << "***     2. Charge for surgery          ***\n";
    cout << "***     3. Charge for medication       ***\n";
    cout << "******************************************\n";
    cout << "\t\tSelect a charge (1-3): ";
}

void clearScreen()
{
    cout << string( 100, '\n' );
}
