# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>

PORTNAME=	medikit
PORTVERSION=	0.8.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Automated release engineer assistant

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Jinja2>=2.10:devel/py-Jinja2@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}git-semver>=0.3.2<0.4:devel/py-git-semver@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mondrian>=0.8<1:devel/py-mondrian@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}packaging>=20.0:devel/py-packaging@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pip-tools4>=4.5.0<4.6:devel/py-pip-tools4@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}semantic-version>=2.8<3:devel/py-semantic-version@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}stevedore>=3.0<4:devel/py-stevedore@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}whistle>=1.0<2:devel/py-whistle@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}yapf>=0.20<1:textproc/py-yapf@${PY_FLAVOR}

USES=		python:3.5+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
