PORTNAME=	kamoso
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	multimedia kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Application to take pictures and videos out of your webcam

LICENSE=	GPLv2

USES=		cmake compiler:c++11-lang gettext gl gnome gstreamer kde:5 pkgconfig qt:5 \
		tar:xz
USE_GL=		gl
USE_GNOME=	glib20
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons i18n itemviews jobwidgets kio kirigami2 \
		notifications purpose service solid widgetsaddons windowsystem xmlgui \
		ecm_build
USE_QT=		concurrent core dbus declarative graphicaleffects gui network \
		quickcontrols widgets xml \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
