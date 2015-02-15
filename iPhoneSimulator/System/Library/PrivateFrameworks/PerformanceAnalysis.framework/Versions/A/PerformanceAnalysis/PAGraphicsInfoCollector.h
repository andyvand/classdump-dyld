/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/NSCoding.h>

@class NSMutableDictionary, PAMemorySimpleGraphicsSummary, NSDictionary;

@interface PAGraphicsInfoCollector : NSObject <NSCoding> {

	NSMutableDictionary* processToGraphicsSummary;
	PAMemorySimpleGraphicsSummary* systemGraphicsSummary;
	char hasData;

}

@property (readonly) PAMemorySimpleGraphicsSummary * systemGraphicsSummary; 
@property (readonly) NSDictionary * processToGraphicsSummary; 
@property (readonly) char hasData; 
+(id)collector;
+(char)collectionSupported;
-(char)hasData;
-(void)_refreshGraphicsDataForAllocations:(id)arg1 forProcesses:(id)arg2 ;
-(char)collectDataForProcesses:(id)arg1 ;
-(PAMemorySimpleGraphicsSummary *)systemGraphicsSummary;
-(NSDictionary *)processToGraphicsSummary;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

