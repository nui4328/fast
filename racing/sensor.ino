
///////////////////////////////------------------------------->>>

void sensor_set()
   {
      EEPROM.begin(512); // initialize EEPROM with 512 bytes
      analogReadResolution(12);
      delay(50);
   }

uint16_t mcp_f(int sensor) 
  {         
     adc.begin(5, 4, 12, 13 );  
     //adc.begin(27, 20, 28, 26 ); 
     return adc.readADC(sensor);  
  }

/////////////////////////////////----------------------->>>>

void add_sensor_F()
  {
      bz(100);
      for (int i = 0; i < 50; i ++)         
         {  
            sensor_F0[i] = mcp_f(0);
            sensor_F1[i] = mcp_f(1);
            sensor_F2[i] = mcp_f(2);
            sensor_F3[i] = mcp_f(3);
            sensor_F4[i] = mcp_f(4);
            sensor_F5[i] = mcp_f(5);
            sensor_F6[i] = mcp_f(6);
            sensor_F7[i] = mcp_f(7);   
            delay(10);               
         }
      for (int i = 50; i < 100; i ++)         
         {  
            sensor_F0[i] = mcp_f(0);
            sensor_F1[i] = mcp_f(1);
            sensor_F2[i] = mcp_f(2);
            sensor_F3[i] = mcp_f(3);
            sensor_F4[i] = mcp_f(4);
            sensor_F5[i] = mcp_f(5);
            sensor_F6[i] = mcp_f(6);
            sensor_F7[i] = mcp_f(7);   
            delay(10);                
         }
       for (int i = 100; i < 150; i ++)         
         {   
            sensor_F0[i] = mcp_f(0);
            sensor_F1[i] = mcp_f(1);
            sensor_F2[i] = mcp_f(2);
            sensor_F3[i] = mcp_f(3);
            sensor_F4[i] = mcp_f(4);
            sensor_F5[i] = mcp_f(5);
            sensor_F6[i] = mcp_f(6);
            sensor_F7[i] = mcp_f(7);   
            delay(10);                
         }
      for (int i = 150; i < 200; i ++)         
         {    
            sensor_F0[i] = mcp_f(0);
            sensor_F1[i] = mcp_f(1);
            sensor_F2[i] = mcp_f(2);
            sensor_F3[i] = mcp_f(3);
            sensor_F4[i] = mcp_f(4);
            sensor_F5[i] = mcp_f(5);
            sensor_F6[i] = mcp_f(6);
            sensor_F7[i] = mcp_f(7);   
            delay(10);                
         }
      for (int i = 200; i < 250; i ++)         
         {  
            sensor_F0[i] = mcp_f(0);
            sensor_F1[i] = mcp_f(1);
            sensor_F2[i] = mcp_f(2);
            sensor_F3[i] = mcp_f(3);
            sensor_F4[i] = mcp_f(4);
            sensor_F5[i] = mcp_f(5);
            sensor_F6[i] = mcp_f(6);
            sensor_F7[i] = mcp_f(7);   
            delay(10);                
         }
       for (int i = 250; i < 300; i ++)         
         {   
            sensor_F0[i] = mcp_f(0);
            sensor_F1[i] = mcp_f(1);
            sensor_F2[i] = mcp_f(2);
            sensor_F3[i] = mcp_f(3);
            sensor_F4[i] = mcp_f(4);
            sensor_F5[i] = mcp_f(5);
            sensor_F6[i] = mcp_f(6);
            sensor_F7[i] = mcp_f(7);   
            delay(10);                
         }
       for (int i = 300; i < 350; i ++)         
         {   
            sensor_F0[i] = mcp_f(0);
            sensor_F1[i] = mcp_f(1);
            sensor_F2[i] = mcp_f(2);
            sensor_F3[i] = mcp_f(3);
            sensor_F4[i] = mcp_f(4);
            sensor_F5[i] = mcp_f(5);
            sensor_F6[i] = mcp_f(6);
            sensor_F7[i] = mcp_f(7);   
            delay(10);                
         }
       for (int i = 350; i < 400; i ++)         
         {  
            sensor_F0[i] = mcp_f(0);
            sensor_F1[i] = mcp_f(1);
            sensor_F2[i] = mcp_f(2);
            sensor_F3[i] = mcp_f(3);
            sensor_F4[i] = mcp_f(4);
            sensor_F5[i] = mcp_f(5);
            sensor_F6[i] = mcp_f(6);
            sensor_F7[i] = mcp_f(7);   
            delay(10);                
         }
      for (int i = 400; i < 450; i ++)         
         {    
            sensor_F0[i] = mcp_f(0);
            sensor_F1[i] = mcp_f(1);
            sensor_F2[i] = mcp_f(2);
            sensor_F3[i] = mcp_f(3);
            sensor_F4[i] = mcp_f(4);
            sensor_F5[i] = mcp_f(5);
            sensor_F6[i] = mcp_f(6);
            sensor_F7[i] = mcp_f(7);   
            delay(10);                
         }
       for (int i = 450; i < 502; i ++)         
         {     
            sensor_F0[i] = mcp_f(0);
            sensor_F1[i] = mcp_f(1);
            sensor_F2[i] = mcp_f(2);
            sensor_F3[i] = mcp_f(3);
            sensor_F4[i] = mcp_f(4);
            sensor_F5[i] = mcp_f(5);
            sensor_F6[i] = mcp_f(6);
            sensor_F7[i] = mcp_f(7);   
            delay(10);                
         }
      Motor(1, 1); delay(100);  
      Motor(0, 0); delay(10); 
      Serial.println(" ");
      for(int i = 0; i< 502; i++)
        {
          Serial.print(sensor_F0[i]);
          Serial.println(" ");
          Serial.println(i);
        }
      
      for (int i = 0; i < 50; i ++)         
         {  
            //Motor(cal_motor_l, cal_motor_r);                   
            sensor_26[i] = analogRead(26);
            sensor_27[i] = analogRead(27); 
            delay(10);               
         }
      for (int i = 50; i < 100; i ++)         
         {  
            Motor(-cal_motor_l, -cal_motor_r);                   
            sensor_26[i] = analogRead(26);
            sensor_27[i] = analogRead(27);  
            delay(10);                
         }
       for (int i = 100; i < 150; i ++)         
         {  
            Motor(cal_motor_l, cal_motor_r)  ;                
            sensor_26[i] = analogRead(26);
            sensor_27[i] = analogRead(27); 
            delay(10);                
         }
      for (int i = 150; i < 200; i ++)         
         {  
            Motor(-cal_motor_l, -cal_motor_r);                   
            sensor_26[i] = analogRead(26);
            sensor_27[i] = analogRead(27); 
            delay(10);                
         }
      for (int i = 200; i < 250; i ++)         
         {  
            //Motor(cal_motor_l, cal_motor_r);                  
            sensor_26[i] = analogRead(26);
            sensor_27[i] = analogRead(27);
            delay(10);                
         }
       for (int i = 250; i < 300; i ++)         
         {  
            Motor(-cal_motor_l, -cal_motor_r);                   
            sensor_26[i] = analogRead(26);
            sensor_27[i] = analogRead(27);  
            delay(10);                
         }
       for (int i = 300; i < 350; i ++)         
         {  
            //Motor(cal_motor_l, cal_motor_r);                  
            sensor_26[i] = analogRead(26);
            sensor_27[i] = analogRead(27);
            delay(10);                
         }
       for (int i = 350; i < 400; i ++)         
         {  
            Motor(-cal_motor_l, -cal_motor_r);                   
            sensor_26[i] = analogRead(26);
            sensor_27[i] = analogRead(27);  
            delay(10);                
         }
      for (int i = 400; i < 450; i ++)         
         {  
            //Motor(cal_motor_l, cal_motor_r);                  
            sensor_26[i] = analogRead(26);
            sensor_27[i] = analogRead(27);  
            delay(10);                
         }
       for (int i = 450; i < 502; i ++)         
         {  
            Motor(-cal_motor_l, -cal_motor_r);                   
            sensor_26[i] = analogRead(26);
            sensor_27[i] = analogRead(27);   
            delay(10);                
         }
      Motor(1, 1); delay(100);  
      Motor(0, 0); delay(10); 
      bz(300);
      for(int i = 0; i< 502; i++)
        {
          Serial.print(sensor_26[i]);
          Serial.println(" ");
          Serial.println(i);
        }
      
      uint16_t maxVal0 = sensor_F0[0];
      uint16_t minVal0 = sensor_F0[0];
      for (int i = 0; i < (sizeof(sensor_F0) / sizeof(sensor_F0[0])); i++) 
         {
            maxVal0 = max(sensor_F0[i],maxVal0);
            minVal0 = min(sensor_F0[i],minVal0);                    
         } 
      sensor_max[0] = maxVal0;
      sensor_min[0] = minVal0;
      Serial.print("Val0 --> ");Serial.print(maxVal0);    Serial.print(" ");   Serial.println(minVal0);

     
      uint16_t maxVal1 = sensor_F1[0];
      uint16_t minVal1 = sensor_F1[0];
      for (int i = 0; i < (sizeof(sensor_F1) / sizeof(sensor_F1[0])); i++) 
         {
            maxVal1 = max(sensor_F1[i],maxVal1);
            minVal1 = min(sensor_F1[i],minVal1);                    
         }
      sensor_max[1] = maxVal1;
      sensor_min[1] = minVal1;    
      Serial.print("Val1 --> ");Serial.print(maxVal1);    Serial.print(" ");   Serial.println(minVal1);
      uint16_t maxVal2 = sensor_F2[0];
      uint16_t minVal2 = sensor_F2[0];
      for (int i = 0; i < (sizeof(sensor_F2) / sizeof(sensor_F2[0])); i++) 
         {
            maxVal2 = max(sensor_F2[i],maxVal2);
            minVal2 = min(sensor_F2[i],minVal2);
                    
         }
      sensor_max[2] = maxVal2;
      sensor_min[2] = minVal2; 
      Serial.print("Val2 --> ");Serial.print(maxVal2);    Serial.print(" ");   Serial.println(minVal2);

      uint16_t maxVal3 = sensor_F3[0];
      uint16_t minVal3 = sensor_F3[0];
      for (int i = 0; i < (sizeof(sensor_F3) / sizeof(sensor_F3[0])); i++) 
         {
            maxVal3 = max(sensor_F3[i],maxVal3);
            minVal3 = min(sensor_F3[i],minVal3);                     
         }
      sensor_max[3] = maxVal3;
      sensor_min[3] = minVal3;   
      Serial.print("Val3 --> ");Serial.print(maxVal3);    Serial.print(" ");   Serial.println(minVal3);
      uint16_t maxVal4 = sensor_F4[0];
      uint16_t minVal4 = sensor_F4[0];
      for (int i = 0; i < (sizeof(sensor_F4) / sizeof(sensor_F4[0])); i++) 
         {
            maxVal4 = max(sensor_F4[i],maxVal4);
            minVal4 = min(sensor_F4[i],minVal4);                     
         }
      sensor_max[4] = maxVal4;
      sensor_min[4] = minVal4;   
      Serial.print("Val4 --> ");Serial.print(maxVal4);    Serial.print(" ");   Serial.println(minVal4);
      uint16_t maxVal5 = sensor_F5[0];
      uint16_t minVal5 = sensor_F5[0];
      for (int i = 0; i < (sizeof(sensor_F5) / sizeof(sensor_F5[0])); i++) 
         {
            maxVal5 = max(sensor_F5[i],maxVal5);
            minVal5 = min(sensor_F5[i],minVal5);                     
         }
      sensor_max[5] = maxVal5;
      sensor_min[5] = minVal5;   
      Serial.print("Val5 --> ");Serial.print(maxVal5);    Serial.print(" ");   Serial.println(minVal5);
      uint16_t maxVal6 = sensor_F6[0];
      uint16_t minVal6 = sensor_F6[0];
      for (int i = 0; i < (sizeof(sensor_F6) / sizeof(sensor_F6[0])); i++) 
         {
            maxVal6 = max(sensor_F6[i],maxVal6);
            minVal6 = min(sensor_F6[i],minVal6);                     
         }
      sensor_max[6] = maxVal6;
      sensor_min[6] = minVal6;   
      Serial.print("Val6 --> ");Serial.print(maxVal6);    Serial.print(" ");   Serial.println(minVal6);
      uint16_t maxVal7 = sensor_F7[0];
      uint16_t minVal7 = sensor_F7[0];
      for (int i = 0; i < (sizeof(sensor_F7) / sizeof(sensor_F7[0])); i++) 
         {
            maxVal7 = max(sensor_F7[i],maxVal7);
            minVal7 = min(sensor_F7[i],minVal7);
            sensor_max[7] = maxVal7;
            sensor_min[7] = minVal7;         
         }
      Serial.print("Val7 --> ");Serial.print(maxVal7);    Serial.print(" ");   Serial.println(minVal7);


////////////////////////---------------------------------->>>>>>>>

      uint16_t maxVal26 = sensor_26[0];
      uint16_t minVal26 = sensor_26[0];
      for (int i = 0; i < (sizeof(sensor_26) / sizeof(sensor_26[0])); i++) 
         {
            maxVal26 = max(sensor_26[i],maxVal26);
            minVal26 = min(sensor_26[i],minVal26);                     
         }
      sensor_max_PA[0] = maxVal26;
      sensor_min_PA[0] = minVal26;   
      Serial.print("Val26 --> ");Serial.print(maxVal26);    Serial.print(" ");   Serial.println(minVal26);

      uint16_t maxVal27 = sensor_27[0];
      uint16_t minVal27 = sensor_27[0];
      for (int i = 0; i < (sizeof(sensor_27) / sizeof(sensor_27[0])); i++) 
         {
            maxVal27 = max(sensor_27[i],maxVal27);
            minVal27 = min(sensor_27[i],minVal27);
                     
         }
      sensor_max_PA[1] = maxVal27;
      sensor_min_PA[1] = minVal27;   
      Serial.print("Val27 --> ");Serial.print(maxVal27);    Serial.print(" ");   Serial.println(minVal27);

      
//////////////////////////.........................>>>>>>>>>>>>

      uint16_t Data_sensor[DATA_sensor_SIZE] = {maxVal26, minVal26, maxVal27, minVal27,
                             maxVal0, maxVal1, maxVal2, maxVal3, maxVal4, maxVal5, maxVal6, maxVal7
                             ,minVal0, minVal1, minVal2, minVal3, minVal4, minVal5, minVal6, minVal7};
      EEPROM.put(eep_f, Data_sensor); // write data to EEPROM address 0
      EEPROM.commit(); // save changes to EEPROM
    
      uint16_t readData_sensor[DATA_sensor_SIZE];
      EEPROM.get(eep_f, readData_sensor); // read data from EEPROM address 0
      Serial.print("data26 -> EEPROM : ");
      for (uint16_t i = 0; i < DATA_sensor_SIZE; i ++) 
        {
         Serial.print(readData_sensor[i]);Serial.print("  ");
        }
      Serial.println("  ");
      
      bz(100);
      bz(100);
   
  }    
