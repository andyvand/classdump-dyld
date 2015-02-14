/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSDate, NSTimeZone;

@interface NSDateCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSDate* _date;
	NSTimeZone* _timeZone;
	double _duration;
	NSDate* _referenceDate;
	id _underlyingResult;
	char _timeIsSignificant;
	char _timeIsApproximate;
	char _timeIsPast;

}

@property (readonly) NSTimeZone * timeZone; 
@property (readonly) double duration; 
@property (readonly) NSDate * referenceDate; 
@property (readonly) void* underlyingResult; 
@property (readonly) char timeIsSignificant; 
@property (readonly) char timeIsApproximate; 
@property (readonly) char timeIsPast; 
-(NSDate *)referenceDate;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(char)_adjustRangesWithOffset:(long long)arg1 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 ;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(char)arg7 timeIsApproximate:(char)arg8 ;
-(char)timeIsSignificant;
-(char)timeIsApproximate;
-(void)dealloc;
-(double)duration;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)date;
-(NSTimeZone *)timeZone;
-(NSRange)range;
-(unsigned long long)resultType;
-(void*)underlyingResult;
-(char)timeIsPast;
-(id)initWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(char)arg7 timeIsApproximate:(char)arg8 timeIsPast:(char)arg9 ;
@end

