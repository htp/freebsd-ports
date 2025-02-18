PORTNAME=	wifibox-alpine
PORTVERSION=	20220430
CATEGORIES=	net

MAINTAINER=	pali.gabor@gmail.com
COMMENT=	Wifibox guest based on Alpine Linux

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC_scripts}/LICENSE

ONLY_FOR_ARCHS=	amd64
EXTRACT_ONLY=	${_DISTFILES:M*_GH0.tar.gz}

BUILD_DEPENDS=	patchelf>0:sysutils/patchelf \
		squashfs-tools>0:sysutils/squashfs-tools

.include "${.CURDIR}/flavors.mk"

.for flavor in ${_FLAVORS}
${flavor}_PKGNAMESUFFIX=	-${flavor}
.endfor

OPTIONS_SUB=			yes

OPTIONS_SINGLE=			COMPRESSION
OPTIONS_SINGLE_COMPRESSION=	COMP_GZIP COMP_LZO COMP_LZ4 COMP_XZ COMP_ZSTD

OPTIONS_DEFAULT=		COMP_XZ

COMP_GZIP_DESC=		gzip
COMP_LZO_DESC=		lzo
COMP_LZ4_DESC=		lz4
COMP_XZ_DESC=		xz
COMP_ZSTD_DESC=		zstd

.if ${FLAVOR:U} == default
OPTIONS_GROUP=		FIRMWARE EXTRAS
OPTIONS_GROUP_FIRMWARE=	FW_ATH10K FW_ATH11K FW_ATMEL FW_B43 FW_B43LEGACY FW_BRCM\
			FW_IPW2100 FW_IPW2200 FW_IWL3945 FW_IWL4965 FW_IWLWIFI\
			FW_MEDIATEK FW_MARVELL FW_RT61 FW_RTLWIFI FW_RTW88 FW_TI
OPTIONS_GROUP_EXTRAS=	XX_DRIVER_WL XX_DRIVER_RTW89

OPTIONS_DEFAULT+=	FW_ATH10K FW_ATH11K FW_BRCM FW_IWLWIFI FW_MEDIATEK\
			FW_MARVELL FW_RT61 FW_RTLWIFI FW_RTW88

FW_ATH10K_DESC=		Qualcomm Atheros 802.11ac
FW_ATH11K_DESC=		Qualcomm Atheros 802.11ax
FW_ATMEL_DESC=		Atmel at76c50x 802.11b
FW_B43_DESC=		Broadcom B43xx 802.11a/b/g/n
FW_B43LEGACY_DESC=	Broadcom B43xx 802.11b (legacy)
FW_BRCM_DESC=		Broadcom 802.11n
FW_IWL3945_DESC=	Intel(R) PRO/Wireless 3945ABG 802.11a/b/g
FW_IWL4965_DESC=	Intel(R) Wireless WiFi 4965AGN 802.11a/b/g/n
FW_IWLWIFI_DESC=	Intel(R) Wireless WiFi 802.11a/b/g/n
FW_IPW2100_DESC=	Intel(R) PRO/Wireless 2100 802.11a/b
FW_IPW2200_DESC=	Intel(R) PRO/Wireless 2200 802.11b/g/n
FW_MEDIATEK_DESC=	MediaTek MT76xxx 802.11n, MT79xx 802.11ax
FW_MARVELL_DESC=	Marvell 88W8xxx (TopDog) 802.11b/g/n
FW_RT61_DESC=		Ralink RT2xxx (RT61) 802.11a/b/g
FW_RTLWIFI_DESC=	Realtek 802.11n
FW_RTW88_DESC=		Realtek 802.11ac
FW_TI_DESC=		Texas Instruments WL1xxx 802.11b/g/n

XX_DRIVER_WL_DESC=	Broadcom 802.11 STA driver (+ firmware, exclusive)
XX_DRIVER_RTW89_DESC=	Realtek 802.11ax driver (+ firmware)
.endif

_GITHUB_SITE=	https://github.com/pgj/freebsd-wifibox-alpine/releases/download

USE_GITHUB=	nodefault
GH_ACCOUNT=	pgj
GH_PROJECT=	freebsd-wifibox-alpine:scripts
GH_TAGNAME=	dac84c054786b6eb6f329662748d9a199b05f2df:scripts

ALPINE_VERSION=	3.15.4
_ALPINE_VER=	${ALPINE_VERSION:C@([0-9]+)\.([0-9]+).*@\1.\2@}

.if defined(ALPINE_DATE)
_SNAPSHOT=	${ALPINE_DATE:S/./-/g}
_ALPINE_SITE=	https://mirror.fit.cvut.cz/alpine/snapshots/${_SNAPSHOT}/v${_ALPINE_VER}
.else
_ALPINE_SITE=	https://mirror.fit.cvut.cz/alpine/v${_ALPINE_VER}
.endif

