/*********************************************************************
Copyright (C) 2011 Hewlett-Packard Development Company, L.P.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
version 2 as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "CUnit/CUnit.h"
#include "CUnit/Automated.h"

/* for finder.c, start */
extern CU_TestInfo testcases_DBCheckMime[];

/* for DBCheckMime() */
extern int DBCheckMimeInit();
extern int DBCheckMimeClean();

/* for finder.c, end */

/**
 * \brief all test suites for mimetype
 */
CU_SuiteInfo suites[] = {
    // for finder.c 
#if 0
#endif
    {"Testing the function DBCheckMime:", DBCheckMimeInit, DBCheckMimeClean, testcases_DBCheckMime},
    CU_SUITE_INFO_NULL
};

