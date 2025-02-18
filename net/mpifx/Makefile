PORTNAME=	mpifx
DISTVERSION=	1.3.1
CATEGORIES=	net devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Modern Fortran wrappers around MPI routines

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	fypp:devel/py-fypp@${PY_FLAVOR}
LIB_DEPENDS=	libmpi.so:net/mpich

USES=		cmake:testing fortran python:build

USE_GITHUB=	yes
GH_ACCOUNT=	dftbplus

CMAKE_ON=	BUILD_SHARED_LIBS

post-test: # run test programs # at least one test crashes, see https://github.com/dftbplus/mpifx/issues/35
.for f in test_allgather test_allgatherv test_allreduce test_bcast test_comm_split test_gather test_gatherv test_reduce test_scatter test_scatterv
	cd ${BUILD_WRKSRC}/test && ./${f}
.endfor

.include <bsd.port.pre.mk>

.if ${GCC_DEFAULT} >= 10
# workaround for Type mismatch in argument 'cc' at (1); passed COMPLEX(8) to REAL(8)
FFLAGS+=	-fallow-argument-mismatch
.endif

# tests fail to build: https://github.com/dftbplus/mpifx/issues/43

.include <bsd.port.post.mk>
