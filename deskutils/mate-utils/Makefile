# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>

PORTNAME=	mate-utils
PORTVERSION=	1.26.0
PORTREVISION=	1
CATEGORIES=	deskutils mate
MASTER_SITES=	MATE
DIST_SUBDIR=	mate

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	MATE support utilities

LICENSE=	GPLv2+ GFDL LGPL20+
LICENSE_COMB=	multi
LICENSE_FILE_GPLv2+ =	${WRKSRC}/COPYING
LICENSE_FILE_GFDL=	${WRKSRC}/COPYING.docs
LICENSE_FILE_LGPL20+ =	${WRKSRC}/COPYING.libs

BUILD_DEPENDS=	itstool:textproc/itstool

LIB_DEPENDS=	libgtop-2.0.so:devel/libgtop \
		libcanberra-gtk3.so:audio/libcanberra-gtk3

PORTSCOUT=	limitw:1,even

USES=		gettext gmake gnome libtool localbase mate pathfix \
		pkgconfig tar:xz xorg
USE_MATE=	panel
USE_XORG=	ice sm x11 xext
USE_GNOME=	cairo gnomeprefix gtk30 intltool
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS=	--disable-disk-image-mounter

GLIB_SCHEMAS=	org.mate.dictionary.gschema.xml \
		org.mate.disk-usage-analyzer.gschema.xml \
		org.mate.screenshot.gschema.xml \
		org.mate.search-tool.gschema.xml \
		org.mate.system-log.gschema.xml

.include <bsd.port.mk>
