//  VOID LOOP

void loop() {
  bool off = LOW;
  bool White = LOW;
  bool Blue = LOW;
  bool Red = LOW;
  bool Green = LOW;
  bool Topaz = LOW;
  bool Lilac = LOW;
  bool Rainbow = LOW;
  bool rgb = LOW;
  bool ende;
   if (BT.available())
   {
    a= (char)BT.read();




    if(a=='o')
    {
      off = HIGH;
          BT.println("TURNING OFF LEDs..");

    }else{
          off = LOW;
    }
    
// ===========================================================================================

    if(a=='w')
    {
      White = HIGH;
          BT.println("TURNING LEDs WHITE");

    }else{
          White = LOW;
    }
    
// ===========================================================================================

    if(a=='b')
    {
      Blue = HIGH;
          BT.println("CHANGING TO BLUE");      
          
    }else{
          Blue = LOW;  
    }

// ===========================================================================================

if(a=='r')
    {
      Red = HIGH;
          BT.println("CHANGING TO RED");            
    }else{
          Red = LOW;  
    }

// ===========================================================================================

if(a=='g')
    {
      Green = HIGH;
          BT.println("CHANGING TO GREEN");      
          
    }else{
          Green = LOW;
    }

// ===========================================================================================

if(a=='t')
    {
      Topaz = HIGH;
          BT.println("CHANGING TO TOPAZ");      
          
    }else{
          Topaz = LOW;
    }

// ===========================================================================================

if(a=='l')
    {
      Lilac = HIGH;
          BT.println("CHANGING TO LILAC");      
          
    }else{
          Lilac = LOW;
    }

// ===========================================================================================

    if(a=='a')
    {
      Rainbow = HIGH;
          BT.println("RAINBOW ANIMATION");      
          
    }else{
          Rainbow = LOW;  
    }
    
// ===========================================================================================

     if(a=='m')
    {
      rgb = HIGH;
          BT.println("MIX COLORS");      
          
    }else{
          rgb = LOW;  
    }
}

// ===========================================================================================
// ===========================================================================================
