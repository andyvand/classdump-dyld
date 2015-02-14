/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PAMemRegion.h>
#import <PerformanceAnalysis/NSCoding.h>

@class NSString;

@interface PAMappedFileRegion : PAMemRegion <NSCoding> {

	NSString* shortName;
	NSString* path;
	long long bytesOnDisk;

}

@property (retain) NSString * shortName; 
@property (retain) NSString * path; 
@property (assign) long long bytesOnDisk; 
-(NSString *)shortName;
-(void)setShortName:(NSString *)arg1 ;
-(id)residentAndInfoString;
-(id)initWithVMRegionInfo:(SCD_Struct_PA10*)arg1 andProcess:(id)arg2 ;
-(id)regionTypeSpecificString;
-(long long)bytesOnDisk;
-(void)setBytesOnDisk:(long long)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
@end

