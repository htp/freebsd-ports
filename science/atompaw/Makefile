PORTNAME=	atompaw
DISTVERSION=	4.2.0.0
CATEGORIES=	science
MASTER_SITES=	http://users.wfu.edu/natalie/papers/pwpaw/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Tool for projector augmented wave functions for molecular simulations

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	liblapack.so:math/lapack \
		libblas.so:math/blas

USES=		fortran gmake libtool
GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=	yes

OPTIONS_DEFINE=	DOCS

PORTDOCS=	*

PLIST_FILES=	bin/atompaw \
		bin/graphatom

.include <bsd.port.mk>
