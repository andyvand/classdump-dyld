/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:55:40 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/Spotify.app/Contents/MacOS/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <AppKit/NSView.h>

@class NSTrackingArea;

@interface SPView : NSView {

	NSTrackingArea* _trackingArea;
	unsigned _dragOperation;
	char _dragging;
	char _acceptsFirstResponder;
	Application* _application;

}
-(unsigned)dragOperationFromAction:(int)arg1 ;
-(char)wantsPeriodicDraggingUpdates;
-(unsigned)draggingEntered:(id)arg1 ;
-(unsigned)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(unsigned)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(WindowOSX*)windowOSX;
-(GuiWindow*)guiWindow;
-(NSPoint)remapEvent:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)acceptsFirstResponder;
-(id)initWithFrame:(NSRect)arg1 andApplication:(Application*)arg2 ;
-(void)dealloc;
-(void)drawRect:(NSRect)arg1 ;
-(void)updateTrackingAreas;
-(void)resetCursorRects;
-(void)viewDidMoveToWindow;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(id)view:(id)arg1 stringForToolTip:(int)arg2 point:(NSPoint)arg3 userData:(void*)arg4 ;
-(char)isFlipped;
-(int)mouseButtonFromEvent:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(void)rightMouseUp:(id)arg1 ;
-(void)viewWillStartLiveResize;
-(void)viewDidEndLiveResize;
-(void)swipeWithEvent:(id)arg1 ;
@end
