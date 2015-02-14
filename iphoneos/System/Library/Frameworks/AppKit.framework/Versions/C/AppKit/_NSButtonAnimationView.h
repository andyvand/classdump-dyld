/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class CAContext, NSView, NSButtonCell;

@interface _NSButtonAnimationView : NSView {

	CGRect _cellFrame;
	long long _fromState;
	long long _fromHighlighted;
	long long _toState;
	long long _toHighlighted;
	CAContext* _webKitContext;
	long long _status;
	/*^block*/id _cancellationBlock;
	CFRunLoopObserverRef _runloopObserver;
	NSView* _controlViewStorage;
	NSButtonCell* _buttonCellStorage;
	char _weakControlViewHelperFlag;
	char _weakButtonCellHelperFlag;

}

@property (readonly) long long status; 
@property (__weak) NSView * controlView; 
@property (__weak) NSButtonCell * buttonCell; 
-(void)dealloc;
-(NSView *)controlView;
-(void)setControlView:(NSView *)arg1 ;
-(id)initWithCell:(id)arg1 ;
-(void)terminate;
-(char)startPendingAnimationWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)animateFromOldState:(long long)arg1 oldHighlight:(char)arg2 ;
-(long long)status;
-(void)shortCircuitDeferredAnimationConfigurationIfNeeded;
-(void)setButtonCell:(NSButtonCell *)arg1 ;
-(void)cancelPreviousCompletionBlock;
-(NSButtonCell *)buttonCell;
-(void)_deferAnimationConfiguration;
-(void)_validateTransitionParameters;
-(id)_buildCUIOptions;
-(id)_FauxCUIMakeButtonAnimation:(id)arg1 ;
-(CFStringRef)_cuiSizeValue;
-(void)_showPlaceholderLayer;
-(void)_deferredConfigureTriggered;
-(void)_configureCurrentAnimation;
-(CGColorRef)_colorForState:(long long)arg1 ;
-(CGColorRef)_colorForHighlight:(char)arg1 ;
-(CGSize)_fauxAnimationLayerSizeForOptions:(id)arg1 ;
@end

