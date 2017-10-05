
// Doug Hellberg || My Surgery class would take input from the patient to find out which surgery they had as well as to update the price

#ifndef Surgery_h
#define Surgery_h

#include "PatientAccount.h"

class Surgery {
    int majorHand = 43643;
    int majorSpinal = 86055;
    int majorBrain = 153537;
    int majorCardiac = 48389;
    int majorKnee = 72834;
public:
    void Hand(PatientAccount&);
    void Spinal(PatientAccount&);
    void Brain(PatientAccount&);
    void Cardiac(PatientAccount&);
    void Knee(PatientAccount&);
};

#endif /* Surgery_h */
