// Copyright 2008 Isis Innovation Limited
#ifndef __OPENGL_INCLUDES_H
#define __OPENGL_INCLUDES_H

#ifdef __APPLE__
// #include <OpenGL/gl.h>
#endif

#include <GL/gl.h>
#include <GL/glext.h>
#include <GL/glut.h>

#ifdef WIN32
#define WIN32_LEAN_AND_MEAN
#include <GL/glew.h>
#endif

#endif
