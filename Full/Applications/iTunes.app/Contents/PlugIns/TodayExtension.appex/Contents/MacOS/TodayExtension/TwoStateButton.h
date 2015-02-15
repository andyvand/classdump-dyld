/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:12:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iTunes.app/Contents/PlugIns/TodayExtension.appex/Contents/MacOS/TodayExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TodayExtension/TodayExtension-Structs.h>
#import <AppKit/NSButton.h>

@interface TwoStateButton : NSButton {

	char _extremeValueHit;
	char _periodicEventHappened;
	char _sendActionOnMouseUp;
	char _canRepeat;

}

@property (assign) char periodicEventHappened;              //@synthesize periodicEventHappened=_periodicEventHappened - In the implementation block
@property (assign) char sendActionOnMouseUp;                //@synthesize sendActionOnMouseUp=_sendActionOnMouseUp - In the implementation block
@property (assign) char canRepeat;                          //@synthesize canRepeat=_canRepeat - In the implementation block
-(void)setSendActionOnMouseUp:(char)arg1 ;
-(void)setRepeatable:(char)arg1 ;
-(char)mouseDownCanSendContinousActions;
-(void)handlePeriodicEvent;
-(char)periodicEventHappened;
-(void)setPeriodicEventHappened:(char)arg1 ;
-(char)sendActionOnMouseUp;
-(char)canRepeat;
-(void)setCanRepeat:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)acceptsFirstResponder;
-(void)mouseDown:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
@end
