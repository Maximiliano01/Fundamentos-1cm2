#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/condicionales.o \
	${OBJECTDIR}/fibonacci\ while.o \
	${OBJECTDIR}/for\ tablas.o \
	${OBJECTDIR}/mayor\ de\ 3\ numeros.o \
	${OBJECTDIR}/mayor\ de\ 4\ numeros.o \
	${OBJECTDIR}/operaciones.o \
	${OBJECTDIR}/while\ tablas.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/max.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/max.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/max ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/condicionales.o: condicionales.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/condicionales.o condicionales.c

.NO_PARALLEL:${OBJECTDIR}/fibonacci\ while.o
${OBJECTDIR}/fibonacci\ while.o: fibonacci\ while.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/fibonacci\ while.o fibonacci\ while.c

.NO_PARALLEL:${OBJECTDIR}/for\ tablas.o
${OBJECTDIR}/for\ tablas.o: for\ tablas.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/for\ tablas.o for\ tablas.c

.NO_PARALLEL:${OBJECTDIR}/mayor\ de\ 3\ numeros.o
${OBJECTDIR}/mayor\ de\ 3\ numeros.o: mayor\ de\ 3\ numeros.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/mayor\ de\ 3\ numeros.o mayor\ de\ 3\ numeros.c

.NO_PARALLEL:${OBJECTDIR}/mayor\ de\ 4\ numeros.o
${OBJECTDIR}/mayor\ de\ 4\ numeros.o: mayor\ de\ 4\ numeros.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/mayor\ de\ 4\ numeros.o mayor\ de\ 4\ numeros.c

${OBJECTDIR}/operaciones.o: operaciones.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/operaciones.o operaciones.c

.NO_PARALLEL:${OBJECTDIR}/while\ tablas.o
${OBJECTDIR}/while\ tablas.o: while\ tablas.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/while\ tablas.o while\ tablas.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
