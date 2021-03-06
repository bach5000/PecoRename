/*
 * Copyrights (c):
 *     2000 - 2008 , Werner Freytag.
 *     2009, Haiku
 * Distributed under the terms of the MIT License.
 *
 * Original Author:
 *              Werner Freytag <freytag@gmx.de>
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string.h>

#include <Bitmap.h>
#include <StatusBar.h>
#include <Button.h>
#include <String.h>
#include <View.h>

#include "FileListItem.h"
#include "PecoApp.h"
#include "Renamer.h"

#include "constants.h"

void	MakeList();
void	UpdateWindowStatus();

void UpdatePreferences( const char *identifier, BMessage &msg );
void ReadPreferences( const char *identifier, BMessage &msg );

#endif
