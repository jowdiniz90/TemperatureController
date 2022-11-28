#ifndef TEMPERATURE_CONTROLLER_H

#define TEMPERATURE_CONTROLLER_H

class TemperatureController 
{
    public:
        float getCurrentTemp();
        float getConfiguredTemp();
        float getUpperThreesold();
        float getLowerThreesold();
        void setTemp(float temp);
        void setPositiveThreesold(float threesold);
        void setNegativeThreesold(float threesold);
        void CheckTemperature();
    private:
        float currentTemperature;
        float configuredTemperature;
        float positiveThreesold;
        float negativeThreesold;
};
#endif // TEMPERATURE_CONTROLLER_H
