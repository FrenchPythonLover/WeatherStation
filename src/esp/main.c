/**
   * Weather Station Project
   * By @FrenchPythonLover && @Tilto665
   * main.c: Main code & Task dispatcher
   **/
/* Includes */
#include "freeRTOS/FreeRTOS.h"
#include "common.h"

/* Vars */
// Normally everything defined in common.h & radio.h

/* Functions */

/***| tasks |***/
void radio_task(void) {
    // Listens for incoming LoRa messages and processes them. Notifying alert_listener_task && sensor_task_external
}

void sensor_task_internal(void) {
    // Reads internal sensors (C02, air quality, temp) then stores them
}

void sensor_task_external(void) {
    // Reads external sensors coming from LoRa then store them
}


void alert_listener_task(void) {
    // Listen for alerts in LoRa messages and sends them to display_task for appropriate display
}

void web_task(void) {
    // Handles APIs && WebUI.
}

void display_task(void) {
    // Display info, alerts if notified by alert_listener_task
}

// main
void app_main(void) {
    /* INIT */
    // Sensors

    // Display

    // Speaker

    // Bring tasks

}
