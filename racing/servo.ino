void _esc(int pwm)
{  
  esc.writeMicroseconds(pwm); // ส่งสัญญาณ PWM สำหรับรอบรถยนต์ RC ที่ต้องการสั่งงาน
  //delay(3000); // รอให้ ESC รับสัญญาณ
}
