PORTNAME=	mlpack
DISTVERSION=	3.4.2
PORTREVISION=	2
CATEGORIES=	math # machine-learning
MASTER_SITES=	https://mlpack.org/files/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Fast, flexible machine learning library

LICENSE=	BSD3CLAUSE

BROKEN_i386=	undefined symbol: __atomic_load

BUILD_DEPENDS=	ensmallen>0:math/ensmallen \
		${LOCALBASE}/include/stb/stb_image.h:devel/stb
LIB_DEPENDS=	libboost_program_options.so:devel/boost-libs \
		libboost_unit_test_framework.so:devel/boost-libs \
		libboost_serialization.so:devel/boost-libs \
		libarmadillo.so:math/armadillo

USES=		cmake compiler:c++14-lang pkgconfig
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DSTB_IMAGE_INCLUDE_DIR=${LOCALBASE}/include/stb
CMAKE_OFF=	BUILD_PYTHON_BINDINGS BUILD_TESTS

BINARY_ALIAS=	git=false

OPTIONS_DEFINE=		EXECUTABLES
OPTIONS_DEFAULT=	EXECUTABLES
OPTIONS_SUB=		yes

EXECUTABLES_DESC=	Build command-line executables
EXECUTABLES_CMAKE_BOOL=	BUILD_CLI_EXECUTABLES

do-test: # 'clean' target below is a workaround for: https://github.com/mlpack/mlpack/issues/2300
	@cd ${BUILD_WRKSRC} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} clean && \
		${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS} -DBUILD_TESTS:BOOL=ON ${CMAKE_SOURCE_PATH} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${ALL_TARGET} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} test

.include <bsd.port.mk>
