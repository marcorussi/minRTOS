/*
 * The MIT License (MIT)
 *
 * Copyright (c) [2015] [Marco Russi]
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

/*
 * This file app_task_b.c represents the source file of the demo application task B.
 *
 * Author : Marco Russi
 *
 * Evolution of the file:
 * 20/08/2015 - File created - Marco Russi
 *
*/




/* ------------ Inclusion files ---------------- */
#include "p32mx795f512l.h"
#include "fw_common.h"




/* ------------ Exported functions ---------------- */

/* Demo application task B init function */
EXPORTED void APP_TaskB_Init( void )
{
    LATDbits.LATD1 = 1;
}


/* Demo application task B init function */
EXPORTED void APP_TaskB_PeriodicTask( void )
{
    LATDbits.LATD1 = !PORTDbits.RD1;
}




/* End of file */
