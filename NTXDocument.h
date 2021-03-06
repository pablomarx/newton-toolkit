/*
	File:		NTXDocument

	Abstract:	An NTXDocument displays itself in the main project window using a view controller.

	Written by:		Newton Research, 2014.
*/

#import <Cocoa/Cocoa.h>
#import "EditViewController.h"

/* -----------------------------------------------------------------------------
	N T X D o c u m e n t
	Base class for documents held in a project.
	Each document is shown in a view in the project window, not its own window.
----------------------------------------------------------------------------- */

@interface NTXDocument : NSDocument
@property(strong) NTXEditViewController * viewController;

- (int) evaluate;					// return error code
- (NSString *) exportToText;	// return text representation
@end


/* -----------------------------------------------------------------------------
	N T X L a y o u t D o c u m e n t
----------------------------------------------------------------------------- */

@interface NTXLayoutDocument : NTXDocument
@end


/* -----------------------------------------------------------------------------
	N T X B i t m a p D o c u m e n t
----------------------------------------------------------------------------- */

@interface NTXBitmapDocument : NTXDocument
@end


/* -----------------------------------------------------------------------------
	N T X M e t a D o c u m e n t
	Unused.
----------------------------------------------------------------------------- */

@interface NTXMetaDocument : NTXDocument
@end


/* -----------------------------------------------------------------------------
	N T X S o u n d D o c u m e n t
----------------------------------------------------------------------------- */

@interface NTXSoundDocument : NTXDocument
@end


/* -----------------------------------------------------------------------------
	N T X B o o k D o c u m e n t
	Deprecated in favor of script items.
----------------------------------------------------------------------------- */

@interface NTXBookDocument : NTXDocument
@end


/* -----------------------------------------------------------------------------
	N T X S c r i p t D o c u m e n t
	A NewtonScript source document is a simple text file.
----------------------------------------------------------------------------- */

@interface NTXScriptDocument : NTXDocument
{
	NSTextStorage * textStorage;
}
@end


/* -----------------------------------------------------------------------------
	N T X P a c k a g e D o c u m e n t
----------------------------------------------------------------------------- */

@interface NTXPackageDocument : NTXDocument
@end


/* -----------------------------------------------------------------------------
	N T X S t r e a m D o c u m e n t
----------------------------------------------------------------------------- */

@interface NTXStreamDocument : NTXDocument
@end


/* -----------------------------------------------------------------------------
	N T X N a t i v e C o d e D o c u m e n t
----------------------------------------------------------------------------- */

@interface NTXNativeCodeDocument : NTXDocument
@end

