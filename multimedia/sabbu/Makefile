PORTNAME=	sabbu
PORTVERSION=	0.3.0
PORTREVISION=	21
CATEGORIES=	multimedia
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/Sabbu%20${PORTVERSION}

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	Program used to time subtitles

LICENSE=	GPLv2

DEPRECATED=	please consider using multimedia/aegisub
EXPIRATION_DATE=2022-06-30

LIB_DEPENDS=	libsndfile.so:audio/libsndfile \
		libharfbuzz.so:print/harfbuzz \
		libfreetype.so:print/freetype2 \
		libfontconfig.so:x11-fonts/fontconfig

USES=		tar:bzip2 compiler:c++11-lang gmake pkgconfig iconv sdl gnome
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--without-ffmpeg

USE_SDL=	sdl
USE_CXXSTD=	gnu++98
USE_GNOME=	gtk20 cairo gdkpixbuf2 
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-lpthread -L${LOCALBASE}/lib
LDFLAGS+=	-lgmodule-2.0

OPTIONS_DEFINE=	GTKSPELL NLS
OPTIONS_DEFAULT=GTKSPELL

GTKSPELL_DESC=	Use gtkspell
GTKSPELL_LIB_DEPENDS=	libgtkspell.so:textproc/gtkspell

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MNLS}
USES+=		gettext
PLIST_SUB+=	WITH_NLS=""
.else
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	WITH_NLS="@comment "
.endif

.include <bsd.port.mk>