_LINUXFW_SITE=	https://git.kernel.org/pub/scm/linux/kernel/git/firmware/
_LINUXFW_TAG=	20220411
_LINUXFW=	linux-firmware-${_LINUXFW_TAG}

MASTER_SITES+=	${_ALPINE_SITE}/releases/x86_64/:rootfs \
		${_ALPINE_SITE}/main/x86_64/:main_packages \
		${_ALPINE_SITE}/community/x86_64/:community_packages \
		${_GITHUB_SITE}/packages/:custom_packages \
		${_LINUXFW_SITE}/linux-firmware.git/snapshot/:linux_firmware \
		https://sources.openwrt.org/:openwrt \
		https://lwfinger.com/b43-firmware/:b43 \
		https://thekelleys.org.uk/atmel/:atmel \
		https://github.com/openwrt/mt76/archive/:mt76

_MINIROOTFS=	alpine-minirootfs-${ALPINE_VERSION}-x86_64.tar.gz
_PACKAGES=	baselayout-3.2.0-r18:wifibox \
		busybox-1.34.1-r5:wifibox \
		ifupdown-ng-0.11.3-r0:wifibox \
		iptables-1.8.7-r1:wifibox \
		iw-5.16-r0:community \
		libcrypto1.1-1.1.1n-r0 \
		libmnl-1.0.4-r2 \
		libnftnl-1.2.1-r0 \
		libnl3-3.5.0-r0 \
		libssl1.1-1.1.1n-r0 \
		linux-lts-5.15.36-r0:wifibox \
		musl-1.2.2-r7 \
		openrc-0.44.7-r5:wifibox \
		pcsc-lite-libs-1.9.4-r0 \
		socat-1.7.4.2-r0:wifibox \
		wpa_passthru-0.1.1-r0:wifibox \
		wpa_supplicant-2.9-r17:wifibox

_GUEST_MEM=	45M

_ATMEL_FIRMWARE=	atmel-firmware-1.3
_B43LEGACY_FIRMWARE=	wl_apsta-3.130.20.0
_B43_FIRMWARE=		broadcom-wl-6.30.163.46
_IPW2100_FIRMWARE=	ipw/ipw2100-1.3 \
			ipw/ipw2100-1.3-i
_IPW2200_FIRMWARE=	iwi/ipw2200-bss \
			iwi/ipw2200-ibss
_MT76_FIRMWARE=		eecbb49920732b9b364f15c1ef0066342544b22b

pre-everything::
.if !defined(FIRMWARE_FILES)
	@${ECHO_MSG} "===> NOTICE:"
	@${ECHO_MSG}
	@${ECHO_MSG} "Use the FIRMWARE_FILES make(1) variable to keep only the firmware"
	@${ECHO_MSG} "files that are used by the driver to reduce the size of the disk"
	@${ECHO_MSG} "image."
	@${ECHO_MSG}
	@sleep 1
.endif

.include <bsd.port.options.mk>

.for flavor in ${_FLAVORS}
.if ${FLAVOR:U} == ${flavor}
PORT_OPTIONS+=		FW_${flavor:tu}
.endif
.endfor

DIST_SUBDIR=	wifibox-alpine
DISTFILES+=	${_MINIROOTFS}:rootfs

LFW_ATH10K_FILES=	ath10k
LFW_ATH11K_FILES=	ath11k
LFW_BRCM_FILES=		brcm
LFW_IWL3945_FILES=	iwlwifi-3945-*.ucode
LFW_IWL4965_FILES=	iwlwifi-4965-*.ucode
LFW_IWLWIFI_FILES=	iwlwifi-*
LFW_MEDIATEK_FILES=	mediatek
LFW_MARVELL_FILES=	mwl*
LFW_RT61_FILES=		rt*.bin
LFW_RTLWIFI_FILES=	rtlwifi
LFW_RTW88_FILES=	rtw88
LFW_TI_FILES=		ti-connectivity

.for fw_opt in ${PORT_OPTIONS:MFW_*}
.if defined(L${fw_opt}_FILES)
LINUX_FIRMWARE+=	${L${fw_opt}_FILES}
.endif
.endfor

.if ${PORT_OPTIONS:MXX_DRIVER_WL}
_PACKAGES+=	broadcom-wl-6.30.223.271-r0:wifibox
_GUEST_MEM=	50M
.endif

.if ${PORT_OPTIONS:MXX_DRIVER_RTW89}
_PACKAGES+=	rtw89-20220421-r0:wifibox
.endif

.if !empty(LINUX_FIRMWARE)
_LINUXFWFILE=	${_LINUXFW}.tar.gz
_LINUXFWDIR=	${WRKDIR}/${_LINUXFW}
DISTFILES+=	${_LINUXFWFILE}:linux_firmware
.endif

