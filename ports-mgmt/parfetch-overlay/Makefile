PORTNAME=	parfetch
DISTVERSION=	0.1.2
CATEGORIES=	ports-mgmt
MASTER_SITES=	https://github.com/t6/parfetch/releases/download/v${DISTVERSION}/
PKGNAMESUFFIX=	-overlay

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Fetch distfiles in parallel and with pipelining

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libevent.so:devel/libevent

USES=		compiler:c11 ninja pkgconfig ssl tar:lz
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	AR="${AR}" \
		CC="${CC}" \
		CFLAGS="${CFLAGS}" \
		CPPFLAGS="${CPPFLAGS}" \
		DESTDIR="${STAGEDIR}" \
		INSTALL_DATA="${INSTALL_DATA}" \
		INSTALL_PROGRAM="${INSTALL_PROGRAM}" \
		LDFLAGS="${LDFLAGS}" \
		PREFIX="${PREFIX}"
SUB_FILES=	pkg-message

.include <bsd.port.mk>
