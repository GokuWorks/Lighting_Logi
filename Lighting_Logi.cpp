#include <thread>
#include <chrono>
#include "Include\LogitechLEDLib.h"
#include "Include\bitmap.h"

int main() {

//------Declare and initialize Vars------//
    int red = 100;
    int green = 0;
    int blue = 0;
    int duration = 2000;
    int interval = 1000;

//------Init Connection to Ghub------//
    LogiLedInit(); //Needs time to initialize
    std::this_thread::sleep_for(std::chrono::seconds(2));
    
    LogiLedSaveCurrentLighting(); //Save current lighting
    LogiLedSetTargetDevice(LOGI_DEVICETYPE_ALL);

//------Set Lighting------//
    BuildBitmap();
    LogiLedSetLightingFromBitmap(bitmap);
    std::this_thread::sleep_for(std::chrono::seconds(5));

    //LogiLedSetLighting(red, green, blue);
    //std::this_thread::sleep_for(std::chrono::seconds(2));

    // Call per-key lighting effects
    //LogiLedSetLightingForKeyWithKeyName(LogiLed::KeyName::ARROW_DOWN, red, green, blue);
    //std::this_thread::sleep_for(std::chrono::seconds(2));

    // effect functions
    //LogiLedFlashLighting(red, green, blue, duration, interval);
    //std::this_thread::sleep_for(std::chrono::seconds(2));

    //LogiLedPulseLighting(red, green, blue, duration, interval);
    //std::this_thread::sleep_for(std::chrono::seconds(2));
    
//------Close Connection to Ghub------//
    LogiLedRestoreLighting();
    LogiLedShutdown();

    return 0;
}