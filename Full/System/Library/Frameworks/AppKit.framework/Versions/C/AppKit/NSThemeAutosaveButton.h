/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSButton.h>
#import <AppKit/NSPopoverDelegate.h>

@class NSError, NSPopover, NSString;

@interface NSThemeAutosaveButton : NSButton <NSPopoverDelegate> {

	long long _editState;
	NSError* _autosavingError;
	double _pulseAnimationStartTime;
	id _animationCompletionBlock;
	id _showHideDelay;
	id _eventMonitor;
	id _flagsChangedEventMonitor;
	NSPopover* _documentPopover;
	double _imageAlphaValue;
	NSError* _nonModalError;
	NSPopover* _alertPopover;
	char _needsShowAlertPopover;
	char _userIsIdleForAlertPopover;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cellClass;
+(id)_textColorForDisplayingAlertPopover;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(id)_documentWindow;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(id)_containingThemeFrame;
-(char)_shouldColorTextForAlertPopover;
-(void)_cancelAnimationCompletionBlock;
-(char)_arrowShouldBeHidden;
-(void)_setAnimationCompletionBlock:(/*^block*/id)arg1 withDuration:(double)arg2 ;
-(char)_shouldUseWindowTitleCell;
-(char)_shouldShowDocumentPopoverWithMouseDownEvent:(id)arg1 ;
-(void)_setTitleCellHighlighted:(char)arg1 ;
-(void)_showDocumentPopoverThenContinue:(/*^block*/id)arg1 ;
-(void)_hidePopover;
-(char)_performMouseDownWithEvent:(id)arg1 ;
-(void)_cancelFadeAnimationDelay;
-(void)_showOrHideArrowAnimate:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateRolloverState;
-(void)_repositionPopover;
-(CGRect)_popoverPositioningRectInSuperview;
-(void)_updateSeparatorFieldStringValue;
-(void)_setupAlertPopoverAutohideIgnoringRecentEvents:(char)arg1 ;
-(void)_userBecameIdleForAlertPopover;
-(void)_delayedHideAlertPopover;
-(id)_buttonTitle;
-(void)_setTitleAndRedisplay:(id)arg1 ;
-(void)_showAlertPopoverIgnoringRecentEvents:(char)arg1 ;
-(void)_windowDidOrderOnScreen:(id)arg1 ;
-(void)popoverDidClose:(id)arg1 ;
-(char)_shouldShowSeparatorField;
-(char)mouseDownEvent:(id)arg1 wouldReactivatePopover:(id)arg2 ;
-(id)displayedPopover;
-(void)setDocumentEditingState:(long long)arg1 animate:(char)arg2 ;
-(long long)documentEditingState;
-(void)setDocumentAutosavingError:(id)arg1 ;
-(id)documentAutosavingError;
-(void)setNonModalDocumentError:(id)arg1 ;
-(id)nonModalDocumentError;
@end

