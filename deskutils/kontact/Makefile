PORTNAME=	kontact
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Personal Information Manager

LICENSE=	LGPL21

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons crash \
		i18n iconthemes itemmodels jobwidgets kcmutils kio parts \
		service solid sonnet textwidgets widgetsaddons windowsystem xmlgui \
		ecm_build
# pim components
USE_KDE+=	akonadi grantleetheme kontactinterface libkdepim pimcommon
USE_QT=		concurrent core dbus declarative gui location network  \
		printsupport webchannel webengine widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
