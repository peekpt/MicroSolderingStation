#ifndef CONFIG_H
#define CONFIG_H

// PINS 

#define HEATER_PIN 3 // must be PWM capable
#define SENSOR_PIN A0 
#define BUZZER_PIN 5

#define LCD_CS 10
#define LCD_A0 9
#define LCD_RST 8


// DEFAULT_SETTINGS

#define SETTINGS_STANDBY_TEMP 150 // Celsius
#define SETTINGS_STANDBY_TIME 60  // seconds
#define SETTINGS_P 4.5 // proportional
#define SETTINGS_I 0 // integral
#define SETTINGS_D 2.0 // derivatinve
#define SETTINGS_M1 300 // memory M1 
#define SETTINGS_M2 260 // memory M2
#define SETTINGS_M3 350 // memory M3
#define SETTINGS_TEMP_CORRECTION 0.85 //tip's temperature relative to thermistor reading
#define SETTINGS_MAX_POWER 220 // 0-255 max PWM output power (0-100% in the menu)
#define SETTINGS_TIMEOUT 30 // minutes before shutoff
#define SETTINGS_SOUND 1 // 0 to disable , 1 to enable
#define SETTINGS_RESTORE 1 // restore froms standby 0 MANUAL(by clicking), 1 AUTO (by temperature variation)






#endif