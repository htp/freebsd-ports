# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>

PORTNAME=	pfinger
PORTVERSION=	0.7.10
PORTREVISION=	6
CATEGORIES=	net
MASTER_SITES=	http://www.xelia.ch/unix/pfinger/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Highly configurable, secure, and portable finger daemon

DEPRECATED=	Unmaintained and dead upstream, consider base fingerd
EXPIRATION_DATE=	2022-06-17

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--without-client

post-patch:
	@${REINPLACE_CMD} -e "s,%%PREFIX%%,${PREFIX},g" ${WRKSRC}/src/configfile.c
	@${REINPLACE_CMD} -e 's|<utmp.h>|<utmpx.h>|' ${WRKSRC}/configure

.include <bsd.port.mk>
