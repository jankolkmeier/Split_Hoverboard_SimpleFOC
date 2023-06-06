// Gen 2.5

// LED defines
#define LED_GREEN 	PB3
#define LED_ORANGE 	PA15
#define LED_RED 	PB4

#define UPPER_LED_PIN PB5	// 2.0	PA1
#define LOWER_LED_PIN PB8	// 2.0	PA0


// Hall sensor defines
#define HALL_A_PIN PB11		// yellow
#define HALL_B_PIN PA1		// green
#define HALL_C_PIN PC14		// blue


// Brushless Control DC (BLDC) defines
// Channel G
#define BLDC_GH_PIN PA10
#define BLDC_GL_PIN PB15
// Channel B
#define BLDC_BH_PIN PA9
#define BLDC_BL_PIN PB14
// Channel Y
#define BLDC_YH_PIN PA8
#define BLDC_YL_PIN PB13


// Self hold defines
// Set output high to keep the latch ON. Set low to turn the board OFF
#define SELF_HOLD_PIN PB2

// Button defines
// on/off (POW) push-button. So also a connection (i guess with some smd resistor in between) to a MCU pin.
#define BUTTON_PIN GPIO_PIN_2			// robo, based on Herleybob:defines.h
#define BUTTON_PORT GPIOB						// robo, based on Herleybob:defines.h

// Button defines
// Usually used as INPUT but could be used as analog input if available on the pin to detect button press with low voltage batteries  
#define BUTTON_PIN PA5
