PORTNAME=	ghostwriter
DISTVERSION=	2.1.2
CATEGORIES=	editors

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Distraction-free Markdown editor

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libhunspell-1.7.so:textproc/hunspell

USES=		compiler:c++11-lang desktop-file-utils pkgconfig qmake qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	wereturtle
USE_QT=		core gui svg webchannel webengine widgets buildtools_build \
		linguisttools_build

# cf. PR 224488
LDFLAGS+=	-Wl,--as-needed

post-configure:
	@${REINPLACE_CMD} -e 's|^\(build/release/qrc_QtAwesomeFree.cpp:[^\\]*\)\\|\1|' \
		-e '/3rdparty\/QtAwesome\/fonts\/Font/d' \
		-e '/\/lib\/qt5\/bin\/rcc \\/d' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
