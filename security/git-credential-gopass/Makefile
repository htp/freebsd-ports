# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>

PORTNAME=	git-credential-gopass
PORTVERSION=	1.12.0
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	security

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Manage git credentials using gopass

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules
USE_GITHUB=	yes
GH_ACCOUNT=	gopasspw

GO_MODULE=	github.com/${GH_ACCOUNT}/${PORTNAME}

PLIST_FILES=	bin/git-credential-gopass

.include <bsd.port.mk>
