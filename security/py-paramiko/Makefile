# Created by: Ulf Lilleengen

PORTNAME=	paramiko
PORTVERSION=	2.11.0
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Python SSH2 protocol library

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}bcrypt>=3.1.3:security/py-bcrypt@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cryptography>=2.5:security/py-cryptography@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyasn1>=0.1.7:devel/py-pyasn1@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pynacl>=1.0.1:security/py-pynacl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}gssapi>=1.4.1:security/py-gssapi@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mock>=0:devel/py-mock@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-relaxed>=0:devel/py-pytest-relaxed@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}invoke>=0:devel/py-invoke@${PY_FLAVOR}

USES=		cpe python:3.7+ pytest:4
USE_PYTHON=	autoplist distutils
PYTEST_ARGS=	-p no:relaxed

NO_ARCH=	yes

.include <bsd.port.mk>
