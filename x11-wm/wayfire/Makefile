PORTNAME=	wayfire
DISTVERSIONPREFIX=	v
DISTVERSION=	0.7.3
CATEGORIES=	x11-wm

PATCH_SITES=	https://github.com/${GH_ACCOUNT}/${GH_PROJECT}/commit/
PATCHFILES+=	dd479c06bf84.patch:-p1 # https://github.com/WayfireWM/wayfire/issues/599

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	3D Wayland compositor

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	evdev-proto>0:devel/evdev-proto \
		wf-config>=0.7.0<0.8.0:devel/wf-config \
		${LOCALBASE}/include/xf86drmMode.h:graphics/libdrm \
		wayland-protocols>=1.12:graphics/wayland-protocols \
		glm>=0.9.8:math/glm \
		wlroots>=0.15.0<0.16.0:x11-toolkits/wlroots
LIB_DEPENDS=	libinotify.so:devel/libinotify \
		libwf-config.so:devel/wf-config \
		libpng.so:graphics/png \
		libwayland-server.so:graphics/wayland \
		libwlroots.so:x11-toolkits/wlroots \
		libinput.so:x11/libinput \
		libxkbcommon.so:x11/libxkbcommon

USES=		compiler:c++17-lang gl gnome jpeg meson pkgconfig xorg
USE_GITHUB=	yes
USE_GL=		egl glesv2
USE_GNOME=	cairo pango
USE_XORG=	pixman
GH_ACCOUNT=	WayfireWM
GH_TUPLE=	WayfireWM:wf-touch:8974eb0:wftouch/subprojects/wf-touch \
		WayfireWM:wf-utils:889fdaf:wfutils/subprojects/wf-utils

OPTIONS_DEFINE=	X11
OPTIONS_DEFAULT=X11

X11_USE=		XORG=xcb
X11_MESON_ENABLED=	xwayland

post-patch:
# Extract (snapshot) version from the port instead of meson.build
	@${REINPLACE_CMD} -i .nogit -e 's/git.found()/false/' \
		-e '/project_version/s/@0@/${DISTVERSIONFULL}/' \
		${WRKSRC}/meson.build

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.ini ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
