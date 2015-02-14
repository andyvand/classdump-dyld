/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class NSProgressIndicator, NSTextField;

@interface EKUITravelTimeSpinnerView : NSView {

	NSProgressIndicator* _spinner;
	NSTextField* _textfield;

}

@property (retain) NSProgressIndicator * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (retain) NSTextField * textfield;                    //@synthesize textfield=_textfield - In the implementation block
-(void)animate;
-(NSTextField *)textfield;
-(void)setTextfield:(NSTextField *)arg1 ;
-(NSProgressIndicator *)spinner;
-(void)setSpinner:(NSProgressIndicator *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop;
@end

