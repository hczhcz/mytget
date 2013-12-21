/*  Mytget - A download accelerator for GNU/Linux
 *  Homepage: http://myget.sf.net
 *  Copyright (C) 2005- xiaosuo
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */


#include "plugin.h"

Plugin::Plugin() {
    // do nothing
}

Plugin::~Plugin() {
    // do nothing
}

int Plugin::get_info(Task *task) {
    // do nothing
	return 0;
}

int Plugin::download(Task& task, Block *block) {
    // do nothing
	return 0;
}

int Plugin::get_dir_list(Task& task, const char *tempfile) {
	// do nothing
	return 0;
}

