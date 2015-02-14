/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface EKConflictDetails : NSObject {

	NSArray* _dates;
	unsigned long long _totalOccurrences;

}

@property (readonly) NSArray * dates;                                  //@synthesize dates=_dates - In the implementation block
@property (readonly) unsigned long long totalOccurrences;              //@synthesize totalOccurrences=_totalOccurrences - In the implementation block
-(NSArray *)dates;
-(unsigned long long)totalOccurrences;
-(id)initWithDates:(id)arg1 totalOccurrences:(unsigned long long)arg2 ;
-(id)description;
@end

