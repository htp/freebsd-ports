PORTNAME=	kmailtransport
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE library to managing mail transport

LICENSE=	LGPL21

LIB_DEPENDS=	libsasl2.so:security/cyrus-sasl2 \
		libqt5keychain.so:security/qtkeychain

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons i18n \
		itemmodels jobwidgets kcmutils kio service solid wallet \
		widgetsaddons windowsystem
# pim components
USE_KDE+=	akonadi akonadimime gapi ksmtp mime pimcommon
USE_QT=		concurrent core dbus gui network widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
