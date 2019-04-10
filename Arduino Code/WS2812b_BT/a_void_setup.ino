//  VOID SETUP

void setup() {

   BT.begin(9600);
   
   BT.println("Connected to Arduino");
    

  strip.setBrightness(BRIGHTNESS);  
   

  strip.begin();
  strip.show();
}
char a;
