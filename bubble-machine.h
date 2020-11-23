/*******************************************************************
  Connect to local MQTT server with a Bot

  Created with code from noycebru www.twitch.tv/noycebru
 *******************************************************************/

#ifndef BUBBLE_MACHINE_H
#define BUBBLE_MACHINE_H

// Configure your default pin numbers
const int LED_PIN = 5;

// The amount of time to run the bubble machine
const int BUBBLE_TIME = 10000; // time in ms

//------- Replace the following! ------
char WIFI_SSID[] = "";       // your network SSID (name)
const char WIFI_PASSWORD[] = "";  // your network key

const String MQTT_ID = "bubble-machine-001"; // ID for this client when connecting to MQTT
const String MQTT_BROKER = "192.168.0.50"; // Hostname or IP of your MQTT server
const int MQTT_TOPIC_COUNT = 2; // This should match the number of topics you wish to subscribe to
const String MQTT_TOPIC[2] = {"channel-subscribe-events-v1.70623724", "channel-points-channel-v1.70623724"}; // The topic name you wish to listen for

#endif
