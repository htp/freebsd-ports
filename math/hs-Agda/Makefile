# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>

PORTNAME=	Agda
PORTVERSION=	2.6.2
PORTREVISION=	1
CATEGORIES=	math haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Dependently typed functional programming language and proof assistant

LICENSE=	UNKNOWN
LICENSE_NAME=	custom
LICENSE_FILE=	${WRKSRC}/LICENSE
LICENSE_PERMS=	dist-mirror no-dist-sell pkg-mirror no-pkg-sell auto-accept

BROKEN_i386=	Compiler goes out of memory

BUILD_DEPENDS=	emacs:editors/emacs

USES=		cabal

USE_LOCALE=	en_US.UTF-8

USE_CABAL=	Cabal-3.0.2.0 \
		STMonadTrans-0.4.4 \
		aeson-1.4.7.1_2 \
		alex-3.2.5_1 \
		async-2.2.2_1 \
		attoparsec-0.13.2.4_1 \
		base-compat-0.11.1 \
		base-compat-batteries-0.11.1 \
		base-orphans-0.8.2 \
		blaze-builder-0.4.1.0_1 \
		blaze-html-0.9.1.2_1 \
		blaze-markup-0.8.2.5 \
		boxes-0.1.5 \
		case-insensitive-1.2.1.0 \
		data-hash-0.2.0.1 \
		dlist-0.8.0.8 \
		edit-distance-0.2.2.1_1 \
		equivalence-0.3.5 \
		fail-4.9.0.0 \
		geniplate-mirror-0.7.7 \
		gitrev-1.3.1 \
		happy-1.19.12 \
		hashable-1.3.0.0_2 \
		hashtables-1.2.3.4 \
		ieee754-0.8.0 \
		integer-logarithms-1.0.3_2 \
		monad-control-1.0.3.1 \
		murmur-hash-0.1.0.9 \
		network-uri-2.6.3.0_1 \
		parallel-3.2.2.0_3 \
		primitive-0.7.0.1 \
		random-1.1_1 \
		regex-base-0.94.0.0_1 \
		regex-tdfa-1.3.1.0_2 \
		scientific-0.3.6.2 \
		split-0.2.3.4_2 \
		strict-0.3.2 \
		tagged-0.8.6_3 \
		th-abstraction-0.3.2.0 \
		time-compat-1.9.3 \
		transformers-base-0.4.6 \
		transformers-compat-0.6.5 \
		unordered-containers-0.2.10.0_1 \
		uri-encode-1.5.0.5 \
		utf8-string-1.0.1.1_3 \
		uuid-types-1.0.3_4 \
		vector-0.12.1.2 \
		zlib-0.6.2.1_1

EXECUTABLES=		agda-mode agda
agda_DATADIR_VARS=	Agda
agda-mode_DATADIR_VARS=	Agda

post-build:
#	Do not compile Emacs mode files until https://github.com/agda/agda/issues/4610 is fixed
#	${SETENV} Agda_datadir=${WRKSRC}/src/data $$(find ${WRKSRC}/dist-newstyle -name agda-mode -type f -perm +111) compile

post-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/lib/prim/Agda
	find ${WRKSRC}/src/data/lib/prim/Agda -name '*.agda' -exec ${SETENV} ${PORTNAME}_datadir=${WRKSRC}/src/data ${STAGEDIR}${PREFIX}/libexec/cabal/agda {} \;
	cd ${WRKSRC}/src/data && ${COPYTREE_SHARE} lib ${STAGEDIR}${DATADIR}
	cd ${WRKSRC}/src/data && ${COPYTREE_SHARE} emacs-mode ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
