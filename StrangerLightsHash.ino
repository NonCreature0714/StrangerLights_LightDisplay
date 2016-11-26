#define HASH 63


uint8_t lights[64] = {
    0,
    0,
    0,  1,  2,  3,  4,  5,  6,  7,  8, 9,  10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
    0,  0,  0,  0,  254,  0,
    0,  1,  2,  3,  4,  5, 6,  7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
    0, 0, 0, 0
};
    
char alphabet[64] = {
    ' ',
    ' ',
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y', 'z',
    '_', '_', '_','_','_','_',
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
    '_', '_', '_', '_'
};

String sentence = "suck it trebeck";
    
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //For debug only.

}

void loop() {
    for(int i=0; i<sentence.length();++i){
        int light = lights[sentence[i]%HASH];
        Serial.print("Light #: " + light); 
        Serial.println(" Letter: " + alphabet[sentence[i]%HASH]);
        delay(1000);
    }
    delay(2000);

}
