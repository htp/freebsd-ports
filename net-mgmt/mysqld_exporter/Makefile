# Created by: Alexey Bobkov <mr.deadlystorm@gmail.com>

PORTNAME=	mysqld_exporter
PORTVERSION=	0.12.1
DISTVERSIONPREFIX=v
PORTREVISION=	1
CATEGORIES=	net-mgmt

MAINTAINER=	mr.deadlystorm@gmail.com
COMMENT=	Prometheus exporter for MySQL server metrics

LICENSE=	APACHE20

USES=		go:modules
USE_GITHUB=	yes

GH_ACCOUNT=	prometheus

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}

PLIST_FILES=	bin/mysqld_exporter

USE_RC_SUBR=	mysqld_exporter

.include <bsd.port.mk>
