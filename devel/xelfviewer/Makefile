# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>

PORTNAME=	${GH_PROJECT:[1]:tl}
PORTVERSION=	0.04
CATEGORIES=	devel

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Cross-platform graphical ELF file viewer/editor

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		pkgconfig qt:5
GNU_CONFIGURE=	yes
USE_QT=		buildtools_build linguisttools_build qmake_build \
		concurrent core gui opengl printsupport widgets
USE_GITHUB=	yes
GH_ACCOUNT=	horsicq
GH_PROJECT=	XELFViewer ${GH_SUBDIR}
GH_TAGNAME=	5ff8c2c:c 0fad74c:fd 80329f2:fw 2bda2e8:f 2188ddd:sa \
		d78cf3a:ss df102be:xa aeb101e:xc 10936bc:xcf 34be4c1:xdex \
		8375c3c:xd bfca683:xdw b8ed8c8:xdv 06d570a:xew 69bcc36:xfi \
		b4d997b:xhw cb63607:xhv 00c267a:xmmw f271427:xo 2076a94:xq \
		277f96b:xs 0d79ace:xst 8c45c23:s
GH_SUBDIR=	Controls:c FormatDialogs:fd FormatWidgets:fw Formats:f \
		SpecAbstract:sa StaticScan:ss XArchive:xa XCapstone:xc \
		XCppfilt:xcf XDEX:xdex XDemangle:xd XDemangleWidget:xdw \
		XDisasmView:xdv XEntropyWidget:xew XFileInfo:xfi \
		XHashWidget:xhw XHexView:xhv XMemoryMapWidget:xmmw \
		XOptions:xo XQwt:xq XShortcuts:xs XStyles:xst signatures:s

post-extract:
	@${CHMOD} +x ${CONFIGURE_WRKSRC}/${CONFIGURE_SCRIPT}

post-build:
	@cd ${WRKSRC}/gui_source && ${LUPDATE} gui_source_tr.pro
	@${LRELEASE} ${WRKSRC}/gui_source/translation/*.ts

do-install:
	${INSTALL_PROGRAM} ${INSTALL_WRKSRC}/build/release/${PORTNAME} \
		${STAGEDIR}${PREFIX}/bin
	cd ${INSTALL_WRKSRC}/LINUX && ${COPYTREE_SHARE} hicolor \
		${STAGEDIR}${PREFIX}/share/icons
	${SED} -e 's,#VERSION#,${PORTVERSION},' \
		${WRKSRC}/LINUX/${PORTNAME}.desktop > \
		${STAGEDIR}${PREFIX}/share/applications/${PORTNAME}.desktop
	cd ${WRKSRC_xst} && ${COPYTREE_SHARE} qss ${STAGEDIR}${DATADIR}
	@${MKDIR} ${STAGEDIR}${DATADIR}/lang
	${INSTALL_DATA} ${INSTALL_WRKSRC}/gui_source/translation/*.qm \
		${STAGEDIR}${DATADIR}/lang
	@${MKDIR} ${STAGEDIR}${DATADIR}/signatures
	${INSTALL_DATA} ${WRKSRC_s}/crypto.db ${STAGEDIR}${DATADIR}/signatures

.include <bsd.port.mk>

PATCH_ARGS+=	-l
