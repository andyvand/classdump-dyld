/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PAMemRange.h>
#import <PerformanceAnalysis/NSCoding.h>

@class PAPageResidency, PAProcess, NSString;

@interface PAMemRegion : PAMemRange <NSCoding> {

	PAPageResidency* pageRes;
	PAPageResidency* privatePageRes;
	PAPageResidency* sharedPageRes;
	PAProcess* owningProcess;
	NSString* classification;
	unsigned nestingDepth;
	vm_region_submap_info_64 regionInfo;
	unsigned offsetFromObject;
	unsigned inProcObjectCount;
	int purgeState;
	char validObjectCount;
	char doDetailedResidency;

}

@property (readonly) PAProcess * owningProcess; 
@property (assign) unsigned offsetFromObject; 
@property (assign) unsigned inProcObjectCount; 
@property (assign) char validObjectCount; 
@property (assign) int purgeState; 
@property (retain) NSString * classification; 
+(id)memRegionsForProcess:(id)arg1 detailed:(char)arg2 ;
+(id)_memRegionsFromVMRegionInfo:(SCD_Struct_PA10*)arg1 andProcess:(id)arg2 detailed:(char)arg3 ;
+(id)_classificationStringForUserTag:(unsigned)arg1 protection:(int)arg2 andShareMode:(unsigned)arg3 ;
-(int)purgeState;
-(vm_region_submap_info_64*)regionInfo;
-(void)setInProcObjectCount:(unsigned)arg1 ;
-(id)getPrivateResidency;
-(id)getSharedResidency;
-(void)classifyRegion;
-(id)residentAndInfoString;
-(id)initWithVMRegionInfo:(SCD_Struct_PA10*)arg1 andProcess:(id)arg2 ;
-(void)setOffsetFromObject:(unsigned)arg1 ;
-(PAProcess *)owningProcess;
-(id)getResidency;
-(char)_isPrivate;
-(id)sharedString;
-(id)purgeStateString;
-(id)protectionString;
-(id)residentString;
-(id)regionSharePurgeProtString;
-(long long)compareDirtyAndSwapped:(id)arg1 ;
-(long long)compareClean:(id)arg1 ;
-(long long)compareSpec:(id)arg1 ;
-(void)gatherDetailedResidency;
-(id)privateResidentString;
-(id)sharedResidentString;
-(id)fullDetailsString;
-(id)regionTypeSpecificString;
-(unsigned)inProcObjectCount;
-(char)validObjectCount;
-(void)setValidObjectCount:(char)arg1 ;
-(unsigned)offsetFromObject;
-(void)setPurgeState:(int)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)classification;
-(void)setClassification:(NSString *)arg1 ;
@end

