
#define WEAK __attribute__ ((weak))
#define ALIAS(f) __attribute__ ((weak, alias(# f)))

extern int main(void);
void ResetISR(void);
WEAK void IntDefaultHandler(void);
WEAK extern void __valid_user_code_checksum();


// Code read protection setting. Defaults to none, set one of the defines
// via CMake
#if defined(CRP_SETTING_NO_ISP)
const int crp_setting __attribute__((__used__)) __attribute__ ((section(".crp_setting"))) = 0x4E697370;
#elif defined(CRP_SETTING_CRP1)
const int crp_setting __attribute__((__used__)) __attribute__ ((section(".crp_setting"))) = 0x12345678;
#elif defined(CRP_SETTING_CRP2)
const int crp_setting __attribute__((__used__)) __attribute__ ((section(".crp_setting"))) = 0x87654321;
#elif defined(CRP_SETTING_CRP3)
const int crp_setting __attribute__((__used__)) __attribute__ ((section(".crp_setting"))) = 0x43218765;
#else
const int crp_setting __attribute__((__used__)) __attribute__ ((section(".crp_setting"))) = 0;
#endif

#ifndef STACK_CANARY
#define STACK_CANARY 0x5A4B3C2D
#endif



/* cortex-M0 handlers */
void NMI_Handler(void) ALIAS(IntDefaultHandler);
void HardFault_Handler(void) ALIAS(IntDefaultHandler);
void SVC_Handler(void) ALIAS(IntDefaultHandler);
void PendSV_Handler(void) ALIAS(IntDefaultHandler);
void SysTick_Handler(void) ALIAS(IntDefaultHandler);

#if defined(CHIP_LPC110X)
void TIMER16_0_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER16_1_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER32_0_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER32_1_IRQHandler (void) ALIAS(IntDefaultHandler);
void SSP0_IRQHandler (void) ALIAS(IntDefaultHandler);
void UART_IRQHandler (void) ALIAS(IntDefaultHandler);
void ADC_IRQHandler (void) ALIAS(IntDefaultHandler);
void WDT_IRQHandler (void) ALIAS(IntDefaultHandler);
void BOD_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIOINT1_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIOINT0_IRQHandler (void) ALIAS(IntDefaultHandler);
void WAKEUP_IRQHandler  (void) ALIAS(IntDefaultHandler);

#elif defined(CHIP_LPC11XXLV)
void I2C_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER16_0_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER16_1_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER32_0_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER32_1_IRQHandler (void) ALIAS(IntDefaultHandler);
void SSP0_IRQHandler (void) ALIAS(IntDefaultHandler);
void UART_IRQHandler (void) ALIAS(IntDefaultHandler);
void ADC_IRQHandler (void) ALIAS(IntDefaultHandler);
void WDT_IRQHandler (void) ALIAS(IntDefaultHandler);
void BOD_IRQHandler (void) ALIAS(IntDefaultHandler);
void FMC_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIOINT3_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIOINT2_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIOINT1_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIOINT0_IRQHandler (void) ALIAS(IntDefaultHandler);
void WAKEUP_IRQHandler  (void) ALIAS(IntDefaultHandler);

#elif defined(CHIP_LPC11AXX)
void PIN_INT0_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIN_INT1_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIN_INT2_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIN_INT3_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIN_INT4_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIN_INT5_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIN_INT6_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIN_INT7_IRQHandler (void) ALIAS(IntDefaultHandler);
void GINT0_IRQHandler (void) ALIAS(IntDefaultHandler);
void GINT1_IRQHandler (void) ALIAS(IntDefaultHandler);
void ACMP_IRQHandler (void) ALIAS(IntDefaultHandler);
void DAC_IRQHandler (void) ALIAS(IntDefaultHandler);
void SSP1_IRQHandler (void) ALIAS(IntDefaultHandler);
void I2C_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER16_0_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER16_1_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER32_0_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER32_1_IRQHandler (void) ALIAS(IntDefaultHandler);
void SSP0_IRQHandler (void) ALIAS(IntDefaultHandler);
void USART_IRQHandler (void) ALIAS(IntDefaultHandler);
void ADC_IRQHandler (void) ALIAS(IntDefaultHandler);
void WDT_IRQHandler (void) ALIAS(IntDefaultHandler);
void BOD_IRQHandler (void) ALIAS(IntDefaultHandler);
void FMC_IRQHandler (void) ALIAS(IntDefaultHandler);

