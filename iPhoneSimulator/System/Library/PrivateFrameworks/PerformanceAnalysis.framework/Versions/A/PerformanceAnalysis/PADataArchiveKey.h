/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/NSCoding.h>
#import <PerformanceAnalysis/NSCopying.h>

@class NSString;

@interface PADataArchiveKey : NSObject <NSCoding, NSCopying> {

	NSString* keyName;
	NSString* className;

}

@property (retain) NSString * keyName; 
@property (retain) NSString * className; 
-(void)setKeyName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 class:(Class)arg2 ;
-(id)initWithName:(id)arg1 classString:(id)arg2 ;
-(NSString *)keyName;
-(char)containsClass:(Class)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
@end

