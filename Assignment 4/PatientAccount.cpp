
////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
//  Patient Fees, Patient Acount Class                                                //
//  Cpp File                                                                          //
//  Author: Frederick Aranda                                                          //
//  Date: October 4, 2017                                                             //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////

#include "PatientAccount.h"
#include <iostream>
#include <stdio.h>

using namespace std;

/*********************************************************************************************
 *                        PatientAccount :: getTotCostPerDay                                 *
 *  This function gets the amount of days spent at the hospital. It then gets the daily rate *
 *  of $2,152 and multiplies it by the "days". Which then passes the product to              *
 *  stayCost                                                                                 *
 *********************************************************************************************/

void PatientAccount :: calcStayCost(){
    cout << "Enter days stayed overnight: ";
    cin >> days;
    stayCost += dailyRate * days;
}

/*********************************************************************************************
 *                        PatientAccount :: getTotalCost                                     *
 *  In this function we add up all the total costs of the daily charges, pharmacy charges,   *
 *  and surgery charges. It finds the sum of them and passes it to totalCost. Which will     *
 *  is the variable for the over all fee of the Patient.                                     *
 *********************************************************************************************/

float PatientAccount :: getTotalCost(){
    charges = stayCost + surgeryCharges + pharmCharges;
    return charges;
}

float PatientAccount::getSurgeryCost()
{
    return surgeryCharges;
}

float PatientAccount::getPharmacyCost()
{
    return pharmCharges;
}

float PatientAccount::getStayCost()
{
    return stayCost;
}

void PatientAccount :: updateSurgery(float cost)
{
    surgeryCharges += cost;
}

void PatientAccount :: updatePharmacy(float cost)
{
    pharmCharges += cost;
}
