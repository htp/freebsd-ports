# Created by: Choi Jun Ho <junker@moderato.snu.ac.kr>

PORTNAME=	splay
PORTVERSION=	0.9.5.2
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://splay.sourceforge.net/tgz/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Audio player that decodes MPEG Layer 1/2/3 and WAV files

LICENSE=	GPLv2+ LGPL20+
LICENSE_COMB=	multi
LICENSE_FILE_GPLv2+ =	${WRKSRC}/COPYING
LICENSE_FILE_LGPL20+ =	${WRKSRC}/COPYING.LIB

GNU_CONFIGURE=	yes

CONFLICTS_INSTALL=	mp3blaster # bin/splay

PLIST_FILES=	bin/splay man/man1/splay.1.gz

# XXX: pthread library can be used, but sound quality is buggy(?)

.include <bsd.port.mk>
