# Created by: Charlie Kester <corky1951#comcast.net>

PORTNAME=	osmo
PORTVERSION=	0.4.4
PORTREVISION=	5
CATEGORIES=	deskutils
MASTER_SITES=	SF/${PORTNAME}-pim/${PORTNAME}-pim/${PORTNAME}-${PORTVERSION}

MAINTAINER=	eduardo@FreeBSD.org
COMMENT=	Personal organizer

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

DEPRECATED=	Depends on expired security/libgringotts
EXPIRATION_DATE=2022-06-30

LIB_DEPENDS=	libical.so:devel/libical \
		libnotify.so:devel/libnotify \
		libgringotts.so:security/libgringotts \
		libwebkit2gtk-4.0.so:www/webkit2-gtk3 \
		libgspell-1.so:textproc/gspell \
		libicui18n.so:devel/icu \
		libenchant-2.so:textproc/enchant2 \
		libsoup-2.4.so:devel/libsoup

USES=		compiler:c++11-lang gettext gmake gnome libarchive pkgconfig \
		sqlite
USE_GNOME=	cairo gtk30 libxml2
GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

POFILES=	bg ca cs da de el en_GB es fi fr gl gl_ES he hu it ja lt \
		nl pl pt pt_BR ro ru sr sv te tr uk ur ur_PK zh_CN

post-build:
.for p in ${POFILES}
	(cd ${WRKSRC}/po && ${LOCALBASE}/bin/msgfmt -c ${p}.po -o ${p}.mo)
.endfor

.include <bsd.port.mk>
