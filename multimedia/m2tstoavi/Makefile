# Created by: Steve Wills <steve@mouf.net>

PORTNAME=	m2tstoavi
PORTVERSION=	2009121901
PORTREVISION=	7
CATEGORIES=	multimedia
MASTER_SITES=	http://www.olmosconsulting.com/ http://meatwad.mouf.net/~steve/
DISTNAME=	m2ts

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Utility which eases conversion of AVCHD (m2ts) to AVI

DEPRECATED=	Marked obsolete by upstream in 2010, please consider using multimedia/ffmpeg or multimedia/handbrake
EXPIRATION_DATE=2022-06-30

RUN_DEPENDS=	xporthdmv:multimedia/xporthdmv \
		ldecod:multimedia/jmref \
		ffmpeg:multimedia/ffmpeg

do-build:
	${DO_NADA}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/m2tstoavi.alkayata ${STAGEDIR}${PREFIX}/bin/m2tstoavi.alkayata
	${INSTALL_SCRIPT} ${WRKSRC}/m2tstoavi.fifo ${STAGEDIR}${PREFIX}/bin/m2tstoavi.fifo
	${INSTALL_SCRIPT} ${WRKSRC}/m2tstoavi.nofifo ${STAGEDIR}${PREFIX}/bin/m2tstoavi.nofifo
	${INSTALL_SCRIPT} ${WRKSRC}/m2tstoavi.mencoder ${STAGEDIR}${PREFIX}/bin/m2tstoavi.mencoder
	${LN} -s ${PREFIX}/bin/m2tstoavi.mencoder ${STAGEDIR}${PREFIX}/bin/m2tstoavi

.include <bsd.port.mk>
