PORTNAME=	elementary-photos
DISTVERSION=	2.7.5
CATEGORIES=	graphics

MAINTAINER=	miguel@gocobachi.dev
COMMENT=	Photo viewer and organizer designed for elementary OS

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	valac:lang/vala
LIB_DEPENDS=	libexif.so:graphics/libexif \
		libgee-0.8.so:devel/libgee \
		libgeocode-glib.so:net/geocode-glib \
		libgexiv2.so:graphics/gexiv2 \
		libgphoto2.so:graphics/libgphoto2 \
		libgphoto2_port.so:graphics/libgphoto2 \
		libgranite.so:x11-toolkits/granite \
		libgudev-1.0.so:devel/libgudev \
		libjson-glib-1.0.so:devel/json-glib \
		libhandy-1.so:x11-toolkits/libhandy \
		libraw.so:graphics/libraw \
		librest-0.7.so:devel/librest \
		libsoup-2.4.so:devel/libsoup \
		libwebkit2gtk-4.0.so:www/webkit2-gtk3 \
		libwebp.so:graphics/webp

USES=			compiler:c11 desktop-file-utils gettext gnome gstreamer meson \
			pkgconfig sqlite:3 xorg
USE_GITHUB=		yes
GH_ACCOUNT=		elementary
GH_PROJECT=		photos
USE_GNOME=		cairo glib20 gdkpixbuf2 gtk30 libxml2
GLIB_SCHEMAS=		io.elementary.photos-extras.gschema.xml \
			io.elementary.photos.gschema.xml
USE_LDCONFIG=		yes
USE_XORG=		x11

.include <bsd.port.mk>
