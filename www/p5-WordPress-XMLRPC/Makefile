PORTNAME=	WordPress-XMLRPC
PORTVERSION=	2.13
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:IGIBBS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl 5 API to WordPress XML-RPC services

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-SOAP-Lite>=0:net/p5-SOAP-Lite \
		p5-XMLRPC-Lite>=0:net/p5-XMLRPC-Lite
TEST_DEPENDS=	p5-Smart-Comments>=0:devel/p5-Smart-Comments \
		p5-YAML>=0:textproc/p5-YAML

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
