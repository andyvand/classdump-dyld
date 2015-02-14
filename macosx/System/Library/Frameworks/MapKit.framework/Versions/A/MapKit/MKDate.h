/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSDate.h>

@class NSDate, NSTimeZone;

@interface MKDate : NSDate {

	NSDate* _date;
	NSTimeZone* _tz;

}

@property (nonatomic,retain) NSTimeZone * timeZone;              //@synthesize tz=_tz - In the implementation block
@property (nonatomic,readonly) NSDate * nsDate;                  //@synthesize date=_date - In the implementation block
+(id)dateWithNSDate:(id)arg1 ;
-(id)initWithNSDate:(id)arg1 ;
-(NSDate *)nsDate;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)description;
-(double)timeIntervalSinceReferenceDate;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(long long)dayOfCommonEra;
@end

