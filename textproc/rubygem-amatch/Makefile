PORTNAME=	amatch
PORTVERSION=	0.4.1
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library for approximate string matching and searching

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	rubygem-mize>=0:devel/rubygem-mize \
		rubygem-tins>=1.0<2:devel/rubygem-tins

USES=		gem
USE_RUBY=	yes

PLIST_FILES=	bin/agrep bin/dupfind

CONFLICTS_INSTALL=	agrep # bin/agrep

.include <bsd.port.mk>
