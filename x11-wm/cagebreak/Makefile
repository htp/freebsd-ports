PORTNAME=	cagebreak
DISTVERSION=	1.9.0
CATEGORIES=	x11-wm

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Wayland tiling compositor inspired by ratpoison

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	evdev-proto>0:devel/evdev-proto \
		wayland-protocols>=1.14:graphics/wayland-protocols \
		wlroots>=0.15.0<0.16.0:x11-toolkits/wlroots
LIB_DEPENDS=	libevdev.so:devel/libevdev \
		libudev.so:devel/libudev-devd \
		libwayland-server.so:graphics/wayland \
		libfontconfig.so:x11-fonts/fontconfig \
		libwlroots.so:x11-toolkits/wlroots \
		libinput.so:x11/libinput \
		libxkbcommon.so:x11/libxkbcommon

USES=		compiler:c11 gnome meson pkgconfig xorg
USE_GITHUB=	yes
USE_GNOME=	cairo pango
USE_XORG=	pixman
GH_ACCOUNT=	project-repo
MESON_ARGS=	-Dversion_override="${DISTVERSIONFULL}" # if snapshot
PLIST_FILES=	bin/${PORTNAME} \
		etc/xdg/${PORTNAME}/config

OPTIONS_DEFINE=	MANPAGES X11
OPTIONS_DEFAULT=MANPAGES X11

MANPAGES_BUILD_DEPENDS=	scdoc:textproc/scdoc
MANPAGES_MESON_TRUE=	man-pages
MANPAGES_PLIST_FILES=	man/man1/${PORTNAME}.1.gz \
			man/man5/${PORTNAME}-config.5.gz

X11_MESON_TRUE=	xwayland

post-patch:
# Respect PREFIX for system-wide config
	@${REINPLACE_CMD} -e 's,/etc,${PREFIX}&,' \
		${WRKSRC}/${PORTNAME}.c \
		${WRKSRC}/meson.build

.include <bsd.port.mk>
