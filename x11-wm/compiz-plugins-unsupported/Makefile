# Created by: Robert Noland <rnoland@FreeBSD.org>

PORTNAME=	compiz-plugins-unsupported
PORTVERSION=	0.8.8
PORTREVISION=	9
CATEGORIES=	x11-wm
MASTER_SITES=	http://releases.compiz.org/${PORTVERSION}/ \
		https://BSDforge.com/prolects/source/x11-wm/compiz-plugins-unsupported/

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Plugins for Compiz Composite Window Manager

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libcairo.so:graphics/cairo \
		libstartup-notification-1.so:x11/startup-notification
BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/compiz.pc:x11-wm/compiz \
		${LOCALBASE}/libdata/pkgconfig/bcop.pc:devel/compiz-bcop \
		${LOCALBASE}/libdata/pkgconfig/compiz-text.pc:x11-wm/compiz-plugins-main

RUN_DEPENDS:=	${BUILD_DEPENDS}

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		gettext-tools gmake gnome libtool:keepla localbase:ldflags pathfix \
		pkgconfig tar:bzip2 xorg
USE_GNOME=	gconf2 intltool libxslt
USE_XORG=	ice sm x11 xcomposite xdamage xext xfixes xinerama xorgproto xrandr
USE_LDCONFIG=	yes

GCONF_SCHEMAS=	compiz-atlantis.schemas \
		compiz-cubemodel.schemas \
		compiz-elements.schemas \
		compiz-fakeargb.schemas \
		compiz-mswitch.schemas \
		compiz-snow.schemas \
		compiz-tile.schemas

CONFIGURE_ARGS=	--enable-schemas

OPTIONS_DEFINE=		NLS

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