#elif defined(CHIP_LPC11CXX)
void CAN_IRQHandler (void) ALIAS(IntDefaultHandler);
void SSP1_IRQHandler (void) ALIAS(IntDefaultHandler);
void I2C_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER16_0_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER16_1_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER32_0_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER32_1_IRQHandler (void) ALIAS(IntDefaultHandler);
void SSP0_IRQHandler (void) ALIAS(IntDefaultHandler);
void UART_IRQHandler (void) ALIAS(IntDefaultHandler);
void ADC_IRQHandler (void) ALIAS(IntDefaultHandler);
void WDT_IRQHandler (void) ALIAS(IntDefaultHandler);
void BOD_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIOINT3_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIOINT2_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIOINT1_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIOINT0_IRQHandler (void) ALIAS(IntDefaultHandler);
void WAKEUP_IRQHandler  (void) ALIAS(IntDefaultHandler);

#elif defined(CHIP_LPC1125)
void ADCB_IRQHandler (void) ALIAS(IntDefaultHandler);
void SSP1_IRQHandler (void) ALIAS(IntDefaultHandler);
void I2C_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER16_0_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER16_1_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER32_0_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER32_1_IRQHandler (void) ALIAS(IntDefaultHandler);
void SSP0_IRQHandler (void) ALIAS(IntDefaultHandler);
void UART_IRQHandler (void) ALIAS(IntDefaultHandler);
void UART1_IRQHandler (void) ALIAS(IntDefaultHandler);
void UART2_IRQHandler (void) ALIAS(IntDefaultHandler);
void ADCA_IRQHandler (void) ALIAS(IntDefaultHandler);
void WDT_IRQHandler (void) ALIAS(IntDefaultHandler);
void BOD_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIOINT3_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIOINT2_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIOINT1_IRQHandler (void) ALIAS(IntDefaultHandler);
void PIOINT0_IRQHandler (void) ALIAS(IntDefaultHandler);
void WAKEUP_IRQHandler  (void) ALIAS(IntDefaultHandler);

#elif defined(CHIP_LPC11EXX)
void FLEX_INT0_IRQHandler (void) ALIAS(IntDefaultHandler);
void FLEX_INT1_IRQHandler (void) ALIAS(IntDefaultHandler);
void FLEX_INT2_IRQHandler (void) ALIAS(IntDefaultHandler);
void FLEX_INT3_IRQHandler (void) ALIAS(IntDefaultHandler);
void FLEX_INT4_IRQHandler (void) ALIAS(IntDefaultHandler);
void FLEX_INT5_IRQHandler (void) ALIAS(IntDefaultHandler);
void FLEX_INT6_IRQHandler (void) ALIAS(IntDefaultHandler);
void FLEX_INT7_IRQHandler (void) ALIAS(IntDefaultHandler);
void GINT0_IRQHandler (void) ALIAS(IntDefaultHandler);
void GINT1_IRQHandler (void) ALIAS(IntDefaultHandler);
void SSP1_IRQHandler (void) ALIAS(IntDefaultHandler);
void I2C_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER16_0_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER16_1_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER32_0_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER32_1_IRQHandler (void) ALIAS(IntDefaultHandler);
void SSP0_IRQHandler (void) ALIAS(IntDefaultHandler);
void UART_IRQHandler (void) ALIAS(IntDefaultHandler);
void ADC_IRQHandler (void) ALIAS(IntDefaultHandler);
void WDT_IRQHandler (void) ALIAS(IntDefaultHandler);
void BOD_IRQHandler (void) ALIAS(IntDefaultHandler);
void FMC_IRQHandler (void) ALIAS(IntDefaultHandler);

