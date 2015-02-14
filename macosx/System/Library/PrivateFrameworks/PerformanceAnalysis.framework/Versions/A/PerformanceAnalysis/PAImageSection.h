/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PARangeContainer.h>
#import <PerformanceAnalysis/NSCoding.h>

@class NSString, PAImageSegment;

@interface PAImageSection : PARangeContainer <NSCoding> {

	NSString* name;
	PAImageSegment* parent;

}

@property (retain) NSString * name; 
@property (retain) PAImageSegment * parent; 
-(id)summaryString;
-(id)initWithCSRegion:(CSTypeRef)arg1 Parent:(id)arg2 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)name;
-(PAImageSegment *)parent;
-(void)setParent:(PAImageSegment *)arg1 ;
@end

