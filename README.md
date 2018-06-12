# STM32_xcorr

This implementation is intended to be used in conjuction with a stroboscopic RADAR.

* First make sure to follow this [this tutorial](https://mhageh.github.io/stm32/2016/05/28/stm32-dev.html) to properly setup your development environment for STM32F4 dev with NuttX. 
* Create symoblic links from the stm32f4_support to configs/ of nuttx.
```
cd nuttx/main/directory/configs/; 
ln -s ../../path/to/stm32f4_support/ .
```
* Modify the kconfig of nuttx/configs file accordingly :
```
 
    if ARCH_BOARD_STM32F4_SUPPORT
		source "configs/stm32f4_support/Kconfig"
	endif
```

```
	config ARCH_BOARD_STM32F4_SUPPORT
	bool "STMicro STM32F4-Support board"
	depends on ARCH_CHIP_STM32F407VG
	select ARCH_HAVE_LEDS
	select ARCH_HAVE_BUTTONS
	select ARCH_HAVE_IRQBUTTONS	
	---help---
		
		STM32F4 board based on the STMicro STM32F407VGT6 MCU, used in conjunction
		of the STM32F334 for stroboscopic operations.
```

```	
	default "stm32f4_support"           if ARCH_BOARD_STM32F4_SUPPORT
```
* Then take into account the configuration :
```    
    cd nuttx/main/directory;
    ./tools/configure.sh configs/stm32f4_support/strobo_support
```
* Compile and flash :
Starting with an evaluation board :
```
    make -j8; st-flash write nuttx.bin 0x08000000; 
```