#elif defined(CHIP_LPC11UXX)
void FLEX_INT0_IRQHandler (void) ALIAS(IntDefaultHandler);
void FLEX_INT1_IRQHandler (void) ALIAS(IntDefaultHandler);
void FLEX_INT2_IRQHandler (void) ALIAS(IntDefaultHandler);
void FLEX_INT3_IRQHandler (void) ALIAS(IntDefaultHandler);
void FLEX_INT4_IRQHandler (void) ALIAS(IntDefaultHandler);
void FLEX_INT5_IRQHandler (void) ALIAS(IntDefaultHandler);
void FLEX_INT6_IRQHandler (void) ALIAS(IntDefaultHandler);
void FLEX_INT7_IRQHandler (void) ALIAS(IntDefaultHandler);
void GINT0_IRQHandler (void) ALIAS(IntDefaultHandler);
void GINT1_IRQHandler (void) ALIAS(IntDefaultHandler);
void SSP1_IRQHandler (void) ALIAS(IntDefaultHandler);
void I2C_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER16_0_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER16_1_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER32_0_IRQHandler (void) ALIAS(IntDefaultHandler);
void TIMER32_1_IRQHandler (void) ALIAS(IntDefaultHandler);
void SSP0_IRQHandler (void) ALIAS(IntDefaultHandler);
void UART_IRQHandler (void) ALIAS(IntDefaultHandler);
void USB_IRQHandler (void) ALIAS(IntDefaultHandler);
void USB_FIQHandler (void) ALIAS(IntDefaultHandler);
void ADC_IRQHandler (void) ALIAS(IntDefaultHandler);
void WDT_IRQHandler (void) ALIAS(IntDefaultHandler);
void BOD_IRQHandler (void) ALIAS(IntDefaultHandler);
void FMC_IRQHandler (void) ALIAS(IntDefaultHandler);
void USBWakeup_IRQHandler (void) ALIAS(IntDefaultHandler);

#else
#error Please define a valid CHIP_11* device
#endif

extern void _vStackTop(void);
extern void _pvHeapStart(void);

