# Created by: alepulver

PORTNAME=	pdfedit
PORTVERSION=	0.4.5
PORTREVISION=	16
CATEGORIES=	editors
MASTER_SITES=	SF

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	PDF document manipulating library

LICENSE=	GPLv2

BROKEN_powerpc64=	fails to configure: error: Could not link against boost_program_options
BROKEN_sparc64=		fails to configure: error: Could not link against boost_program_options
BROKEN_FreeBSD_13=	fails to compile: call to 'advance' is ambiguous
BROKEN_FreeBSD_14=	fails to compile: call to 'advance' is ambiguous

LIB_DEPENDS=	libboost_filesystem.so:devel/boost-libs \
		libfreetype.so:print/freetype2 \
		libpng.so:graphics/png \
		libt1.so:devel/t1lib

USES=		gmake perl5 tar:bzip2
USE_CXXSTD=	c++98
USE_PERL5=	build
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-root-dir=${STAGEDIR} \
		--with-ft-library=${LOCALBASE}/lib \
		--with-ft-includes=${LOCALBASE}/include \
		--with-t1-library=${LOCALBASE}/lib \
		--with-t1-includes=${LOCALBASE}/include \
		--with-parallel-make=off \
		--disable-gui \
		--enable-pdfedit-core-dev \
		--enable-tools
INSTALL_TARGET=	install install-tools
PORTDOCS=	Changelog README AUTHORS

OPTIONS_DEFINE=	DOCS

post-extract:
	${INSTALL_DATA} ${WRKSRC}/doc/AUTHORS ${WRKSRC}

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
