#include "TemperatureController.h"

float TemperatureController::getCurrentTemp() 
{   
    return currentTemperature;
}

float TemperatureController::getConfiguredTemp() 
{
    return configuredTemperature;
}

float TemperatureController::getUpperThreesold() 
{
    return positiveThreesold;
}

float TemperatureController::getLowerThreesold() 
{
    return negativeThreesold;
}

void TemperatureController::setTemp(float temp) 
{
    configuredTemperature = temp;
}

void TemperatureController::setPositiveThreesold(float threesold) 
{
    positiveThreesold = threesold;
}

void TemperatureController::setNegativeThreesold(float threesold) 
{
    negativeThreesold = threesold;
}

void TemperatureController::CheckTemperature() 
{
    float currentTemp = getCurrentTemp();

    if(currentTemp >= configuredTemperature + positiveThreesold) 
    {
        // For Future Implementation: Start cooling proccess (by activating external module or smething else).
    } 
    else if (currentTemp <= configuredTemperature - negativeThreesold)
    {
        // For Future Implementation: Start heating proccess (by activating external module or smething else).
    }
}
