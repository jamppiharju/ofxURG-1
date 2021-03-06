/*!
  \file
  \brief シリアル通信

  Serial Communication Interface 制御


  \author Satofumi KAMIMURA

  $Id: serial_ctrl.c 772 2009-05-05 06:57:57Z satofumi $
*/

#include "serial_ctrl.h"

#if defined(WINDOWS_OS)
/* Windows (win32) 環境 */
#include "serial_ctrl_win.c"

#else
/* Linux, Mac 環境 (共通) */
#include "serial_ctrl_lin.c"
#endif
