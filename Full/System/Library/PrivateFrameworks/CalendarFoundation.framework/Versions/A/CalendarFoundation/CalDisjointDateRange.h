/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <CalendarFoundation/NSCopying.h>
#import <CalendarFoundation/NSSecureCoding.h>

@class NSMutableSet;

@interface CalDisjointDateRange : NSObject <NSCopying, NSSecureCoding> {

	NSMutableSet* _distinctRanges;

}

@property (nonatomic,copy) NSMutableSet * distinctRanges;              //@synthesize distinctRanges=_distinctRanges - In the implementation block
+(id)disjointRangeWithDistinctRanges:(id)arg1 ;
+(id)disjointRangeWithSingleRange:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)subtractDisjointRange:(id)arg1 ;
-(double)totalDuration;
-(id)initWithDistinctRanges:(id)arg1 ;
-(id)sortedDistinctRanges;
-(id)addDisjointRange:(id)arg1 ;
-(void)setDistinctRanges:(NSMutableSet *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)addRange:(id)arg1 ;
-(char)containsDate:(id)arg1 ;
-(char)containsRange:(id)arg1 ;
-(id)subtractRange:(id)arg1 ;
-(NSMutableSet *)distinctRanges;
@end

