#  Created by: Oleg Sidorkin <osidorkin@gmail.com>

PORTNAME=	rss-bridge
DISTVERSION=	2022-01-20
PORTEPOCH=	1
CATEGORIES=	www

MAINTAINER=	osidorkin@gmail.com
COMMENT=	RSS feed generator for websites missing it

LICENSE=	PD

USES=		php:web
USE_GITHUB=	yes
GH_ACCOUNT=	RSS-Bridge
USE_PHP=	curl json mbstring openssl simplexml

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_SUB=	WWWOWN=${WWWOWN} WWWGRP=${WWWGRP}

OPTIONS_DEFINE=	SQLITE
OPTIONS_DEFAULT=SQLITE
OPTIONS_SUB=	yes

SQLITE_DESC=	Enable sqlite-based cache support (requires sqlite)

SQLITE_USE=	PHP=sqlite3

do-install:
	@${MKDIR} ${STAGEDIR}${WWWDIR}
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} "." ${STAGEDIR}${WWWDIR} "-not ( \
	    -name LICENSE -or -name .gitkeep -or -name docker-bake.hcl -or \
	    -name docker-entrypoint.sh -or -regex ./contrib.* )" )

.include <bsd.port.mk>