uint16_t max_mcp_f(int sensor)
    {     
      uint16_t readData_sensor[DATA_sensor_SIZE];
      EEPROM.get(eep_f, readData_sensor); // read data from EEPROM address 0
       if(sensor == 0)
          {
             return readData_sensor[4];
          }
       else if(sensor == 1)
          {
             return readData_sensor[5];
          }
       else if(sensor == 2)
          {
             return readData_sensor[6];
          }
       else if(sensor == 3)
          {
            return readData_sensor[7];
          }
       else if(sensor == 4)
          {
            return readData_sensor[8];
          }
      else if(sensor == 5)
          {
             return readData_sensor[9];
          }
       else if(sensor == 6)
          {
             return readData_sensor[10];
          }
       else if(sensor == 7)
          {
             return readData_sensor[11];
          }
        return -1;    
    }
    
uint16_t min_mcp_f(int sensor)
    {     
      uint16_t readData_sensor[DATA_sensor_SIZE];
      EEPROM.get(eep_f, readData_sensor); // read data from EEPROM address 0
       if(sensor == 0)
          {
             return readData_sensor[12];
          }
       else if(sensor == 1)
          {
             return readData_sensor[13];
          }
       else if(sensor == 2)
          {
             return readData_sensor[14];
          }
       else if(sensor == 3)
          {
             return readData_sensor[15];
          }
       else if(sensor == 4)
          {
             return readData_sensor[16];
          }
      else if(sensor == 5)
          {
             return readData_sensor[17];
          }
       else if(sensor == 6)
          {
             return readData_sensor[18];
          }
       else if(sensor == 7)
          {
             return readData_sensor[19];
          }
        return -1;    
    }

