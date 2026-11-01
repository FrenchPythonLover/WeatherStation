/**
   * Weather Station Project
   * By @FrenchPythonLover && @Tilto665
   * config.h: Radio-related (LoRa, WiFi) variables
   **/
#include "common.h"

typedef enum {
    ID_SENSORBOX,
    ID_DISPLAYBOX
} lora_id_t;

typedef enum {
    ALERT_RAIN,
    ALERT_WIND,
    ALERT_PRESSURE,
    ALERT_TEMPERATURE_LOW,
    ALERT_TEMPERATURE_HIGH,
    ALERT_AIRQUALITY,
    ALERT_CO2
} alertid_t;

/*
Sensor list:
We have:
Temperature (-128-127°C -> int8_t)
Humidity (0-100% -> uint8_t)
Air quality (~ 0-500 IAQ -> uint16_t)
Air pressure (~ 300-1100 hPa -> uint16_t)
Wind speed (0-200km/h -> uint8_t)
*/
typedef struct {
    int8_t temp;
    uint8_t humidity;
    uint16_t airquality;
    uint16_t pressure;
    uint8_t windspeed;
} sensors_t;

typedef struct {
    bool isAlert;
    alertid_t id;
    uint16_t value; // We need to be able to take ANY value of ANY Sensor. might be a little high but, meh.
} alert_t;

typedef struct {
    lora_id_t id;
    sensors_t sensors;
    alert_t alert; //
    bool uptodate;
} lora_msg_t;
