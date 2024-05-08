 
  void bz(int tm)
    {
      pinMode(24, OUTPUT);
      digitalWrite(24, 1);
      delay(tm);
      digitalWrite(24, 0);
      delay(10);
    }

void led(int tm)
    {
      pinMode(25, OUTPUT);
      if(tm == 1)
        {
          digitalWrite(25, 0);
        }
      else
        {
          digitalWrite(25, 1);
        }
      digitalWrite(25, 1);
    }
void test()
  {
           
   /*
      while(1)
        {
          if(digitalRead(15) == 0)
            {
              while(digitalRead(15) == 0)
                {
                  Serial.println(num_sw); display.clearDisplay();
                  display.setTextSize(2);      // Normal 1:1 pixel scale
                  display.setCursor(30, 10);     // Start at top-left corner
                  display.cp437(true);         // Use full 256 char 'Code Page 437' font
                  display.println(num_sw);
                  display.display();
                }
              num_sw += 10;
            }
          //delayMicroseconds(num_sw);
          Motor(10, 10);
          analogWriteFreq( num_sw);
          
        }
 */
  
  }
 void _setup_fan()
  {
    Serial.begin(9600);
      sensor_set();
      to_set_motor_LR(100, 100);
      pinMode(23, OUTPUT);
      pinMode(25, OUTPUT);
      pinMode(27,INPUT);
      pinMode(6, OUTPUT);
      esc.attach(6); // ติดตั้ง ESC ที่พิน 6
      esc.writeMicroseconds(500); // ส่งสัญญาณ PWM สำหรับรอบรถยนต์ RC ที่ต้องการสั่งงาน
      delay(5000);
      esc.writeMicroseconds(1500); // ส่งสัญญาณ PWM สำหรับรอบรถยนต์ RC ที่ต้องการสั่งงาน
      delay(2000);
      esc.writeMicroseconds(500); // ส่งสัญญาณ PWM สำหรับรอบรถยนต์ RC ที่ต้องการสั่งงาน
      if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) 
        {
          Serial.println(F("SSD1306 allocation failed"));
          for(;;); // Don't proceed, loop forever
        }
       display.clearDisplay();

      display.setTextSize(2);      // Normal 1:1 pixel scale
      display.setTextColor(SSD1306_WHITE); // Draw white text
      display.setCursor(30, 0);     // Start at top-left corner
      display.cp437(true);         // Use full 256 char 'Code Page 437' font
      display.println("MyMakers");
      display.display();
      delay(20);
  }

void _setup()
  {
    Serial.begin(9600);
      sensor_set();
      to_set_motor_LR(100, 100);
      pinMode(23, OUTPUT);
      pinMode(25, OUTPUT);
      pinMode(27,INPUT);
      pinMode(6, OUTPUT);
      
      if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) 
        {
          Serial.println(F("SSD1306 allocation failed"));
          for(;;); // Don't proceed, loop forever
        }
       display.clearDisplay();

      display.setTextSize(2);      // Normal 1:1 pixel scale
      display.setTextColor(SSD1306_WHITE); // Draw white text
      display.setCursor(30, 0);     // Start at top-left corner
      display.cp437(true);         // Use full 256 char 'Code Page 437' font
      display.println("MyMakers");
      display.display();
      delay(20);
  }