extern void(*const g_pfnVectors[]) (void);
__attribute__ ((section(".isr_vector")))
void(*const g_pfnVectors[]) (void) = {
    // Core Level - CM0
    &_vStackTop,                    // The initial stack pointer
    ResetISR,						// The reset handler
    NMI_Handler,                    // The NMI handler
    HardFault_Handler,              // The hard fault handler
    0,                              // Reserved
    0,                      	    // Reserved
    0,                              // Reserved
    __valid_user_code_checksum,     // Flash checksum (see linker script)
    0,                              // Reserved
    0,                              // Reserved
    0,                              // Reserved
    SVC_Handler,                    // SVCall handler
    0,                              // Reserved
    0,                              // Reserved
    PendSV_Handler,                 // The PendSV handler
    SysTick_Handler,                // The SysTick handler

#if defined(CHIP_LPC110X)
    // Wakeup sources for the I/O pins:
    //   PIO0 (0:11)
    //   PIO1 (0)
    WAKEUP_IRQHandler,                      // PIO0_0  Wakeup
    0, 				                     	// Reserved
    0, 				                     	// Reserved
    0, 				                     	// Reserved
    0, 				                     	// Reserved
    0, 				                     	// Reserved
    0, 				                     	// Reserved
    0, 				                     	// Reserved
    WAKEUP_IRQHandler,                      // PIO0_8  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_9  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_10 Wakeup
    WAKEUP_IRQHandler,                      // PIO0_11 Wakeup
    WAKEUP_IRQHandler,                      // PIO1_0  Wakeup

    0, 				                     	// Reserved
    0, 				                     	// Reserved
    0, 				                     	// Reserved
    TIMER16_0_IRQHandler,                   // CT16B0 (16-bit Timer 0)
    TIMER16_1_IRQHandler,                   // CT16B1 (16-bit Timer 1)
    TIMER32_0_IRQHandler,                   // CT32B0 (32-bit Timer 0)
    TIMER32_1_IRQHandler,                   // CT32B1 (32-bit Timer 1)
    SSP0_IRQHandler,                      	// SPI/SSP0 Interrupt
    UART_IRQHandler,                      	// UART0

    0, 				                     	// Reserved
    0,                      				// Reserved

    ADC_IRQHandler,                      	// ADC   (A/D Converter)
    WDT_IRQHandler,                      	// WDT   (Watchdog Timer)
    BOD_IRQHandler,                      	// BOD   (Brownout Detect)
    0,                      				// Reserved
    0, 				                     	// Reserved
    0, 				                     	// Reserved
    PIOINT1_IRQHandler,                     // PIO INT1
    PIOINT0_IRQHandler,                     // PIO INT0

#elif defined(CHIP_LPC11XXLV)
    // Wakeup sources for the I/O pins:
    //   PIO0 (0:11)
    //   PIO1 (0)
    WAKEUP_IRQHandler,                      // PIO0_0  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_1  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_2  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_3  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_4  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_5  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_6  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_7  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_8  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_9  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_10 Wakeup
    WAKEUP_IRQHandler,                      // PIO0_11 Wakeup
    WAKEUP_IRQHandler,                      // PIO1_0  Wakeup

    0, 				                     	// Reserved
    0,                      				// Reserved

    I2C_IRQHandler,                      	// I2C0
    TIMER16_0_IRQHandler,                   // CT16B0 (16-bit Timer 0)
    TIMER16_1_IRQHandler,                   // CT16B1 (16-bit Timer 1)
    TIMER32_0_IRQHandler,                   // CT32B0 (32-bit Timer 0)
    TIMER32_1_IRQHandler,                   // CT32B1 (32-bit Timer 1)
    SSP0_IRQHandler,                      	// SPI/SSP0 Interrupt
    UART_IRQHandler,                      	// UART0

    0, 				                     	// Reserved
    0,                      				// Reserved

    ADC_IRQHandler,                      	// ADC   (A/D Converter)
    WDT_IRQHandler,                      	// WDT   (Watchdog Timer)
    BOD_IRQHandler,                      	// BOD   (Brownout Detect)
    FMC_IRQHandler,                         // 16+27: IP2111 Flash Memory Controller
    PIOINT3_IRQHandler,                     // PIO INT3
    PIOINT2_IRQHandler,                     // PIO INT2
    PIOINT1_IRQHandler,                     // PIO INT1
    PIOINT0_IRQHandler,                     // PIO INT0

#elif defined(CHIP_LPC11AXX)
    // LPC11A specific handlers
    PIN_INT0_IRQHandler,          // 16+ 0: Pin interrupt
    PIN_INT1_IRQHandler,          // 16+ 1: Pin interrupt
    PIN_INT2_IRQHandler,          // 16+ 2: Pin interrupt
    PIN_INT3_IRQHandler,          // 16+ 3: Pin interrupt
    PIN_INT4_IRQHandler,          // 16+ 4: Pin interrupt
    PIN_INT5_IRQHandler,          // 16+ 5: Pin interrupt
    PIN_INT6_IRQHandler,          // 16+ 6: Pin interrupt
    PIN_INT7_IRQHandler,          // 16+ 7: Pin interrupt
    GINT0_IRQHandler,             // 16+ 8: Port interrupt
    GINT1_IRQHandler,             // 16+ 9: Port interrupt
    ACMP_IRQHandler,              // 16+10: Analog Comparator
    DAC_IRQHandler,               // 16+11: D/A Converter
    0,                            // 16+12: Reserved
    0,                            // 16+13: Reserved
    SSP1_IRQHandler,              // 16+14: SSP1
    I2C_IRQHandler,               // 16+15: I2C
    TIMER16_0_IRQHandler,         // 16+16: 16-bit Timer0
    TIMER16_1_IRQHandler,         // 16+17: 16-bit Timer1
    TIMER32_0_IRQHandler,         // 16+18: 32-bit Timer0
    TIMER32_1_IRQHandler,         // 16+19: 32-bit Timer1
    SSP0_IRQHandler,              // 16+20: SSP0
    USART_IRQHandler,             // 16+21: USART
    0,                            // 16+22: Reserved
    0,                            // 16+23: Reserved
    ADC_IRQHandler,               // 16+24: A/D Converter
    WDT_IRQHandler,               // 16+25: Watchdog Timer
    BOD_IRQHandler,               // 16+26: Brown Out Detect
    FMC_IRQHandler,               // 16+27: IP2111 Flash Memory Controller
    0,                            // 16+28: Reserved
    0,                            // 16+29: ReserveD
    0,                            // 16+30: Reserved
    0,                            // 16+31: Reserved

#elif defined(CHIP_LPC11CXX)
    // Wakeup sources for the I/O pins:
    //   PIO0 (0:11)
    //   PIO1 (0)
    WAKEUP_IRQHandler,                      // PIO0_0  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_1  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_2  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_3  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_4  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_5  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_6  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_7  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_8  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_9  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_10 Wakeup
    WAKEUP_IRQHandler,                      // PIO0_11 Wakeup
    WAKEUP_IRQHandler,                      // PIO1_0  Wakeup

    CAN_IRQHandler,							// C_CAN Interrupt
    SSP1_IRQHandler, 						// SPI/SSP1 Interrupt
    I2C_IRQHandler,                      	// I2C0
    TIMER16_0_IRQHandler,                   // CT16B0 (16-bit Timer 0)
    TIMER16_1_IRQHandler,                   // CT16B1 (16-bit Timer 1)
    TIMER32_0_IRQHandler,                   // CT32B0 (32-bit Timer 0)
    TIMER32_1_IRQHandler,                   // CT32B1 (32-bit Timer 1)
    SSP0_IRQHandler,                      	// SPI/SSP0 Interrupt
    UART_IRQHandler,                      	// UART0

    0, 				                     	// Reserved
    0,                      				// Reserved

    ADC_IRQHandler,                      	// ADC   (A/D Converter)
    WDT_IRQHandler,                      	// WDT   (Watchdog Timer)
    BOD_IRQHandler,                      	// BOD   (Brownout Detect)
    0,                      				// Reserved
    PIOINT3_IRQHandler,                     // PIO INT3
    PIOINT2_IRQHandler,                     // PIO INT2
    PIOINT1_IRQHandler,                     // PIO INT1
    PIOINT0_IRQHandler,                     // PIO INT0

#elif defined(CHIP_LPC1125)
    // Wakeup sources for the I/O pins:
    //   PIO0 (0:11)
    //   PIO1 (0)
    WAKEUP_IRQHandler,                      // PIO0_0  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_1  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_2  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_3  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_4  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_5  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_6  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_7  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_8  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_9  Wakeup
    WAKEUP_IRQHandler,                      // PIO0_10 Wakeup
    WAKEUP_IRQHandler,                      // PIO0_11 Wakeup
    WAKEUP_IRQHandler,                      // PIO1_0  Wakeup

    ADCB_IRQHandler,						// ADC Sequence B Interrupt
    SSP1_IRQHandler, 						// SPI/SSP1 Interrupt
    I2C_IRQHandler,                      	// I2C0
    TIMER16_0_IRQHandler,                   // CT16B0 (16-bit Timer 0)
    TIMER16_1_IRQHandler,                   // CT16B1 (16-bit Timer 1)
    TIMER32_0_IRQHandler,                   // CT32B0 (32-bit Timer 0)
    TIMER32_1_IRQHandler,                   // CT32B1 (32-bit Timer 1)
    SSP0_IRQHandler,                      	// SPI/SSP0 Interrupt
    UART_IRQHandler,                      	// UART0
    UART1_IRQHandler,                     	// UART1
    UART2_IRQHandler,                      	// UART2
    ADCA_IRQHandler,                      	// ADC Sequence A (A/D Converter)
    WDT_IRQHandler,                      	// WDT   (Watchdog Timer)
    BOD_IRQHandler,                      	// BOD   (Brownout Detect)
    0,                      				// Reserved
    PIOINT3_IRQHandler,                     // PIO INT3
    PIOINT2_IRQHandler,                     // PIO INT2
    PIOINT1_IRQHandler,                     // PIO INT1
    PIOINT0_IRQHandler,                     // PIO INT0

#elif defined(CHIP_LPC11EXX)
    // LPC11E specific handlers
    FLEX_INT0_IRQHandler,             //  0 - GPIO pin interrupt 0
    FLEX_INT1_IRQHandler,             //  1 - GPIO pin interrupt 1
    FLEX_INT2_IRQHandler,             //  2 - GPIO pin interrupt 2
    FLEX_INT3_IRQHandler,             //  3 - GPIO pin interrupt 3
    FLEX_INT4_IRQHandler,             //  4 - GPIO pin interrupt 4
    FLEX_INT5_IRQHandler,             //  5 - GPIO pin interrupt 5
    FLEX_INT6_IRQHandler,             //  6 - GPIO pin interrupt 6
    FLEX_INT7_IRQHandler,             //  7 - GPIO pin interrupt 7
    GINT0_IRQHandler,                 //  8 - GPIO GROUP0 interrupt
    GINT1_IRQHandler,                 //  9 - GPIO GROUP1 interrupt
    0,                                // 10 - Reserved
    0,                                // 11 - Reserved
    0,                                // 12 - Reserved
    0,                                // 13 - Reserved
    SSP1_IRQHandler,                  // 14 - SPI/SSP1 Interrupt
    I2C_IRQHandler,                   // 15 - I2C0
    TIMER16_0_IRQHandler,             // 16 - CT16B0 (16-bit Timer 0)
    TIMER16_1_IRQHandler,             // 17 - CT16B1 (16-bit Timer 1)
    TIMER32_0_IRQHandler,             // 18 - CT32B0 (32-bit Timer 0)
    TIMER32_1_IRQHandler,             // 19 - CT32B1 (32-bit Timer 1)
    SSP0_IRQHandler,                  // 20 - SPI/SSP0 Interrupt
    UART_IRQHandler,                  // 21 - UART0
    0,                   			  // 22 - Reserved
    0,                   			  // 23 - Reserved
    ADC_IRQHandler,                   // 24 - ADC (A/D Converter)
    WDT_IRQHandler,                   // 25 - WDT (Watchdog Timer)
    BOD_IRQHandler,                   // 26 - BOD (Brownout Detect)
    FMC_IRQHandler,                   // 27 - IP2111 Flash Memory Controller
    0,                                // 28 - Reserved
    0,                                // 29 - Reserved
    0,             					  // 30 - Reserved
    0,                                // 31 - Reserved

#elif defined(CHIP_LPC11UXX)
    // LPC11U specific handlers
    FLEX_INT0_IRQHandler,             //  0 - GPIO pin interrupt 0
    FLEX_INT1_IRQHandler,             //  1 - GPIO pin interrupt 1
    FLEX_INT2_IRQHandler,             //  2 - GPIO pin interrupt 2
    FLEX_INT3_IRQHandler,             //  3 - GPIO pin interrupt 3
    FLEX_INT4_IRQHandler,             //  4 - GPIO pin interrupt 4
    FLEX_INT5_IRQHandler,             //  5 - GPIO pin interrupt 5
    FLEX_INT6_IRQHandler,             //  6 - GPIO pin interrupt 6
    FLEX_INT7_IRQHandler,             //  7 - GPIO pin interrupt 7
    GINT0_IRQHandler,                 //  8 - GPIO GROUP0 interrupt
    GINT1_IRQHandler,                 //  9 - GPIO GROUP1 interrupt
    0,                                // 10 - Reserved
    0,                                // 11 - Reserved
    0,                                // 12 - Reserved
    0,                                // 13 - Reserved
    SSP1_IRQHandler,                  // 14 - SPI/SSP1 Interrupt
    I2C_IRQHandler,                   // 15 - I2C0
    TIMER16_0_IRQHandler,             // 16 - CT16B0 (16-bit Timer 0)
    TIMER16_1_IRQHandler,             // 17 - CT16B1 (16-bit Timer 1)
    TIMER32_0_IRQHandler,             // 18 - CT32B0 (32-bit Timer 0)
    TIMER32_1_IRQHandler,             // 19 - CT32B1 (32-bit Timer 1)
    SSP0_IRQHandler,                  // 20 - SPI/SSP0 Interrupt
    UART_IRQHandler,                  // 21 - UART0
    USB_IRQHandler,                   // 22 - USB IRQ
    USB_FIQHandler,                   // 23 - USB FIQ
    ADC_IRQHandler,                   // 24 - ADC (A/D Converter)
    WDT_IRQHandler,                   // 25 - WDT (Watchdog Timer)
    BOD_IRQHandler,                   // 26 - BOD (Brownout Detect)
    FMC_IRQHandler,                   // 27 - IP2111 Flash Memory Controller
    0,                                // 28 - Reserved
    0,                                // 29 - Reserved
    USBWakeup_IRQHandler,             // 30 - USB wake-up interrupt
    0,                                // 31 - Reserved

#else
#error Please define a valid CHIP_11* device
#endif
};

