# Created by: Hye-Shik Chang

PORTNAME=	pycurl
PORTVERSION=	7.45.1
CATEGORIES=	ftp python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python interface to libcurl

LICENSE=	LGPL21 MIT
LICENSE_COMB=	dual
LICENSE_FILE_LGPL21=	${WRKSRC}/COPYING-LGPL
LICENSE_FILE_MIT=	${WRKSRC}/COPYING-MIT

LIB_DEPENDS=	libcurl.so:ftp/curl

USES=		python:3.6+ ssl
USE_PYTHON=	autoplist concurrent distutils

PORTDOCS=	AUTHORS INSTALL.rst README.rst RELEASE-NOTES.rst

OPTIONS_DEFINE=	DOCS

post-install:
	${FIND} ${STAGEDIR}${PYTHON_SITELIBDIR} -name '*.so' -exec ${STRIP_CMD} {} +

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
