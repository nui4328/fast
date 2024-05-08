
void fline(unsigned char spl, unsigned char spr, float kp, float ki, float kd )
  {
    while(1)
       {    
          P = error();
          I = I + error();
          D = error() - lastError;                    
          lastError = error();
          PID_output = (kp * P) + (ki * I) + (kd * D);
          Motor(spl - PID_output, spr + PID_output);  
          //Serial.println(30 + PID_output);
          if(digitalRead(15) == 0)
            {
              while(digitalRead(15) == 0)
                 {
                    Serial.println(num_sw); 
                    display.clearDisplay();
                    display.setTextSize(2);      // Normal 1:1 pixel scale
                    display.setCursor(30, 10);     // Start at top-left corner
                    display.cp437(true);         // Use full 256 char 'Code Page 437' font
                    display.println(num_sw);
                    display.display();
                 }
              num_sw += 50;                           
            }
       }
  }  

void fline_begin(int spl, int spr, double kp, double ki, double kd )
  {
    while(1)
       {     
          P = error();
          I = I + error();
          D = error() - lastError;                    
          lastError = error();
          PID_output = (kp * P) + (ki * I) + (kd * D);
          Motor(spl - PID_output, spr + PID_output);  
          //Serial.println(30 + PID_output);
          /*
          if(analogRead(27) < 2000)  // เซนเซอร์ซ้าย
            {
              do{P = error();
              I = I + error();
              D = error() - lastError;                    
              lastError = error();
              PID_output = ((kp/2) * P) + (ki * I) + ((kd/2) * D);
              Motor(spl + PID_output, spr - PID_output);  }while(analogRead(27) < 2000);

              num_27 ++;
              bz(40);  
                                    
             }
           
           if (num_27 == 13)
              {    
                fline_begin(spl, spr, 0.2, 0, 0.4, 100 );           
                break;
              }
           */
           if(mcp_f(2) > md_mcp_f(2)+100 && mcp_f(3) > md_mcp_f(3)+100 && mcp_f(4) > md_mcp_f(4)+100&& mcp_f(5) > md_mcp_f(5)+100)
              {
                lasts_time = millis();
                while(mcp_f(1) > md_mcp_f(1) && mcp_f(6) > md_mcp_f(6)&&mcp_f(0) > md_mcp_f(0) && mcp_f(7) > md_mcp_f(7))
                   {
                      if(millis()-lasts_time > 300)
                        {
                          goto _ent;  
                        }
                   }                    
                                                    
              }
        
       }
      _ent:
      Motor(-10, -10);
      delay(30);
      Motor(0, 0);
      delay(30);
  } 

void fline_begin(int spl, int spr, float kp, float ki, float kd , int _time)
  {
    lasts_time=millis();
    while(millis()-lasts_time < _time)
       {     
          P = error();
          I = I + error();
          D = error() - lastError;                    
          lastError = error();
          PID_output = (kp * P) + (0.00001 * I) + (kd * D);
          Motor(spl - PID_output, spr + PID_output);  
       }
  }

void fline_getpid(int spl, int spr, float kp, float ki, float kd )
  {
    
    while(1)
       {     
          P = error();
          I = I + error();
          D = error() - lastError;                    
          lastError = error();
          PID_output = (kp * P) + (ki * I) + (kd * D);
          Motor(spl - PID_output, spr + PID_output); 
          if(abs(error()) > _pid_output)
             {
               _pid_output = abs(error());
               //Serial.println(_pid_output);
             } 
          if(analogRead(27) < md_adc(27))  // เซนเซอร์ซ้าย
            {
              
              
              do{P = error();
              I = I + error();
              D = error() - lastError;                    
              lastError = error();
              PID_output = ((kp/1.2) * P) + (ki * I) + ((kd/1.2) * D);
              Motor(spl - PID_output, spr + PID_output);  }while(analogRead(27) < 2000); 
               
              get_pid[0+num_27] = _pid_output;                
              _pid_output = 0;
              
              num_27 ++;
              bz(40);                                      
             }

          if (num_27 == 4)
              {    
                fline_begin(spl, spr, 0.5, 0, 5, 400 );           
                break;
              }
           /*
           if(mcp_f(2) > md_mcp_f(2) &&mcp_f(3) > md_mcp_f(3) && mcp_f(4) > md_mcp_f(4)&& mcp_f(5) > md_mcp_f(5))
              {
                lasts_time = millis();
                while(mcp_f(1) > md_mcp_f(1) && mcp_f(6) > md_mcp_f(6)&&mcp_f(0) > md_mcp_f(0) && mcp_f(7) > md_mcp_f(7))
                   {
                      if(millis()-lasts_time > 300)
                        {
                          goto _ent;  
                        }
                   }                    
                                                    
              }
            */
        
       }
     _ent:     
     Motor(0, 0);
     delay(2000);
     for(int i = 0; i < 4; i++)
        {
           display.clearDisplay();
      
            display.setTextSize(2);      // Normal 1:1 pixel scale
            display.setTextColor(SSD1306_WHITE); // Draw white text
            display.setCursor(30, 0);     // Start at top-left corner
            display.cp437(true);         // Use full 256 char 'Code Page 437' font
            display.println(get_pid[i]);
            display.display();
             Serial.print("_pid_output : ");
             Serial.println(get_pid[0]);
            delay(1000); 
        }
      
  }
       
