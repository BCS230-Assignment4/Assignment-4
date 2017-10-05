
// Doug Hellberg || My Surgery class would take input from the patient to find out which surgery they had as well as to update the price

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
