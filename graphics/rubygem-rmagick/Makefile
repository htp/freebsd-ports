PORTNAME=	rmagick
PORTVERSION=	4.2.5
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for ImageMagick

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gem pkgconfig
USE_RUBY=	yes

OPTIONS_DEFINE=	X11
OPTIONS_DEFAULT=X11

X11_USES=		magick:7
X11_USES_OFF=		magick:7,nox11

.include <bsd.port.mk>
