PORTNAME=	sameboy
DISTVERSIONPREFIX=	v
DISTVERSION=	0.14.7
CATEGORIES=	emulators games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Game Boy and Game Boy Color emulator written in C

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	rgbds>0:devel/rgbds

USES=		compiler:c11 desktop-file-utils gl gmake pkgconfig sdl \
		shared-mime-info
USE_GITHUB=	yes
GH_ACCOUNT=	LIJI32
GH_PROJECT=	SameBoy
USE_GL=		gl
USE_SDL=	sdl2

MAKE_ARGS=	FREEDESKTOP=true
ALL_TARGET=	sdl

OPTIONS_DEFINE=		LIBRETRO
OPTIONS_DEFAULT=	LIBRETRO
OPTIONS_SUB=		yes

LIBRETRO_DESC=	Build libretro core

post-build-LIBRETRO-on:
	@${DO_MAKE_BUILD} -C ${WRKSRC} libretro

post-install-LIBRETRO-on:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/libretro
	${INSTALL_LIB} ${WRKSRC}/build/bin/sameboy_libretro.so \
		${STAGEDIR}${PREFIX}/lib/libretro

.include <bsd.port.mk>
