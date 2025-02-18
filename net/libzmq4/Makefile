PORTNAME=	libzmq4
DISTVERSIONPREFIX=	v
DISTVERSION=	4.3.4
CATEGORIES=	net
MASTER_SITES=	https://github.com/zeromq/libzmq/releases/download/${DISTVERSIONFULL}/
DISTNAME=	zeromq-${DISTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	ZeroMQ core library (Version 4)

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake libtool pkgconfig
USE_LDCONFIG=	yes

CONFLICTS=	zmq libzmq[^4]

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
TEST_TARGET=	check

OPTIONS_DEFINE=			LIBUNWIND MANPAGES
OPTIONS_RADIO=			CURVE
OPTIONS_RADIO_CURVE=		SODIUM TWEETNACL
OPTIONS_GROUP=			MULTICAST
OPTIONS_GROUP_MULTICAST=	NORM PGM
OPTIONS_DEFAULT=		MANPAGES NORM PGM TWEETNACL
OPTIONS_SUB=		yes

LIBUNWIND_DESC=	Use libunwind to print stack trace in case of error
CURVE_DESC=	CURVE security backend
MULTICAST_DESC=	Reliable Multicast Transports
TWEETNACL_DESC=	Use tweetnacl
SODIUM_DESC=	Use libsodium
PGM_DESC=	Enable PGM transport via OpenPGM
NORM_DESC=	Enable NORM via NRL

PGM_CONFIGURE_WITH=	pgm
PGM_LIB_DEPENDS=	libpgm.so:net/openpgm

LIBUNWIND_LIB_DEPENDS=	libunwind.so:devel/libunwind
LIBUNWIND_CONFIGURE_ENABLE=	libunwind

MANPAGES_BUILD_DEPENDS=		xmlto:textproc/xmlto \
				asciidoc:textproc/asciidoc
MANPAGES_CONFIGURE_WITH=	docs

NORM_CONFIGURE_WITH=	norm=${PREFIX}
NORM_LIB_DEPENDS=	libnorm.so:net/norm

SODIUM_CONFIGURE_WITH=	libsodium
SODIUM_LIB_DEPENDS=	libsodium.so:security/libsodium
SODIUM_PLIST_FILES=	bin/curve_keygen

TWEETNACL_PLIST_FILES=	bin/curve_keygen

CONFIGURE_ARGS+=	--with-pkgconfigdir=${PREFIX}/libdata/pkgconfig \
			--disable-static \
			--disable-Werror \
			--disable-silent-rules
CFLAGS+=		-Wno-long-long

.include <bsd.port.options.mk>

.if defined(WITH_DEBUG)
CONFIGURE_ARGS+=	--enable-debug
.endif

.if !${PORT_OPTIONS:MSODIUM} && !${PORT_OPTIONS:MTWEETNACL}
CONFIGURE_ARGS+=	--disable-curve
.endif

.include <bsd.port.mk>
