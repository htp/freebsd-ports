# Created by: ijliao

PORTNAME=	gambit
DISTVERSION=	16.0.2
CATEGORIES=	math
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}${PORTVERSION:R:R}/${PORTVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Library of tools for doing computation in game theory

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_FreeBSD_12_powerpc64=	fails to compile: ./library/include/gambit/shared_ptr.h:137:37: no matching function for call to 'swap(long int*&, long int* const&)'

USES=		compiler:c++11-lib gnome
GNU_CONFIGURE=	yes
USE_GNOME=	gtk20
USE_WX=		3.0
USE_CXXSTD=	c++11
WX_CONF_ARGS=	absolute

post-install:
	${INSTALL_DATA} ${WRKSRC}/gambit.desktop \
		${STAGEDIR}${PREFIX}/share/applications
	${INSTALL_DATA} ${WRKSRC}/src/gui/bitmaps/gambit.xpm \
		${STAGEDIR}${PREFIX}/share/pixmaps

.include <bsd.port.mk>
