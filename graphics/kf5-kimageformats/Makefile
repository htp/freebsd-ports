PORTNAME=	kimageformats
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	graphics kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library providing support for additional image formats

LIB_DEPENDS=	libImath.so:math/Imath

USES=		cmake compiler:c++11-lib kde:5 pkgconfig qt:5 tar:xz
USE_KDE=	archive \
		ecm_build
USE_QT=		core gui printsupport widgets \
		buildtools_build qmake_build

CFLAGS+=	-I${LOCALBASE}/include/Imath

OPTIONS_DEFINE=	AVIF JXL LIBHEIF OPENEXR
OPTIONS_DEFAULT=	AVIF JXL OPENEXR
OPTIONS_SUB=	yes

AVIF_LIB_DEPENDS=	libavif.so:graphics/libavif
AVIF_CMAKE_BOOL_OFF=	CMAKE_DISABLE_FIND_PACKAGE_libavif

JXL_LIB_DEPENDS=	libjxl.so:graphics/libjxl
JXL_CMAKE_BOOL=		KIMAGEFORMATS_JXL

LIBHEIF_DESC=		ISO/IEC 23008-12:2017 HEIF file format support
LIBHEIF_LIB_DEPENDS=	libheif.so:graphics/libheif
LIBHEIF_CMAKE_BOOL=	KIMAGEFORMATS_HEIF

OPENEXR_LIB_DEPENDS=	libOpenEXR.so:graphics/openexr
OPENEXR_CMAKE_BOOL_OFF=	CMAKE_DISABLE_FIND_PACKAGE_OpenEXR

post-patch:
		${REINPLACE_CMD} s,Imf::Int64,uint64_t, \
			${WRKSRC}/src/imageformats/exr.cpp

.include <bsd.port.mk>
