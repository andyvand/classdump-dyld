/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSButton.h>

@class EKUIAlarmGadget;

@interface EKUIAlarmButton : NSButton {

	EKUIAlarmGadget* _gadget;

}

@property (__weak) EKUIAlarmGadget * gadget;              //@synthesize gadget=_gadget - In the implementation block
-(void)setGadget:(EKUIAlarmGadget *)arg1 ;
-(EKUIAlarmGadget *)gadget;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(char)canBecomeKeyView;
@end

