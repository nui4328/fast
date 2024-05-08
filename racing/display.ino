
void testdrawchar(void) {
 
  display.clearDisplay();
  display.setTextSize(1);      // Normal 1:1 pixel scale
  display.setCursor(30, 10);     // Start at top-left corner
  display.cp437(true);         // Use full 256 char 'Code Page 437' font
  display.println("Select menu");

  display.display();
  delay(2000);
}

void _menu()
  {
    pinMode(2, INPUT);    
    gp2 = digitalRead(2);    
    testdrawchar();
    bz(100);
    bz(100);  
    while(1)
      {    
                
        Serial.print(error());
        Serial.print("   ");
        //Serial.println(md_adc(27));
        digitalWrite(23, 1);
        digitalWrite(25, 0);
        for(int i=0; i<8; i++)
          {
            Serial.print(md_mcp_f(i));
            Serial.print(" ");
          }
        Serial.println("");
        if(gp2 == 0)
          {
            bz(100);            
            display.clearDisplay();
            display.setTextSize(1);      // Normal 1:1 pixel scale
            display.setCursor(30, 10);     // Start at top-left corner
            display.cp437(true);         // Use full 256 char 'Code Page 437' font
            display.println("set PID");
            display.display();
            delay(2000);
          }
         if(digitalRead(9) == 0)
          {
            bz(300);
            break;
          }
        if(digitalRead(15) == 0)
          {
            add_sensor_F();            
          }
        
        digitalWrite(23, 0);
        digitalWrite(25, 1);
        delay(50);
      }
  }
