DL_DIR = "${HOME}/share/downloads"
SSTATE_DIR = "${HOME}/mirror/sstate-cache/${DISTRO_CODENAME}/${MACHINE}"
INHERIT += "rm_work"

OE_TERMINAL = "screen"

#IMAGE_INSTALL_append = "bluez-alsa"


#INHERIT_DISTRO_append = " icecc"
#ICECC_USER_PACKAGE_BL = "libgcc linux-renesas gcc-runtime zlib libtool  libtool-cross openssl"
#ICECC_ENV_EXEC = "/usr/lib/icecc/icecc-create-env"

