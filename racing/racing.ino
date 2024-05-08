
#include <Servo.h>
#include <SPI.h>
#include <Wire.h>
#include <EEPROM.h>
#include "my_MCP3008.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels.
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define EEPROM_ADDR 0x50
#define DATA_sensor_SIZE 20
#define DATA_sensor_SIZE_B 16

int eep_f = 10;
int eep_b = 100;

my_MCP3008 adc;
Servo esc; // สร้างอ็อบเจกต์ของ Servo
int cal_motor_l, cal_motor_r, delay_cal;
unsigned long lasts_time=millis();
uint16_t sensor_F0[502];
uint16_t sensor_F1[502];
uint16_t sensor_F2[502];
uint16_t sensor_F3[502];
uint16_t sensor_F4[502];
uint16_t sensor_F5[502];
uint16_t sensor_F6[502];
uint16_t sensor_F7[502];
uint16_t sensor_add_F[8];
uint16_t sensor_max[8]; 
uint16_t sensor_min[8];

uint16_t sensor_B0[502];
uint16_t sensor_B1[502];
uint16_t sensor_B2[502];
uint16_t sensor_B3[502];
uint16_t sensor_B4[502];
uint16_t sensor_B5[502];
uint16_t sensor_B6[502];
uint16_t sensor_B7[502];
uint16_t sensor_add_B[8];
uint16_t sensor_maxB[8]; 
uint16_t sensor_minB[8];

uint16_t sensor_26[502];
uint16_t sensor_27[502];
uint16_t sensor_PA[2];
uint16_t sensor_max_PA[2];
uint16_t sensor_min_PA[2];

double P, I, D, previous_I, previous_error,errors, PID_output, present_position, previous_integral,lastError; 
int numSensor = 8; 
uint16_t sensor_pin_F[] = {0,1,2,3,4,5,6,7}; 
uint16_t sensor_pin_B[] = {0,1,2,3,4,5,6,7}; 
uint16_t state_on_Line = 0;
uint16_t setpoint;
uint16_t _lastPosition;
 
///////////////////////////////------------------------------->>>

void add_sensor_F(void);
int mt_l, mt_r;

uint8_t gp2;

int num_sw ; 
int num_27 = 0 ; 
int ch_poit = 4;
uint16_t _pid_output;
uint16_t get_pid[] = {};

void setup() 
  {
      _setup();     
 

      _menu();digitalWrite(23, 0); digitalWrite(25, 1);
      
      // esc.writeMicroseconds(1800); // ส่งสัญญาณ PWM สำหรับรอบรถยนต์ RC ที่ต้องการสั่งงาน
      //delay(1000);
      
      //fline_begin(60, 60, 0.8 , 0.0, 11 );  // 500 rpm
      
      fline_begin(53, 53, 0.37 , 0.0016, 25 );  // 1000 rpm

     esc.writeMicroseconds(500); // ปืดสัญญาณ PWM สำหรับรอบรถยนต์ RC ที่ต้องการสั่งงาน

      
  }

void loop() {


}