uint16_t md_mcp_f(int sensor)
    {
      uint16_t md = 0;
      md = (max_mcp_f(sensor) + min_mcp_f(sensor))/2;
      return md;
    }


int16_t max_adc(int sensor)
    {     
      uint16_t readData_sensor[DATA_sensor_SIZE];
      EEPROM.get(eep_f, readData_sensor); // read data from EEPROM address 0
       if(sensor == 26)
          {
             return readData_sensor[0];
          }
       else if(sensor == 27)
          {
             return readData_sensor[2];
          }
       
        return -1;    
    }
    
uint16_t min_adc(int sensor)
    {     
      uint16_t readData_sensor[DATA_sensor_SIZE];
      EEPROM.get(eep_f, readData_sensor); // read data from EEPROM address 0
       if(sensor == 26)
          {
             return readData_sensor[1];
          }
       else if(sensor == 27)
          {
             return readData_sensor[3];
          }
      
        return -1;    
    }
uint16_t md_adc(int sensor)
    {
      uint16_t md = 0;
      md = (max_adc(sensor) + min_adc(sensor))/2;
      return md;
    }
/////////////////////////////////////------------------------------------------>>>

uint16_t Position()  
   {        
      uint16_t min_sensor_values_F[] = { min_mcp_f(0),min_mcp_f(1),min_mcp_f(2),min_mcp_f(3),min_mcp_f(4),min_mcp_f(5),min_mcp_f(6),min_mcp_f(7)  }; //ค่าที่อ่านได้น้อยสุดหรือ สีดำ
      uint16_t max_sensor_values_F[] = { max_mcp_f(0),max_mcp_f(1),max_mcp_f(2),max_mcp_f(3),max_mcp_f(4),max_mcp_f(5),max_mcp_f(6),max_mcp_f(7)  } ; //ค่าที่อ่านได้มากสุด สีขาว                
      bool onLine = false;
      long avg = 0;
      long sum = 0;
      for (uint8_t i = 0; i < numSensor ; i++) 
          {              
              long value = map(mcp_f(sensor_pin_F[i]), min_sensor_values_F[i], max_sensor_values_F[i], 1000, 0);                                                                         // จากนั้นก็เก็บเข้าไปยังตัวแป value

              if (value > 200) 
                 { 
                    onLine = true;
                 }
              if (value > 50)   
                 {
                    avg += (long)value * (i * 1000);  
                    sum += value;                 
                 }
         }
      if (!onLine)        //เมื่อหุ่นยนต์ไม่อยู่หรือไม่เจอเส้นดำ
         {
            if (_lastPosition < (numSensor - 1) * 1000 / 2)  // ถ้าค่าก่อนหน้าที่จะไม่เจอเส้นดำหรือหลุดจะให้ค่านั้นเป็น 0
               {
                  return 3500;
               }
            else                                          //แต่ถ้ามากกว่าแสดงว่าหลุดออกอีกฝั่ง ค่าก็จะเป็น 1000 คุณด้วยจำนวนเซ็นเซอร์
               {
                 return 3500;                  

               }
          }
        _lastPosition = avg / sum;        //นำมาหาค่าเฉลี่ย
       

        return _lastPosition;            //ส่งค่าที่อ่านได้จากการเฉลี่ยแล้วกลับไปยังฟังก์ชั้น readline
    }

double error()
  {
     present_position = Position() / ((numSensor - 1) * 10) ;
     setpoint = 50.0;
     errors = setpoint - present_position; 
     return errors; 
  }

    
