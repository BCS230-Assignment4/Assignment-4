
////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
//  Surgery Class                                                                     //
//  Header File                                                                       //
//  Author: Doug Hellberg                                                             //
//  Date: October 4, 2017                                                             //
//  Purpose: To keep track of the available surgeries and pass data back to the       //
//              PatientAccount to update the cost                                     //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////


#ifndef Surgery_h
#define Surgery_h

#include "PatientAccount.h"

class Surgery {
    int handCost = 43643;
    int spinalCost = 86055;
    int brainCost = 153537;
    int cardiacCost = 48389;
    int kneeCost = 72834;
public:
    void Hand(PatientAccount&);
    void Spinal(PatientAccount&);
    void Brain(PatientAccount&);
    void Cardiac(PatientAccount&);
    void Knee(PatientAccount&);
};

#endif /* Surgery_h */
