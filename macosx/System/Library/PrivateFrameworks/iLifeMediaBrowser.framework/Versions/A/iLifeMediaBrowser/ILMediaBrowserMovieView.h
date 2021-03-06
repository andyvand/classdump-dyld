/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <AVKit/AVPlayerView.h>

@class NSWindow;

@interface ILMediaBrowserMovieView : AVPlayerView {

	id _representedGroup;
	id _representedObject;
	char _showingThumbnail;
	id _enterKeyTarget;
	SEL _enterKeyAction;
	id _viewDelegate;
	NSWindow* _flagWindow;

}
-(void)_dragSelectionWithEvent:(id)arg1 ;
-(void)setEnterKeyTarget:(id)arg1 ;
-(void)setEnterKeyAction:(SEL)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(char)performKeyEquivalent:(id)arg1 ;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)draggedImage:(id)arg1 beganAt:(CGPoint)arg2 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(id)menuForEvent:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)draggedImage:(id)arg1 movedTo:(CGPoint)arg2 ;
-(void)mouseMoved:(id)arg1 ;
@end

