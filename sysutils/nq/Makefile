PORTNAME=	nq
DISTVERSIONPREFIX=	v
DISTVERSION=	0.5
CATEGORIES=	sysutils

MAINTAINER=	tobik@FreeBSD.org
COMMENT=	Unix command line queue utility

LICENSE=	CC0-1.0
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		perl5
USE_GITHUB=	yes
GH_ACCOUNT=	leahneukirchen
USE_PERL5=	test

MAKE_ARGS=	CFLAGS="${CFLAGS}" \
		PREFIX="${PREFIX}"

CONFLICTS_INSTALL=	fq # bin/fq

TEST_TARGET=	check

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/fq ${STAGEDIR}${PREFIX}/bin/nq
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/zsh/site-functions
	${INSTALL_DATA} ${WRKSRC}/_nq ${STAGEDIR}${PREFIX}/share/zsh/site-functions/_nq

.include <bsd.port.mk>
