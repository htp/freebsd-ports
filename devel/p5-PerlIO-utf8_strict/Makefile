# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>

PORTNAME=	PerlIO-utf8_strict
PORTVERSION=	0.009
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Fast and correct UTF-8 IO

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/PerlIO/utf8_strict/utf8_strict.so

.include <bsd.port.mk>
