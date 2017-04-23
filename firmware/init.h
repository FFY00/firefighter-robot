#pragma once

#include "arduinoConfig.h"
#include "config.h"

//#include <Thread.h>
#include <FastLED.h>
#include <AnalogButtons.h>

#include "motor.h"
#include "compass.h"
#include "px.h"

bool shouldStart = false;
bool remoteDebug = false;
bool Debug = false;

CRGB rgb_strip[MRGBLN];
Motor m(MMLD, MMRD, MMLP, MMRP);
PX px(MPXL, MPXR, MPXF);
Compass c;

#include "fw_startbtn.h"

AnalogButtons analogButtons(MSB, INPUT);
Button sbtn = Button(0, &StartButtonClick, &StartButtonHold);
