#include "telemetryGlobalVariables.h"

float voltageL1N = 230.91;
float voltageL2N = 229.49;
float voltageL3N = 230.28;
float avgVoltageLN = 230.22;    //Compute

float voltageL1L2 = 398.57;
float voltageL2L3 = 399.55;
float voltageL1L3 = 398.08;
float avgVoltageLL = 398.73; //Compute

float currentL1 = 44.32;
float currentL2 = 64.08;
float currentL3 = 48.31;
float currentNeutral = 21.16; //new
float avgCurrentL = 52.24; //Compute
float currentTotal = 21.6;

float realPowerL1N = 10173.67;
float realPowerL2N = 14636.77;
float realPowerL3N = 11029.14;
float realPowerTotal = 35839.59;

float apparentPowerL1N = 10236.08;
float apparentPowerL2N = 14707.01;
float apparentPowerL3N = 11125.86;
float apparentPowerTotal = 36068.96;

float reactivePowerL1N = -305.73;
float reactivePowerL2N = -509.52;
float reactivePowerL3N = -487.53;
float reactivePowerTotal = -1302.8;

float cosPhiL1 = 0.99;
float cosPhiL2 = 0.99;
float cosPhiL3 = 0.99;
float avgCosPhi = 0.99; //Compute
float frequency = 49.99;
float rotField = -1;

float realEnergyL1N = 253881.453;
float realEnergyL2N = 257710.421;
float realEnergyL3N = 244637.609;
float realEnergyTotal = 756221.062;

float apparentEnergyL1 = 260386.14;
float apparentEnergyL2 = 265672.75;
float apparentEnergyL3 = 248929.312;
float apparentEnergyTotal = 774996.812;

float reactiveEnergyL1 = -11966.631;
float reactiveEnergyL2 = -17136.845;
float reactiveEnergyL3 = 12771.387;
float reactiveEnergyTotal = -16332.347;

float THDVoltsL1N = 1.23;
float THDVoltsL2N = 1.19;
float THDVoltsL3N = 1.27;
float avgTHDVoltsLN = 1.23; //compute

float THDCurrentL1N = 11.04;
float THDCurrentL2N = 8.75;
float THDCurrentL3N = 12.29;
float avgTHDCurrentLN = 10.69; //compute

float THDVoltsL1L2 = 1.02; //new
float THDVoltsL2L3 = 0.95; //new
float THDVoltsL1L3 = 1.02; //new
float avgTHDVoltsLL = 1; //new

float powerFactorL1N = 0.99; //new
float powerFactorL2N = 0.99; //new
float powerFactorL3N = 0.99; //new
float powerFactorTotal = 0.99; //new

int comStatus = 1;
time_t timestamp = -1;




void clearData(){
    timestamp = -1;         //new
    return;
}
