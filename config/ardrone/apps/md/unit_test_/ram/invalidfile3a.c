/************************************************************************
** File:
**   $Id: invalidfile3a.c 1.2 2015/03/01 17:17:16EST sstrege Exp  $
**
**  Copyright � 2007-2014 United States Government as represented by the 
**  Administrator of the National Aeronautics and Space Administration. 
**  All Other Rights Reserved.  
**
**  This software was created at NASA's Goddard Space Flight Center.
**  This software is governed by the NASA Open Source Agreement and may be 
**  used, distributed and modified only pursuant to the terms of that 
**  agreement.
**
** Purpose:
**  The CFS Memory Dwell (MD) Example Dwell Table #1
**
** Notes:
**
** $Log: invalidfile3a.c  $
** Revision 1.2 2015/03/01 17:17:16EST sstrege 
** Added copyright information
** Revision 1.1 2012/01/09 19:24:56EST aschoeni 
** Initial revision
** Member added to project c:/MKSDATA/MKS-REPOSITORY/CFS-REPOSITORY/md/fsw/unit_test/ram/project.pj
** Revision 1.1 2009/10/09 17:14:47EDT aschoeni 
** Initial revision
** Member added to project c:/MKSDATA/MKS-REPOSITORY/CFS-REPOSITORY/md/fsw/unit_test/ram/project.pj
**
*************************************************************************/


/************************************************************************
** Includes
*************************************************************************/
#include "../../unit_test_/test_with_defaults/md_platform_cfg.h"
#include "cfe.h"
#include "md_tbldefs.h"
#include "md_app.h"
#include "cfs_utils.h"
#include "cfe_tbl_filedef.h"


static CFE_TBL_FileDef_t CFE_TBL_FileDef =
{
    "MD_Default_Dwell1_Tbl", "MD.DWELL_TABLE1", "MD Dwell Table 1",
    "invalidfile3a.tbl", MD_TBL_LOAD_LNGTH
};

MD_DwellTableLoad_t     MD_Default_Dwell1_Tbl =
{
/* Enabled State */ MD_DWELL_STREAM_ENABLED,
#if MD_SIGNATURE_OPTION == 1
/* Signature     */ "invalidfile3a",
#endif
/* Entry    Length    Delay    Offset           SymName     */
/*   1 */{{      4,       1,  { 0x0123400B,               ""  }   },
/*   2 */ {      0,       0,  {     0,               ""  }   },
/*   3 */ {      0,       0,  {     0,               ""  }   },
/*   4 */ {      0,       0,  {     0,               ""  }   },
/*   5 */ {      0,       0,  {     0,               ""  }   },
/*   6 */ {      0,       0,  {     0,               ""  }   },
/*   7 */ {      0,       0,  {     0,               ""  }   },
/*   8 */ {      0,       0,  {     0,               ""  }   },
/*   9 */ {      0,       0,  {     0,               ""  }   },
/*  10 */ {      0,       0,  {     0,               ""  }   },
/*  11 */ {      0,       0,  {     0,               ""  }   },
/*  12 */ {      0,       0,  {     0,               ""  }   },
/*  13 */ {      0,       0,  {     0,               ""  }   },
/*  14 */ {      0,       0,  {     0,               ""  }   },
/*  15 */ {      0,       0,  {     0,               ""  }   },
/*  16 */ {      0,       0,  {     0,               ""  }   },
/*  17 */ {      0,       0,  {     0,               ""  }   },
/*  18 */ {      0,       0,  {     0,               ""  }   },
/*  19 */ {      0,       0,  {     0,               ""  }   },
/*  20 */ {      0,       0,  {     0,               ""  }   },
/*  21 */ {      0,       0,  {     0,               ""  }   },
/*  22 */ {      0,       0,  {     0,               ""  }   },
/*  23 */ {      0,       0,  {     0,               ""  }   },
/*  24 */ {      0,       0,  {     0,               ""  }   },
/*  25 */ {      0,       0,  {     0,               ""  }   },
}
};

/************************/