.for package in ${_PACKAGES}
.if ${package:M*\:wifibox}
DISTFILES+=	${package:C@^([^:]*):wifibox$@\1@}.apk:custom_packages
.elif ${package:M*\:community}
DISTFILES+=	${package:C@^([^:]*):community$@\1@}.apk:community_packages
.else
DISTFILES+=	${package:C@^([^:]*):wifibox$@\1@}.apk:main_packages
.endif
_APK_FILES+=	${_DISTDIR}/${package:C@^([^:]*):.*$@\1@}.apk
.endfor

_FIRMWAREDIR=	${WRKSRC}/guest/lib/firmware

.if ${PORT_OPTIONS:MFW_ATMEL}
DISTFILES+=	${_ATMEL_FIRMWARE}.tar.gz:atmel
.endif

.if ${PORT_OPTIONS:MFW_B43LEGACY}
DISTFILES+=	${_B43LEGACY_FIRMWARE}.o:openwrt
.endif

.if ${PORT_OPTIONS:MFW_B43}
DISTFILES+=	${_B43_FIRMWARE}.tar.bz2:b43
EXTRACT_ONLY+=	${_B43_FIRMWARE}.tar.bz2
.endif

.if ${PORT_OPTIONS:MFW_B43*}
BUILD_DEPENDS+=		b43-fwcutter>0:sysutils/b43-fwcutter
FW_B43_TARGETDIR=	${_FIRMWAREDIR}/b43
FW_B43_FIRMWARE=	${WRKDIR}/${_B43_FIRMWARE}.wl_apsta.o
FW_B43LEGACY_TARGETDIR=	${_FIRMWAREDIR}/b43legacy
FW_B43LEGACY_FIRMWARE=	${_DISTDIR}/${_B43LEGACY_FIRMWARE}.o
.endif

.if ${PORT_OPTIONS:MFW_IPW2*} && !exists(${SRC_BASE}/sys/Makefile)
IGNORE= requires kernel source files in SRC_BASE=${SRC_BASE}
.endif

.if ${PORT_OPTIONS:MFW_MEDIATEK}
DISTFILES+=	${_MT76_FIRMWARE}.zip:mt76
.endif

pre-build:
	${MKDIR} ${_FIRMWAREDIR}
.for fw in ${PORT_OPTIONS:MFW_B43*}
.if ${fw}
	(_TARGETDIR=${${fw}_TARGETDIR}; \
	${MKDIR} $$_TARGETDIR; \
	${LOCALBASE}/bin/b43-fwcutter -w $$_TARGETDIR ${${fw}_FIRMWARE}; \
	${FIND} $$_TARGETDIR -mindepth 2 -type f -exec ${MV} {} $$_TARGETDIR \; ; \
	${FIND} $$_TARGETDIR -type d -delete)
.endif
.endfor
.if ${PORT_OPTIONS:MFW_ATMEL}
	${TAR} -xf ${_DISTDIR}/${_ATMEL_FIRMWARE}.tar.gz \
		-C ${_FIRMWAREDIR} --strip-components 2 \
		*/images/atmel_*.bin
.endif
.for fw in ${PORT_OPTIONS:MFW_IPW2*}
.for fw_file in ${${fw:C@FW@@}_FIRMWARE}
	uudecode -p ${SRC_BASE}/sys/contrib/dev/${fw_file}.fw.uu \
		> ${_FIRMWAREDIR}/${fw_file:C@^[^/]*/(.*)@\1@}.fw
.endfor
.endfor
.for fw_files in ${LINUX_FIRMWARE}
	${TAR} -xf ${_DISTDIR}/${_LINUXFWFILE} \
		-C ${_FIRMWAREDIR} --strip-components 1 \
		*/${fw_files}
.endfor
.if ${PORT_OPTIONS:MFW_MEDIATEK}
	${TAR} -xf ${_DISTDIR}/${_MT76_FIRMWARE}.zip \
		-C ${_FIRMWAREDIR} --strip-components 2 \
		*/firmware/mt76??_e?.bin
.endif

post-install:
	${PRINTF} "cpus=1\nmemory=${_GUEST_MEM}\n" \
		> ${STAGEDIR}${PREFIX}/share/wifibox/bhyve.conf

WRKSRC=		${WRKSRC_scripts}
MAKE_ARGS+=	VERSION=${PORTVERSION} \
		MINIROOTFS=${_DISTDIR}/${_MINIROOTFS} \
		PACKAGES="${_APK_FILES}" \
		SQUASHFS_COMP=${PORT_OPTIONS:MCOMP_*:S/COMP_//:tl}

.if defined(FIRMWARE_FILES)
MAKE_ARGS+=	FIRMWARE_FILES=${FIRMWARE_FILES}
.endif

.include <bsd.port.mk>
