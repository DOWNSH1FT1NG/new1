/*
 ==============================================================================
 
 SawOscillator.cpp
 Created: 19 Jan 2017 6:00:30pm
 Author:  Thomas Harvey
 
 ==============================================================================
 */

#include "SawOscillator.h"
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
SawOscillator::SawOscillator()
{
    
    
    
}
SawOscillator::~SawOscillator()
{
    
    
    
}

float SawOscillator::renderWaveShape (const float currentPhase)
{
    float value = 1 /M_PI;
    return 1-value * currentPhase * 0.5;
}
