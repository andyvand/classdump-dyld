/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSTextField.h>

@class NSDate;

@interface HourLabel : NSTextField {

	NSDate* _time;

}

@property (retain) NSDate * time;              //@synthesize time=_time - In the implementation block
-(NSDate *)time;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTime:(NSDate *)arg1 ;
@end

