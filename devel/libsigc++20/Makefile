# Created by: Alexander Nedotsukov <bland@FreeBSD.org>
#   $MCom: ports/trunk/devel/libsigc++20/Makefile 19952 2014-10-15 08:11:00Z gusi $

PORTNAME=	libsigc++
PORTVERSION=	2.10.8
CATEGORIES=	devel
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Callback Framework for C++

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/COPYING

PORTSCOUT=	limit:^2\.10\.

INSTALL_TARGET=	install-strip
USES=		compiler:c++11-lang meson tar:xz
USE_LDCONFIG=	yes

PLIST_SUB=	API_VERSION="2.0"

MESON_ARGS=	-Dbuild-documentation=false \
		-Dbuild-examples=false

.include <bsd.port.mk>
