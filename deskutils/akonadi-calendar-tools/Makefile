PORTNAME=	akonadi-calendar-tools
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	CLI tools to manage akonadi calendars

LIB_DEPENDS=	libical.so:devel/libical

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash guiaddons i18n iconthemes itemmodels \
		itemviews jobwidgets kdelibs4support kio notifications parts \
		service solid sonnet textwidgets unitconversion widgetsaddons \
		windowsystem xmlgui \
		ecm_build
# pim components
USE_KDE+=	akonadi akonadicalendar calendarsupport calendarcore calendarutils \
		identitymanagement libkdepim mime pimtextedit
USE_QT=		core dbus gui network printsupport widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
