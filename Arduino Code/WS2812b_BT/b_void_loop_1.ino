//  VOID LOOP 1


  if (off == LOW && offOld == HIGH) {
    delay(20);
   
    
    if (off == LOW) {
       showType = 0  ;                            // Off animation Type 0
     
      startShow(showType);
    }
  }

// ===========================================================================================

if (White == LOW && WhiteOld == HIGH) {
    delay(20);
   
    
    if (White == LOW) {
       showType = 1  ;                            // White animation Type 1
     
      startShow(showType);
    }
  }

  
// ===========================================================================================  
  
  if (Red == LOW && RedOld == HIGH) {
    delay(20);
   
    
    if (Red == LOW) {
       showType = 2  ;                            // Red animation Type 2
     
      startShow(showType);
    }
  }

// ===========================================================================================

if (Green == LOW && GreenOld == HIGH) {
    delay(20);
   
    
    if (Green == LOW) {
       showType = 3  ;                            // Green animation Type 3
     
      startShow(showType);
    }
  }
  
// ===========================================================================================

if (Blue == LOW && BlueOld == HIGH) {
    delay(20);
   
    
    if (Blue == LOW) {
       showType = 4  ;                            // Blue animation Type 4
     
      startShow(showType);
    }
  }

// ===========================================================================================

if (Topaz == LOW && TopazOld == HIGH) {
    delay(20);
   
    
    if (Topaz == LOW) {
       showType = 5  ;                            // Topaz animation Type 5
     
      startShow(showType);
    }
  }

// ===========================================================================================

if (Lilac == LOW && LilacOld == HIGH) {
    delay(20);
   
    
    if (Lilac == LOW) {
       showType = 6  ;                            // Topaz animation Type 6
     
      startShow(showType);
    }
  }
    
// ===========================================================================================


    if (Rainbow == LOW && RainbowOld == HIGH) {
    delay(20);

    if (Rainbow == LOW) {
showType = 8;                            // Rainbow animation Type 8
      startShow(showType);
    }
  }

// ===========================================================================================

      if (rgb == LOW && rgbOld == HIGH) {
    delay(20);

    if (rgb == LOW) {
   showType = 7;                            // Mix animation Type 7
     rgb = HIGH;

      startShow(showType);
    }
  }

// ===========================================================================================
// ===========================================================================================
