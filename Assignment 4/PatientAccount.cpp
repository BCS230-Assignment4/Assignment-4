
#include <stdio.h>
#include "PatientAccount.h"

/*********************************************************************************************
 *                         PatientAccount :: PatientAccount                                   *
 *   This is the Constructor.                                                                 *
 *                                                                                            *
 *                                                                                            *
 *********************************************************************************************/

PatientAccount :: PatientAccount(float totPD = 0, int d = 0, float tC = 0) {
    totCostPerDay = totPD;
    days = d;
    totalCost = tC;
}

/*********************************************************************************************
 *                        PatientAccount :: getTotCostPerDay                                    *
 *  This function gets the amount of days spent at the hospital. It then gets the daily rate *
 *  of $2,152 and multiplies it by the "days". Which then passes the product to              *
 *  totCostPerDay and the function returns a float.                                          *
 *********************************************************************************************/

void PatientAccount :: getTotCostPerDay() {
    cout << "Enter the amount of says the patient has been at the hospital: ";
    cin >> days;
    cout << "Based on the amount of days stayed the total cost of will be: ";
    stayCost = dailyRate * days;
    cout << "$" << stayCost;
}

/*********************************************************************************************
 *                        PatientAccount :: getTotalCost                                     *
 *  In this function we add up all the total costs of the daily charges, pharmacy charges,   *
 *  and surgery charges. It finds the sum of them and passes it to totalCost. Which will     *
 *  is the variable for the over all fee of the Patient.                                     *
 *********************************************************************************************/

float PatientAccount :: getTotalCost(float& totCostPerDay, float totCostOfSurgery, float& totCostOfPharmacy) {
    
    totalCost = totCostPerDay + totCostOfSurgery + totCostOfPharmacy;
    return (totalCost);
}


int main () {
    
    PatientAccount john;
    john.getTotCostPerDay();
}

