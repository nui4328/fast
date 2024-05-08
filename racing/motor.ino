
void to_set_motor_LR(int ML, int MR)
    {
      mt_l = ML;
      mt_r = MR;
    }
void Motor(int spl, int spr)    
   {   
      
      delayMicroseconds(50);
      analogWriteResolution(12);
      analogWriteFreq( 1500);
      pinMode(10,OUTPUT);
      pinMode(14,OUTPUT);
      pinMode(11,OUTPUT);            
      pinMode(22,OUTPUT); 
      pinMode(18,OUTPUT);
      pinMode(19,OUTPUT);
      int sl = 0;
      int sr = 0;
      int mtl = (4095*mt_l)/100;
      int mtr = (4095*mt_r)/100;
      sl = map(spl, -100, 100, -mtl, mtl);
      sr = map(spr, -100, 100, -mtr, mtr);      

      if(sr>4095)
      sr = 4095;
      else if(sr<-4095)
      sr = -4095;
               
      if(sl>4095)
      sl = 4095;
      else if(sl<-4095)
      sl = -4095;
               
      if(sr>0)
          {
            digitalWrite(11,HIGH);
            digitalWrite(14,LOW);     
            analogWrite(10,sr);
         }
      else if(sr<0)
         {    
            digitalWrite(11,LOW);
            digitalWrite(14,HIGH);
            analogWrite(10,-sr);
         }
      else
         {        
            digitalWrite(11,LOW);
            digitalWrite(14,LOW);
            analogWrite(10,0);
         }  
            
      if(sl>0)
         {
            digitalWrite(18,HIGH);
            digitalWrite(19,LOW);
            analogWrite(22,sl);
         }
      else if(sl<0)
         {    
            digitalWrite(18,LOW);
            digitalWrite(19,HIGH);
            analogWrite(22,-sl);
         }
      else
         {        
            digitalWrite(18,LOW);
            digitalWrite(19,LOW);
            analogWrite(22,0);
         }              
    }

 void Motor_fan(int sp_motor)
  { 
    delay(1);
    analogWriteResolution(10);
    analogWriteFreq(800);
    pinMode(8,OUTPUT);
    pinMode(7,OUTPUT);
    int spfl = map(sp_motor, -100, 100, -1024,1024); 
    if(spfl>1024)
      {
        spfl = 1024;
      }
    else if(spfl<-1024)
      {
        spfl = -1024;
      }                   
    if(spfl>0)
      {
        analogWrite(7,spfl);
        digitalWrite(8,0);
      }
    else if(spfl<0)
      {
        analogWrite(8,-spfl);
        digitalWrite(7,0);
      }
    else
      {
        digitalWrite(8,0);
        digitalWrite(7,0);
      }
  }
