/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTextField.h>

@class EKUICustomAlarmView;

@interface EKUICountField : NSTextField {

	EKUICustomAlarmView* _alarmView;

}

@property (__weak) EKUICustomAlarmView * alarmView;              //@synthesize alarmView=_alarmView - In the implementation block
-(void)setAlarmView:(EKUICustomAlarmView *)arg1 ;
-(EKUICustomAlarmView *)alarmView;
-(void)textDidChange:(id)arg1 ;
@end

