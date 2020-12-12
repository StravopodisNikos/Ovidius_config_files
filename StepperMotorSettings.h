// Stepper Motor and Driver Settings

// CAUTION! -> PINS 0,1,2,7,8 ARE USED FOR SERIAL PORT COMMUNICATION AND MUST NOT BE CONFIGURED!!!

// MOTOR ID: STP1_ID Joint1 axis Stepper Nema34

#define HOME_TRIGGER_SWITCH        	3                                // This is the Homing trigger switch Previous name:HALL_SWITCH_PIN1
#define HALL_SWITCH_PIN2        	18				 // This is the Hall effect-MIN limit switch	(4 when no interrupt used)		
#define HALL_SWITCH_PIN3        	19				 // This is the Hall effect-MAX limit switch    (5 when no interrupt used)
 
#define STEP_Pin               		6
#define DIR_Pin                		9
#define ENABLE_Pin               	10

#define RED_LED_PIN                	A0                               // the number of the RED LED pin
#define GREEN_LED_PIN               	A1                               
#define BLUE_LED_PIN               	A2                               

#define SPR1                   		3200                             // Speps per Revolution from Dip Switch Driver Configuration [steps/rev]
#define GEAR_FACTOR_PLANETARY  	     	40                               // Gear Reducer used
#define FT_CLOSED_LOOP                  200000                           // Stepper Driver Frequency [1/micros]->[*10^-6 * 1/sec]

#define STP_MOVING_STATUS_THRESHOLD     1

#define STP_HOMING_DELAY		500
#define STP_FIXED_DELAY			500	

