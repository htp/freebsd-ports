# Created by: mm

PORTNAME=	pxz
PORTVERSION=	0.20141018
PORTREVISION=	9
CATEGORIES=	archivers
MASTER_SITES=	LOCAL/delphij
DISTNAME=	pxz-git-${PORTVERSION:S/0.//}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Parallel LZMA compressor using liblzma

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

WRKSRC=		${WRKDIR}/${PORTNAME}

USES=		cpe tar:xz
PLIST_FILES=	bin/pxz share/man/man1/pxz.1.gz

CPE_VENDOR=	pxz_project

MAKE_ENV+=	BINDIR=${PREFIX}/bin \
		MANDIR=${PREFIX}/share/man

MAKE_ARGS+=	CC="${CC}"

.if !exists(/usr/include/omp.h)
USES+=		compiler:gcc-c++11-lib
.endif

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/pxz

.include <bsd.port.mk>
