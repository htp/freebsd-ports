# Created by: Michael Johnson <ahze@FreeBSD.org>
#
# NOTES FOR UPDATING PORT:
#
# We use tarballs from the *stable* branch of the upstream git repository.
#
# X264_BUILD is the "core" number, and can be found in x264.h.
#
# X264_REV requires a checkout the git revision for the version the port
# is being updated to. Then run version.sh against it.
#
# Bumping PORTREVISION for dependent ports? This is useful:
#   fgrep -lr --include='*/Makefile*' :multimedia/libx264 $PORTSDIR |
#   sed 's,/Makefile.*,,' | xargs $PORTSDIR/Tools/scripts/bump-revision.sh
# or
#   rg -l :multimedia/libx264 $PORTSDIR | xargs -n1 portedit bump-revision -i

PORTNAME=	x264
PORTVERSION=	0.${X264_BUILD}.${X264_REV}
PORTREVISION?=	1
CATEGORIES=	multimedia
MASTER_SITES=	https://samples.mplayerhq.hu/yuv4mpeg2/:pgo
DIST_SUBDIR=	x264
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT?=	H.264/MPEG-4 AVC Video Encoding (Front End CLI)

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	bash:shells/bash
LIB_DEPENDS?=	libx264.so:multimedia/libx264

X264_BUILD=	163
X264_REV=	3060
X264_GITVER=	${GL_COMMIT:C/^(.{7}).*/\1/}

USES?=		pkgconfig
USES+=		compiler:c11 gmake localbase shebangfix
USE_GITLAB=	yes
USE_LDCONFIG=	yes
GL_SITE=	https://code.videolan.org
GL_ACCOUNT=	videolan
GL_COMMIT=	5db6aa6cab1b146e07b60cc1736a01f21da01154
HAS_CONFIGURE=	yes
SHEBANG_FILES=	configure
PLIST_FILES?=	bin/x264

OPTIONS_DEFINE+=	BASH DEBUG FFMS LAVF PGO SWSCALE
OPTIONS_RADIO+=		MP4
OPTIONS_RADIO_MP4+=	GPAC LSMASH
OPTIONS_DEFAULT+=	BASH FFMS LAVF LSMASH SWSCALE

.if make(makesum) # for optional distfiles
.MAKEFLAGS:	WITH="${OPTIONS_DEFINE}"
.endif

FFMS_DESC=		FFmpeg Source input support
GPAC_DESC=		GPAC library support
LAVF_DESC=		libav* format input support (requires FFmpeg)
LSMASH_DESC=		L-SMASH library support
MP4_DESC=		MPEG-4 output
SWSCALE_DESC=		Resize video filter

BASH_BUILD_DEPENDS=	bash-completion>0:shells/bash-completion
BASH_RUN_DEPENDS=	bash-completion>0:shells/bash-completion
BASH_CONFIGURE_ENABLE=	bashcompletion
BASH_PLIST_FILES=	share/bash-completion/completions/x264

DEBUG_CONFIGURE_ENABLE=	debug
DEBUG_CONFIGURE_OFF=	--enable-strip

FFMS_LIB_DEPENDS=	libffms2.so:multimedia/ffms2
FFMS_CONFIGURE_ENABLE=	ffms
FFMS_IMPLIES=		SWSCALE

GPAC_LIB_DEPENDS=	libgpac.so:multimedia/gpac-libgpac
GPAC_CONFIGURE_ENABLE=	gpac

LAVF_LIB_DEPENDS=	libavcodec.so:multimedia/ffmpeg \
			libavformat.so:multimedia/ffmpeg \
			libavutil.so:multimedia/ffmpeg
LAVF_CONFIGURE_ENABLE=	lavf
LAVF_IMPLIES=		SWSCALE

LSMASH_LIB_DEPENDS=	liblsmash.so:multimedia/l-smash
LSMASH_CONFIGURE_ENABLE=lsmash

PGO_DISTFILES=		${Y4M_VIDEO_DISTFILE}:pgo
PGO_MAKE_ENV=		VIDS="${WRKDIR}/${Y4M_VIDEO}"
PGO_ALL_TARGET=		fprofiled
# y4m sample video
Y4M_VIDEO=		example.y4m
Y4M_VIDEO_DISTFILE=	example.y4m.bz2
PGO_VARS=		USE_GCC=yes \
			LICENSE+=PGO LICENSE_COMB=multi

# ${Y4M_VIDEO_DISTFILE} file may not be mirrored
LICENSE_NAME_PGO=	PGO
LICENSE_DISTFILES_PGO=	${Y4M_VIDEO_DISTFILE}
LICENSE_PERMS_PGO=	auto-accept

SWSCALE_LIB_DEPENDS=	libavutil.so:multimedia/ffmpeg \
			libswscale.so:multimedia/ffmpeg
SWSCALE_CONFIGURE_ENABLE=	swscale

CONFIGURE_ARGS?=	--system-libx264
CONFIGURE_ARGS+=	--prefix="${PREFIX}" \
			--extra-cflags="${CPPFLAGS} ${CFLAGS}" \
			--extra-ldflags="${LDFLAGS}"

post-extract-PGO-on:
	@${BZIP2_CMD} -dc ${DISTDIR}/${DIST_SUBDIR}/${Y4M_VIDEO_DISTFILE} \
		>${WRKDIR}/${Y4M_VIDEO}

post-patch:
	@${REINPLACE_CMD} -e ' \
		s|gpac_static|gpac|g' \
		${WRKSRC}/configure
	@${REINPLACE_CMD} -e ' \
		s|bash|sh|; \
		s|VER="x"|VER="${X264_REV} ${X264_GITVER}"|; \
		s|VERSION=""|VERSION=" r${X264_REV} ${X264_GITVER}"|' \
		${WRKSRC}/version.sh

.if !target(pre-build)
pre-build:
	@(${RM} ${WRKSRC}/x264_config.h)
.endif

.include <bsd.port.mk>
