# Arduino_Scale_Code

Project instructions:
1. Make a scale thaty measures to a tenth of a gram.
2. Do not use premade load cells.
3. Keep budget under $100.

Hardware used: 
1. Arduino Uno
2. HX711 AD Converter
3. Breadboard
4. Wires
5. Aluminum beam (You can use another metal material, but we chose aluminum because it had the level of rigidity and elasticity that we needed)
   * We did not know the exact type of aluminum used because we were calibrating our scale versus going with exact measurements. 
     If you chose to go by exact measurments you would need the exact specifications and dimensions of the aluminum beam for your equations. 
6. 2 strain guages (350 ohm nominal resistance)
   * These proved to be hard to find though we did find some on Amazon online that did the job. You could potentially increase the accuracy 
     using higher grade strain guages, but since we had a given budget we could not go this route.
7. Hanging weight platform
   * If you chose to use a hanging platform you will need to watch where you place your hanging platform so that you don't excede the 
     modulus of elasticity of the material that you are using.
8. LCD display

Summary:
This is code for an Arduino scale using a strain gauge to measure the deflection caused by applied force or the weight placed on our scale. 
In this class project we could not use a premade load cell, so this code is set up for use with a stain guage. 
The exact code will differ dependant on the hardware you use, and how you chose to connect them.
Also, your calibration factor will differ dependant on your setup and on your chosen unit of measurement. 
I calibrated this scale each time before use because moving the scale could jostle the strain gauge and the reading would be off as time went on. 
Also, it would be helpful to use a precision scale to get the exact weight of the item you're using for callibration. 
