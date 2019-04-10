//  HERE YOU CAN DEFINE THE DIFFERENT ANIMATIONS FOR EACH PROGRAM

void startShow(int i) {
  switch(i){

    case 0: colorWipe(strip.Color(0, 0, 0), SPEED);    // Black/off
            break;

    case 1: strip.setBrightness(255);                            // Changes the Brightness to MAX
            colorWipe(strip.Color(255, 255, 255), IMMEDIATELY);  // White
            strip.setBrightness(BRIGHTNESS);                     // Reset the Brightness to Default value
            break;  

    case 2: colorWipe(strip.Color(255, 0, 0), SPEED);  // Red
            break;

    case 3: colorWipe(strip.Color(0, 255, 0), SPEED);  // Green
            break;

    case 4: colorWipe(strip.Color(0, 0, 255), SPEED);  // Blue
            break;

    case 5: colorWipe(strip.Color(0, 250, 255), SPEED);  // Topaz
            break;            

    case 6: colorWipe(strip.Color(221, 130, 255), SPEED);  // Lilac
            break;            
    
    case 7: colorWipe(strip.Color(255, 0, 0), SPEED);  // Red
            colorWipe(strip.Color(0, 255, 0), SPEED);  // Green
            colorWipe(strip.Color(0, 0, 255), SPEED);  // Blue
            theaterChase(strip.Color(  0,   0, 127), SPEED); // Blue
            theaterChase(strip.Color(127,   0,   0), SPEED); // Red
            theaterChase(strip.Color(0,   127,   0), SPEED); // Green
            break;

    case 8: rainbowCycle(25);
            break;
  }
}
