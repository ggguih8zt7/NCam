cmd_/home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/usb/.install := bash scripts/headers_install.sh /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/usb ./include/uapi/linux/usb audio.h cdc-wdm.h cdc.h ch11.h ch9.h functionfs.h g_printer.h gadgetfs.h midi.h tmc.h video.h; bash scripts/headers_install.sh /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/usb ./include/linux/usb ; bash scripts/headers_install.sh /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/usb ./include/generated/uapi/linux/usb ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/usb/$$F; done; touch /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/usb/.install