cmd_/home/gccbuilder/work/mgcc-4.6/Release/build/armv7-marvell-linux-gnueabi-hard_i686/obj/linux-header-install/include/linux/isdn/.install := perl scripts/headers_install.pl /home/gccbuilder/work/mgcc-4.6/Release/build/armv7-marvell-linux-gnueabi-hard_i686/obj/linux-tmp-src/include/linux/isdn /home/gccbuilder/work/mgcc-4.6/Release/build/armv7-marvell-linux-gnueabi-hard_i686/obj/linux-header-install/include/linux/isdn arm capicmd.h; perl scripts/headers_install.pl /home/gccbuilder/work/mgcc-4.6/Release/build/armv7-marvell-linux-gnueabi-hard_i686/obj/linux-tmp-src/include/linux/isdn /home/gccbuilder/work/mgcc-4.6/Release/build/armv7-marvell-linux-gnueabi-hard_i686/obj/linux-header-install/include/linux/isdn arm ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/gccbuilder/work/mgcc-4.6/Release/build/armv7-marvell-linux-gnueabi-hard_i686/obj/linux-header-install/include/linux/isdn/$$F; done; touch /home/gccbuilder/work/mgcc-4.6/Release/build/armv7-marvell-linux-gnueabi-hard_i686/obj/linux-header-install/include/linux/isdn/.install