__attribute__ ((section(".after_vectors")))
void data_init(unsigned int romstart, unsigned int start, unsigned int len)
{
    unsigned int *pulDest = (unsigned int *) start;
    unsigned int *pulSrc = (unsigned int *) romstart;
    unsigned int loop;
    for (loop = 0; loop < len; loop = loop + 4)
        *pulDest++ = *pulSrc++;
}

__attribute__ ((section(".after_vectors")))
void bss_init(unsigned int start, unsigned int len)
{
    unsigned int *pulDest = (unsigned int *) start;
    unsigned int loop;
    for (loop = 0; loop < len; loop = loop + 4)
        *pulDest++ = 0;
}

__attribute__ ((section(".after_vectors")))
void stack_init(unsigned int start, unsigned int len, unsigned int val)
{
    // Some stack memory is required for running the startup code itself.
    // To avoid corrupting our own stack, skip the first few bytes.
    //
    // Most firmwares will use more than 256 bytes of memory, so skipping 256
    // has no adverse effects on the result of stack_unused_size().
    const unsigned int stack_required_startup = 256;
    if(len < stack_required_startup) {
        return;
    }
    len-=stack_required_startup;

    unsigned int *pulDest = (unsigned int *) start;
    unsigned int loop;
    for (loop = 0; loop < len; loop = loop + 4) {
        *pulDest++ = val++;
    }
}

