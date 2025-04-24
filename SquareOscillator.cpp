/*
 ==============================================================================
 
 SquareOscillator.cpp
 Created: 19 Jan 2017 6:00:23pm
 Author:  Thomas Harvey
 
 ==============================================================================
 */

#include "SquareOscillator.h"
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


SquareOscillator::SquareOscillator()
{
    
}
SquareOscillator::~SquareOscillator()
{
    
}

float SquareOscillator::renderWaveShape (const float currentPhase)
{
    
    
    if (currentPhase <= M_PI)
        return 0.5;
    else
        return -0.5;
    
}
