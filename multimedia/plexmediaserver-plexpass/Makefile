# Created by: KalleDK <plexmaintainer@k-moeller.dk>

PORTVERSION=	1.26.2.5797
DISTVERSIONSUFFIX=5bd057d2b
MASTER_SITES=	https://downloads.plex.tv/plex-media-server-new/${DISTVERSION}-${DISTVERSIONSUFFIX}/freebsd/
PKGNAMESUFFIX=	-plexpass
DISTNAME=	PlexMediaServer-${DISTVERSION}-${DISTVERSIONSUFFIX}-FreeBSD-${ARCH}

MAINTAINER=	b.shertenlieb@yahoo.com

USE_RC_SUBR=	${PORTNAME}_plexpass

MASTERDIR=${.CURDIR}/../plexmediaserver

DISTINFO_FILE=	${.CURDIR}/distinfo
FILESDIR=	${.CURDIR}/files
DATADIR=	${PREFIX}/share/${PORTNAME}${PKGNAMESUFFIX}

SUB_LIST=	PORTNAME=${PORTNAME}_plexpass DATADIR=${DATADIR} USERS=${USERS} GROUPS=${GROUPS}

.include "${MASTERDIR}/Makefile"
