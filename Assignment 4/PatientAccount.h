
////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
//  Patient Fees, Patient Acount Class                                                //
//  Header File                                                                       //
//  Author: Frederick Aranda                                                          //
//  Date: October 4, 2017                                                             //
//  Purpose: To keep track of the total charges of the patient and the daily rate.    //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////

#ifndef PatientAccount_h
#define PatientAccount_h

#include <iostream>
using namespace std;

class PatientAccount{
    
private:
    float stayCost;
    float dailyRate = 2152;
    int days;
    float totalCost;
    
public:
    PatientAccount(float totCostPerDay, int days, float totalCost);
    void getTotCostPerDay();
    float getTotalCost(float& totCostPerDay, float totCostOfSurgery, float& totCostOfPharmacy);
};

#endif /* PatientAccount_h */