extern unsigned int __data_section_table;
extern unsigned int __data_section_table_end;
extern unsigned int __bss_section_table;
extern unsigned int __bss_section_table_end;

__attribute__ ((section(".after_vectors")))
void ResetISR(void)
{

    unsigned int LoadAddr, ExeAddr, SectionLen;
    unsigned int *SectionTableAddr;

    // Load base address of Global Section Table
    SectionTableAddr = &__data_section_table;

    // Copy the data sections from flash to SRAM.
    while (SectionTableAddr < &__data_section_table_end) {
        LoadAddr = *SectionTableAddr++;
        ExeAddr = *SectionTableAddr++;
        SectionLen = *SectionTableAddr++;
        data_init(LoadAddr, ExeAddr, SectionLen);
    }
    // At this point, SectionTableAddr = &__bss_section_table;
    // Zero fill the bss segment
    while (SectionTableAddr < &__bss_section_table_end) {
        ExeAddr = *SectionTableAddr++;
        SectionLen = *SectionTableAddr++;
        bss_init(ExeAddr, SectionLen);
    }

    // Init stack: initialize the stack memory with canary values.
    // This enables the user code to check the maximum used memory
    // by scanning for canary values.
    stack_init((int)&_pvHeapStart, 
            (unsigned int)((unsigned int)&_vStackTop - 
                (unsigned int)&_pvHeapStart), STACK_CANARY);

    main();
    while(1);
}

__attribute__ ((section(".after_vectors")))
void IntDefaultHandler(void)
{
    while (1) {}
}

