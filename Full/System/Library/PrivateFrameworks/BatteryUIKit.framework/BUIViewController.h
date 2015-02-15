/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BatteryUIKit.framework/BatteryUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSImageView, NSTextField;

@interface BUIViewController : NSObject {

	char powerChimeView;
	NSImageView* _batteryImageView;
	NSTextField* _batteryImageLabel;
	double _redStateTriggerLevel;

}

@property (retain) NSImageView * batteryImageView;               //@synthesize batteryImageView=_batteryImageView - In the implementation block
@property (retain) NSTextField * batteryImageLabel;              //@synthesize batteryImageLabel=_batteryImageLabel - In the implementation block
@property (assign) char powerChimeView; 
@property (getter=isHidden) char hidden; 
@property (assign) double redStateTriggerLevel;                  //@synthesize redStateTriggerLevel=_redStateTriggerLevel - In the implementation block
-(void)updateWithParameters:(id)arg1 ;
-(void)setRedStateTriggerLevel:(double)arg1 ;
-(void)setPowerChimeView:(char)arg1 ;
-(NSImageView *)batteryImageView;
-(char)powerChimeView;
-(NSTextField *)batteryImageLabel;
-(double)redStateTriggerLevel;
-(void)updateWithParametersWithPercentCharged:(double)arg1 useRed:(char)arg2 ;
-(id)initPowerChimeView;
-(void)updateWithParametersWithPercentCharged:(double)arg1 ;
-(void)setBatteryImageView:(NSImageView *)arg1 ;
-(void)setBatteryImageLabel:(NSTextField *)arg1 ;
-(id)init;
-(void)setHidden:(char)arg1 ;
-(char)isHidden;
@end
