PORTNAME=	Plack-Middleware-AutoRefresh
PORTVERSION=	0.09
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to reload pages when files are modified

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-AnyEvent>0:devel/p5-AnyEvent \
	p5-AnyEvent-Filesys-Notify>=0:devel/p5-AnyEvent-Filesys-Notify \
	p5-File-ShareDir>=1.00:devel/p5-File-ShareDir \
	p5-File-Slurp>0:devel/p5-File-Slurp \
	p5-JSON-Any>0:converters/p5-JSON-Any \
	p5-Plack>0:www/p5-Plack \
	p5-Readonly>0:devel/p5-Readonly

USES=		perl5
USE_PERL5=	modbuildtiny

.include <bsd.port.mk>
