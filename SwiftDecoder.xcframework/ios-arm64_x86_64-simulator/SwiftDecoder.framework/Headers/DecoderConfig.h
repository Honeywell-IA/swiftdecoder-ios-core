//======================================================================================
// DecoderConfig.h
//======================================================================================

//---------------------------------------------------------------------------
//
//  Module Interface Description:
//      This file contains the default configuration of the components compiled into
//      the control logic.
//
//---------------------------------------------------------------------------

/* Copyright 2020, Honeywell.  All Rights Reserved */

#ifndef DECODER_CONFIG_H
#define DECODER_CONFIG_H

//Decoders
//The decoder defines are used during the DecodeControlLogic library build process. So changing these after the DCL library is built does not affect which decoder libraries
//are part of that lirbary. You should only change these post-library build if you are using them to shrink system code. 
//To remove decoder libraries from a build, you must change these before the DCL library is built. 

//The override will change any defines used from something like a makefile and use what is below. 
//Again, this won't change included libraries unless you are building the DCL source.
#define OVERRIDE_BUILD   0

#if (OVERRIDE_BUILD)
#undef DECDOER_ID
#undef DECODER_FLD
#endif

/* Integrated Decoder
   Description:
*/
#ifndef DECODER_ID
#define DECODER_ID 1
#endif

/* Fast Linear Decoder
   Description:
*/
#ifndef DECODER_FLD
#define DECODER_FLD 0
#endif

//Other Components

#ifndef APPEND_MODES
#define APPEND_MODES 1
#endif

#ifndef HIBC
#define HIBC 1
#endif

#ifndef WINDOWING
#define WINDOWING 1
#endif

#ifndef WINDOWING_DEBUG
#define WINDOWING_DEBUG 1
#endif

#ifndef VIDEO_REVERSE
#define VIDEO_REVERSE 1
#endif

#ifndef OCR_SEPARATE
#define OCR_SEPARATE 1
#endif

#ifndef OCR_PASSPORT
#define OCR_PASSPORT 1
#endif

#ifndef MONOCOLORING
#define MONOCOLORING 1
#endif

#ifndef INJECT_MODE
#define INJECT_MODE 1
#endif

#ifndef ADDENDA_SPACING
#define ADDENDA_SPACING 1
#endif

#ifndef USE_PROPERTIES
#define USE_PROPERTIES 1
#endif

#endif // DECODER_CONFIG_H
