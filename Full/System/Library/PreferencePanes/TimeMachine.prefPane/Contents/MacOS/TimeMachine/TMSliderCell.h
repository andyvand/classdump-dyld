/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/TimeMachine.prefPane/Contents/MacOS/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TimeMachine/TimeMachine-Structs.h>
#import <AppKit/NSSliderCell.h>

@interface TMSliderCell : NSSliderCell {

	long long _trackingState;

}
+(id)imageNamed:(id)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)startTrackingAt:(CGPoint)arg1 inView:(id)arg2 ;
-(char)continueTracking:(CGPoint)arg1 at:(CGPoint)arg2 inView:(id)arg3 ;
-(void)stopTracking:(CGPoint)arg1 at:(CGPoint)arg2 inView:(id)arg3 mouseIsUp:(char)arg4 ;
-(CGRect)knobRectFlipped:(char)arg1 ;
-(void)drawBarInside:(CGRect)arg1 flipped:(char)arg2 ;
-(void)drawKnob:(CGRect)arg1 ;
@end
