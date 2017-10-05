
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

class PatientAccount{
    
private:
    int days;
    float stayCost;
    float dailyRate = 2152;
    float charges = 0, surgeryCharges = 0, pharmCharges = 0;
    
public:
    void calcStayCost();
    float getTotalCost();
    float getSurgeryCost();
    float getPharmacyCost();
    float getStayCost();
    void updateSurgery(float);
    void updatePharmacy(float);
};

#endif /* PatientAccount_h */
