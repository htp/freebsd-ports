# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>

PORTNAME=	FFI-Platypus
PORTVERSION=	1.56
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Write Perl bindings to non-Perl libraries with FFI

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
LIB_DEPENDS=	libffi.so:devel/libffi
RUN_DEPENDS=	p5-Capture-Tiny>=0:devel/p5-Capture-Tiny \
		p5-FFI-CheckLib>=0.05:devel/p5-FFI-CheckLib
TEST_DEPENDS=	p5-Test2-Suite>=0.000121:devel/p5-Test2-Suite

USES=		gmake perl5 pkgconfig
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/FFI/Platypus/Platypus.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/share/dist/FFI-Platypus/lib/libplfill.so
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/share/dist/FFI-Platypus/probe/bin/dlrun

.include <bsd.port.mk>
