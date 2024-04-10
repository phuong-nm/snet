#include <stdbool.h>
#include "BlueNRG1_gpio.h"
#include "BlueNRG1_sysCtrl.h"

#define LED_GPIO_PIN        GPIO_Pin_2

int main(void)
{
    const GPIO_InitType init_param = {
        .GPIO_Mode = GPIO_Output,
        .GPIO_Pull = DISABLE,
        .GPIO_HighPwr = DISABLE,
        .GPIO_Pin = LED_GPIO_PIN,
    };

    SystemInit();

    SysCtrl_PeripheralClockCmd(CLOCK_PERIPH_GPIO, ENABLE);
    GPIO_Init((GPIO_InitType *)&init_param);

    while (true) {
        GPIO_ToggleBits(LED_GPIO_PIN);
        for (volatile int delay = 500 * 1000; delay > 0; delay--);
    }

    return 0;
}

