PORTNAME=	fb303
DISTVERSION=	g20210709
PORTREVISION=	3
CATEGORIES=	net

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Base Thrift service and a common set of functionality

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libboost_regex.so:devel/boost-libs \
		libdouble-conversion.so:devel/double-conversion \
		libevent.so:devel/libevent \
		libfizz.so:security/fizz \
		libfmt.so:devel/libfmt \
		libfolly.so:devel/folly \
		libgflags.so:devel/gflags \
		libglog.so:devel/glog \
		liblz4.so:archivers/liblz4 \
		libsnappy.so:archivers/snappy \
		libsodium.so:security/libsodium \
		libthriftcpp2.so:devel/fbthrift \
		libunwind.so:devel/libunwind \
		libwangle.so:net/wangle \
		libzstd.so:archivers/zstd

USES=		cmake compiler:c++17-lang ssl
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	facebook
GH_TAGNAME=	83ae662219660d30b49ad8474f5c63bbfc6d5f6f

CXXFLAGS+=	-fPIC

CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_OFF=	PYTHON_EXTENSIONS

post-install:
	@${RMDIR} ${STAGEDIR}${PREFIX}/include/fb303/test

.include <bsd.port.mk>
