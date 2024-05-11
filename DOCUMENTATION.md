# boards.txt Differences

We have three parts, 
1) upload settings; 
2) bootloader settings, and;
3) build settings.

## upload
The default config has the following extra lines:
```
leonardo.upload.tool.default=avrdude
leonardo.upload.tool.network=arduino_ota
```

## bootloader
The default config has the following extra lines:
```
leonardo.bootloader.tool.default=avrdude
```
And uses a different bootloader file:
```
#default
leonardo.bootloader.file=caterina/Caterina-Leonardo.hex

#wifiduck
leonardo.bootloader.file=caterina/Caterina-promicro16.hex
```

## build
The build has multiple changes, mostly about VID and PID of the USB and building/compiling flags

# Source

## default Arduino Leonardo boards.txt
```
leonardo.name=Arduino Leonardo
leonardo.vid.0=0x2341
leonardo.pid.0=0x0036
leonardo.vid.1=0x2341
leonardo.pid.1=0x8036
leonardo.vid.2=0x2A03
leonardo.pid.2=0x0036
leonardo.vid.3=0x2A03
leonardo.pid.3=0x8036
leonardo.upload_port.0.vid=0x2341
leonardo.upload_port.0.pid=0x0036
leonardo.upload_port.1.vid=0x2341
leonardo.upload_port.1.pid=0x8036
leonardo.upload_port.2.vid=0x2A03
leonardo.upload_port.2.pid=0x0036
leonardo.upload_port.3.vid=0x2A03
leonardo.upload_port.3.pid=0x8036
leonardo.upload_port.4.board=leonardo

leonardo.upload.tool=avrdude
leonardo.upload.tool.default=avrdude
leonardo.upload.tool.network=arduino_ota
leonardo.upload.protocol=avr109
leonardo.upload.maximum_size=28672
leonardo.upload.maximum_data_size=2560
leonardo.upload.speed=57600
leonardo.upload.disable_flushing=true
leonardo.upload.use_1200bps_touch=true
leonardo.upload.wait_for_upload_port=true

leonardo.bootloader.tool=avrdude
leonardo.bootloader.tool.default=avrdude
leonardo.bootloader.low_fuses=0xff
leonardo.bootloader.high_fuses=0xd8
leonardo.bootloader.extended_fuses=0xcb
leonardo.bootloader.file=caterina/Caterina-Leonardo.hex
leonardo.bootloader.unlock_bits=0x3F
leonardo.bootloader.lock_bits=0x2F

leonardo.build.mcu=atmega32u4
leonardo.build.f_cpu=16000000L
leonardo.build.vid=0x2341
leonardo.build.pid=0x8036
leonardo.build.usb_product="Arduino Leonardo"
leonardo.build.board=AVR_LEONARDO
leonardo.build.core=arduino
leonardo.build.variant=leonardo
leonardo.build.extra_flags={build.usb_flags}
```

## wifiduck Arduino Leonardo boards.txt
```
leonardo.name=Arduino Leonardo
                       
leonardo.upload.tool=avrdude
leonardo.upload.protocol=avr109
leonardo.upload.maximum_size=28672
leonardo.upload.maximum_data_size=2560
leonardo.upload.speed=57600
leonardo.upload.disable_flushing=true
leonardo.upload.use_1200bps_touch=true
leonardo.upload.wait_for_upload_port=true
                       
leonardo.bootloader.tool=avrdude
leonardo.bootloader.unlock_bits=0x3F
leonardo.bootloader.lock_bits=0x2F
leonardo.bootloader.low_fuses=0xFF
leonardo.bootloader.high_fuses=0xD8
                       
leonardo.build.board=AVR_ATMEGA32U4
leonardo.build.core=arduino
leonardo.build.mcu=atmega32u4
leonardo.build.variant=leonardo
                       
# CPU #                
leonardo.build.f_cpu=16000000L
leonardo.bootloader.extended_fuses=0xCB
leonardo.bootloader.file=caterina/Caterina-promicro16.hex
                       
... etc
```