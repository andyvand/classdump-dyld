/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSDate;

@interface _NSDatePickerRange : NSObject {

	NSDate* _date;
	double _timeInterval;
	char _anchorOnLeft;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(id)date;
-(double)timeInterval;
-(void)setTimeInterval:(double)arg1 ;
-(id)initWithDate:(id)arg1 timeInterval:(double)arg2 ;
-(id)endDate;
-(void)setAnchorRight;
-(void)setAnchorLeft;
-(NSRange)daysInMonth:(long long)arg1 year:(long long)arg2 forDatePickerCell:(id)arg3 ;
-(id)initWithDatePickerRange:(id)arg1 ;
-(void)setDate:(id)arg1 ;
-(char)isAnchoredLeft;
-(char)isAnchoredRight;
-(id)dateRangeExtendedWithDate:(id)arg1 ;
-(id)dateRangeTrimmedFromNearestEndWithDate:(id)arg1 ;
-(id)dateRangeAnchoredSelectionWithDate:(id)arg1 ;
-(char)containsDayGranularityDate:(id)arg1 forDatePickerCell:(id)arg2 ;
-(char)containsMonth:(long long)arg1 year:(long long)arg2 forDatePickerCell:(id)arg3 ;
@end

