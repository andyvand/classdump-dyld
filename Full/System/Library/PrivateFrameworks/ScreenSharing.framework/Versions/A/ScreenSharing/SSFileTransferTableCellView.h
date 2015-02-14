/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class NSImageView, NSProgressIndicator, NSTextField, NSButton, SSFileTransfer, NSImage, NSProgress, NSLayoutConstraint, NSTimer;

@interface SSFileTransferTableCellView : NSTableCellView {

	NSImageView* documentImageView;
	NSProgressIndicator* progressIndicator;
	NSTextField* upperTextField;
	NSTextField* lowerTextField;
	NSButton* cancelButton;
	NSButton* revealButton;
	SSFileTransfer* fileTransfer;
	NSImage* cancelImagePressed;
	NSImage* cancelImageActive;
	NSImage* cancelImageSelected;
	NSImage* revealImagePressed;
	NSImage* revealImageActive;
	NSImage* revealImageSelected;
	NSProgress* progress;
	NSLayoutConstraint* _lowerTextBottomConstraint;
	NSLayoutConstraint* _upperTextTopConstraint;
	NSTimer* _progressUpdateTimer;

}

@property (retain) SSFileTransfer * fileTransfer; 
@property (retain) NSLayoutConstraint * lowerTextBottomConstraint;              //@synthesize lowerTextBottomConstraint=_lowerTextBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * upperTextTopConstraint;                 //@synthesize upperTextTopConstraint=_upperTextTopConstraint - In the implementation block
@property (assign) NSProgressIndicator * progressIndicator; 
@property (assign) NSButton * cancelButton; 
@property (assign) NSButton * revealButton; 
@property (assign) NSTextField * lowerTextField; 
@property (retain) NSProgress * progress; 
@property (retain) NSTimer * progressUpdateTimer;                               //@synthesize progressUpdateTimer=_progressUpdateTimer - In the implementation block
-(void)setProgressIndicator:(NSProgressIndicator *)arg1 ;
-(void)unobserve:(id)arg1 ;
-(void)observe:(id)arg1 ;
-(NSTimer *)progressUpdateTimer;
-(void)setFileTransfer:(SSFileTransfer *)arg1 ;
-(void)setProgressUpdateTimer:(NSTimer *)arg1 ;
-(NSLayoutConstraint *)upperTextTopConstraint;
-(NSLayoutConstraint *)lowerTextBottomConstraint;
-(SSFileTransfer *)fileTransfer;
-(void)cancelPressed:(id)arg1 ;
-(void)revealPressed:(id)arg1 ;
-(NSButton *)revealButton;
-(void)setRevealButton:(NSButton *)arg1 ;
-(NSTextField *)lowerTextField;
-(void)setLowerTextField:(NSTextField *)arg1 ;
-(void)setLowerTextBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUpperTextTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCancelButton:(NSButton *)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(void)awakeFromNib;
-(NSProgress *)progress;
-(NSProgressIndicator *)progressIndicator;
-(NSButton *)cancelButton;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)update:(id)arg1 ;
@end

