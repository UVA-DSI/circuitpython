#define MICROPY_HW_BOARD_NAME "librelab::Big Dot"
#define MICROPY_HW_MCU_NAME "saml21e18"

#define MICROPY_PORT_A        (0)
#define MICROPY_PORT_B        (0)
#define MICROPY_PORT_C        (0)

#define BOARD_HAS_CRYSTAL 1

// I2C
#define DEFAULT_I2C_BUS_SCL (&pin_PA17)
#define DEFAULT_I2C_BUS_SDA (&pin_PA16)

// SPI
#define DEFAULT_SPI_BUS_SCK (&pin_PA19)
#define DEFAULT_SPI_BUS_MOSI (&pin_PA18)
#define DEFAULT_SPI_BUS_MISO (&pin_PA22)

// Serial1
#define DEFAULT_UART_BUS_RX (&pin_PA11)
#define DEFAULT_UART_BUS_TX (&pin_PA10)

#define IGNORE_PIN_PA12     1
#define IGNORE_PIN_PA13     1
#define IGNORE_PIN_PA20     1
#define IGNORE_PIN_PA21     1

// USB pins
#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1

// SWD pins
#define IGNORE_PIN_PA30     1
#define IGNORE_PIN_PA31     1
