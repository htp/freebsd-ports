# Created by: Anders Nordby <anders@FreeBSD.org>

PORTNAME=	ffmpeg2theora
PORTVERSION=	0.30
PORTREVISION=	6
CATEGORIES=	multimedia
MASTER_SITES=	http://v2v.cc/~j/ffmpeg2theora/downloads/

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Reencode many media file formats to Ogg Theora

DEPRECATED=	Legacy video format, superseded by AV1/H.264/H.265/VP8/VP9
EXPIRATION_DATE=2022-06-30

LICENSE=	GPLv3

LIB_DEPENDS=	libavcodec.so:multimedia/ffmpeg \
		libkate.so:multimedia/libkate \
		libtheora.so:multimedia/libtheora

USES=		iconv pkgconfig scons tar:bzip2
MAKE_ARGS=	APPEND_CCFLAGS="${CFLAGS} ${CPPFLAGS}" \
		APPEND_LINKFLAGS="${LDFLAGS} ${LIBS}"

CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib ${ICONV_LIB}

PLIST_FILES=	bin/ffmpeg2theora man/man1/ffmpeg2theora.1.gz

.include <bsd.port.mk>
