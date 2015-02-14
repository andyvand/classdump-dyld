/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/NSCoding.h>
#import <PerformanceAnalysis/NSCopying.h>

@class NSString;

@interface PADataArchiveHandle : NSObject <NSCoding, NSCopying> {

	NSString* tag;
	NSString* className;
	NSString* name;

}

@property (retain) NSString * name; 
@property (retain) NSString * tag; 
@property (retain) NSString * className; 
-(id)initWithKey:(id)arg1 index:(unsigned)arg2 tag:(id)arg3 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setTag:(NSString *)arg1 ;
-(NSString *)tag;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
@end

