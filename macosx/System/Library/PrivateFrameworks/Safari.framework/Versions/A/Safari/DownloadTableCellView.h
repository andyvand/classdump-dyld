/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSTableCellView.h>

@class NSProgressIndicator, DownloadProgressEntry, NSTimer, NSTextField, NSButton, NSImage;

@interface DownloadTableCellView : NSTableCellView {

	NSProgressIndicator* _progressIndicator;
	CGRect _iconFrame;
	CGRect _filenameFrame;
	CGRect _statusFrame;
	CGRect _revealFrame;
	CGRect _stopResumeFrame;
	DownloadProgressEntry* _entry;
	NSTimer* _progressTimer;
	int _buttonState;
	NSTextField* _filenameTextField;
	NSTextField* _statusTextField;
	NSButton* _stopResumeButton;
	NSButton* _revealButton;
	NSImage* _iconImage;
	long long _revealTrackingRectTag;
	long long _stopResumeTrackingRectTag;

}
+(double)rowHeight;
-(id)_statusText;
-(void)_updateButtonStateAndStatusField;
-(void)_stopResume:(id)arg1 ;
-(void)_reveal:(id)arg1 ;
-(void)stageDidChange;
-(void)currentFileDidChange;
-(void)progressDidChange;
-(void)_updateIconAndFilename;
-(void)_updateStatusField;
-(void)_updateFrames;
-(void)_updateTextColor;
-(void)_drawIcon:(CGRect)arg1 ;
-(void)_updateProgressAnimation;
-(void)_startProgressAnimation;
-(void)_stopProgressAnimationTimer;
-(id)_rateString;
-(id)_timeRemainingString;
-(id)_stopResumeHelpString;
-(id)_revealHelpString;
-(id)_statusAndRateText;
-(id)displayableFileType;
-(id)_errorSummary;
-(id)_statusAndTimeRemainingText;
-(void)_stopProgressAnimation;
-(void)_startDiskCopyAnimation;
-(void)_startProgressAnimationIfNeeded;
-(id)_stopResumeAccessibilityDescription;
-(id)initWithEntry:(id)arg1 ;
-(id)_openHelpString;
-(id)entry;
-(double)bestWidth;
-(void)dealloc;
-(char)accessibilityIsIgnored;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(char)isFlipped;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)open:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)_removeTrackingRects;
-(void)_updateButtons;
-(id)_enclosingTableView;
-(void)_updateTrackingRects;
@end

