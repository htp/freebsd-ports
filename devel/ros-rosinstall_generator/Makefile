PORTNAME=	ros-rosinstall_generator
DISTVERSION=	0.1.22
CATEGORIES=	devel
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	trueos@norwegianrockcat.com
COMMENT=	Generator tool for a ROS install distro

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}argparse>=1:devel/py-argparse@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}yaml>=3:devel/py-yaml@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	distutils autoplist
USE_GITHUB=	yes
GH_ACCOUNT=	ros-infrastructure
GH_PROJECT=	rosinstall_generator
NO_ARCH=	yes

.include <bsd.port.mk>
