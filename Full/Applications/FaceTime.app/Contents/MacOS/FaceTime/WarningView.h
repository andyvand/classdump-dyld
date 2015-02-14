/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <AppKit/NSView.h>

@class WarningTextField, ClickableTextField;

@interface WarningView : NSView {

	WarningTextField* _warningTextField;
	ClickableTextField* _clickableTextField;

}

@property (retain) WarningTextField * warningTextField;                  //@synthesize warningTextField=_warningTextField - In the implementation block
@property (retain) ClickableTextField * clickableTextField;              //@synthesize clickableTextField=_clickableTextField - In the implementation block
-(void)setWarningText:(id)arg1 ;
-(void)setClickableText:(id)arg1 ;
-(ClickableTextField *)clickableTextField;
-(void)setClickableTextField:(ClickableTextField *)arg1 ;
-(WarningTextField *)warningTextField;
-(void)setWarningTextField:(WarningTextField *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)sizeToFit;
@end

