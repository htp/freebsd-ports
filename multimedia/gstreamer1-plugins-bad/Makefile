# Created by: Michael Johnson <ahze@FreeBSD.org>

PORTREVISION=	2
CATEGORIES=	multimedia

COMMENT=	GStreamer-plugins that need more quality, testing or documentation

GST_PLUGIN=	bad
GST_PLUGIN_SUFFIX=	-bad

MASTERDIR=	${.CURDIR}/../../multimedia/gstreamer1-plugins

BUILD_DEPENDS+=	v4l_compat>=1.0.20100321:multimedia/v4l_compat

DIST=		bad
BAD_GST_DIRS=	gst-libs sys gst po pkgconfig
# "extra" plugins enabled by default in Makefile.common
BAD_GST_DIRS+=  ext/bz2
NO_GSTREAMER_COMMON=	yes
PLIST=		${.CURDIR}/pkg-plist

do-build:
.for dir in ${BAD_GST_DIRS}
	@(cd ${BUILD_WRKSRC}/${dir}; ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_FLAGS} ${MAKEFILE} ${_MAKE_JOBS} ${MAKE_ARGS} ${ALL_TARGET})
.endfor

do-install:
.for dir in ${BAD_GST_DIRS}
	@(cd ${INSTALL_WRKSRC}/${dir} && ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} ${INSTALL_TARGET})
.endfor

.include "${MASTERDIR}/Makefile"
