#include "pico/stdlib.h"

#define LOW 0
#define HIGH 1

#define LED_PIN 25

int main(){
	gpio_init(LED_PIN);
	gpio_set_dir(LED_PIN, GPIO_OUT);
	
	while (1) {
	gpio_put(LED_PIN, LOW);
	sleep_ms(500);
	gpio_put(LED_PIN, HIGH);
	sleep_ms(500);
	}
}
