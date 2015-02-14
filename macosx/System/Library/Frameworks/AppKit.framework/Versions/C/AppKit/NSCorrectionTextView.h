/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSCorrectionTextFieldContainer, NSControl, NSImage, NSCorrectionPanel, NSButton, NSString;

@interface NSCorrectionTextView : NSView {

	NSCorrectionTextFieldContainer* correctionTextFieldContainer;
	char useDefaultStringAttributes;
	unsigned long long dismissButtonLocation;
	char mouseDown;
	NSControl* controlWithMouseDownEvent;
	NSImage* dismissButtonImage;
	CGPoint textOrigin;
	NSCorrectionPanel* correctionPanel;
	NSButton* dismissButton;
	long long correctionPanelType;

}

@property (readonly) NSString * correction; 
@property (readonly) char hasSelection; 
@property (assign) char useDefaultStringAttributes; 
@property (readonly) unsigned long long dismissButtonLocation; 
@property (assign) NSCorrectionPanel * correctionPanel; 
@property (readonly) long long correctionPanelType; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(long long)correctionPanelType;
-(void)setCorrectionPanel:(NSCorrectionPanel *)arg1 ;
-(void)setDismissButtonLocation:(unsigned long long)arg1 ;
-(unsigned long long)dismissButtonLocation;
-(void)setCandidates:(id)arg1 andCorrectionPanelType:(long long)arg2 ;
-(void)setSelectedCandidate:(unsigned long long)arg1 ;
-(NSString *)correction;
-(char)selectPreviousCandidate;
-(char)selectNextCandidate;
-(char)hasSelection;
-(char)useDefaultStringAttributes;
-(void)setUseDefaultStringAttributes:(char)arg1 ;
-(void)setCorrectionAttributes:(id)arg1 ;
-(void)_dismissButtonIsPressed;
-(double)_extraWidthForViewHeight:(double)arg1 ;
-(void)_setButtonImage:(id)arg1 ;
-(void)_updateFrame;
-(NSCorrectionPanel *)correctionPanel;
-(id)accessibilityElements;
@end

