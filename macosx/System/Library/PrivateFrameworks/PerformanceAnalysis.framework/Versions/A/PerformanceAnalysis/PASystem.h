/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/NSCoding.h>

@class NSString, NSArray, PAVideoCardSet;

@interface PASystem : NSObject <NSCoding> {

	NSString* build;
	NSArray* processes;
	PAVideoCardSet* cards;
	vm_statistics* vm_stats;
	unsigned long long page_size;
	unsigned long long ram;

}

@property (nonatomic,retain) NSString * build; 
@property (nonatomic,retain) NSArray * processes; 
@property (retain) PAVideoCardSet * cards; 
-(NSArray *)processes;
-(NSString *)build;
-(id)systemMemoryInfoDescription;
-(void)setProcesses:(NSArray *)arg1 ;
-(void)setCards:(PAVideoCardSet *)arg1 ;
-(void)initBuild;
-(void)initMemory;
-(unsigned)processCount;
-(id)getBuild;
-(void)setBuild:(NSString *)arg1 ;
-(PAVideoCardSet *)cards;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
@end

