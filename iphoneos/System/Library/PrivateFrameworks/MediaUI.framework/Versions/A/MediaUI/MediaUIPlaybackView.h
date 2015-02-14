/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaUI.framework/Versions/A/MediaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaUI/MediaUI-Structs.h>
#import <AppKit/NSView.h>

@class MediaUIPlaybackController, NSViewController, NSView, NSMutableArray, NSTrackingArea;

@interface MediaUIPlaybackView : NSView {

	MediaUIPlaybackController* _playbackController;
	NSViewController* _playbackControlsViewController;
	unsigned _showsSubtitles : 1;
	unsigned _showsClosedCaptions : 1;
	unsigned _allowsUsersInteraction : 1;
	unsigned _showsUserInterface : 1;
	unsigned _controlsVisible : 1;
	int _controlsShownCount;
	NSView* _contentView;
	NSView* _controlsView;
	NSMutableArray* _layoutConstraints;
	NSTrackingArea* _trackingArea;

}

@property (retain) MediaUIPlaybackController * playbackController; 
@property (assign) char allowsUserInteraction; 
@property (assign) char showsUserInterface; 
+(double)temporaryControlsVisibilityInterval;
+(char)requiresConstraintBasedLayout;
+(void)initialize;
-(void)_showOrHideControls;
-(id)playbackControlsViewController;
-(void)setPlaybackControlsViewController:(id)arg1 ;
-(id)makePlaybackController;
-(id)makePlaybackControlsViewController;
-(MediaUIPlaybackController *)playbackController;
-(void)_setupTrackingArea;
-(char)allowsUserInteraction;
-(char)showsUserInterface;
-(char)mouseIsInNoHideArea;
-(void)hideControls;
-(void)showControlsTemporarily:(id)arg1 ;
-(void)setPlaybackController:(MediaUIPlaybackController *)arg1 ;
-(char)showsSubtitles;
-(void)setShowsSubtitles:(char)arg1 ;
-(char)showsClosedCaptions;
-(void)setShowsClosedCaptions:(char)arg1 ;
-(void)setAllowsUserInteraction:(char)arg1 ;
-(void)setShowsUserInterface:(char)arg1 ;
-(void)showControls:(id)arg1 ;
-(void)hideControls:(id)arg1 ;
-(void)showControls;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)rightMouseDown:(id)arg1 ;
-(id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2 ;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)rightMouseUp:(id)arg1 ;
-(void)flagsChanged:(id)arg1 ;
-(void)rightMouseDragged:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)otherMouseUp:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)rotateWithEvent:(id)arg1 ;
-(void)tabletPoint:(id)arg1 ;
-(void)tabletProximity:(id)arg1 ;
-(void)cursorUpdate:(id)arg1 ;
-(void)swipeWithEvent:(id)arg1 ;
-(void)beginGestureWithEvent:(id)arg1 ;
-(void)endGestureWithEvent:(id)arg1 ;
-(void)touchesBeganWithEvent:(id)arg1 ;
-(void)touchesMovedWithEvent:(id)arg1 ;
-(void)touchesEndedWithEvent:(id)arg1 ;
-(void)touchesCancelledWithEvent:(id)arg1 ;
@end

