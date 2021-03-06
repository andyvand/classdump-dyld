/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface PADataArchive : NSObject {

	NSString* archivePath;
	NSString* decompressPath;
	NSMutableDictionary* listings;
	char modified;
	char create;

}

@property (retain) NSString * archivePath; 
@property (retain) NSString * decompressPath; 
@property (retain) NSDictionary * listings; 
+(char)addProcess:(id)arg1 toDataAtPath:(id)arg2 withTag:(id)arg3 ;
+(char)addFootprint:(id)arg1 toDataAtPath:(id)arg2 withTag:(id)arg3 ;
+(char)addAbandonedMemoryData:(id)arg1 toDataAtPath:(id)arg2 withTag:(id)arg3 ;
+(char)addObject:(id)arg1 withName:(id)arg2 toDataAtPath:(id)arg3 withTag:(id)arg4 ;
-(NSString *)archivePath;
-(id)fullNameString;
-(void)setArchivePath:(NSString *)arg1 ;
-(void)setDecompressPath:(NSString *)arg1 ;
-(char)decompressFromFile:(id)arg1 ;
-(void)setListings:(NSDictionary *)arg1 ;
-(id)getObjectWithHandle:(id)arg1 ;
-(char)addProcess:(id)arg1 withTag:(id)arg2 ;
-(char)addFootprint:(id)arg1 withTag:(id)arg2 ;
-(char)addObject:(id)arg1 withName:(id)arg2 withTag:(id)arg3 ;
-(void)cleanupDecompressDir;
-(void)writeOutChanges:(char)arg1 ;
-(char)addAbandonedMemoryData:(id)arg1 withTag:(id)arg2 ;
-(id)getProcessWithHandle:(id)arg1 ;
-(id)getProcessHandlesWithKeyName:(id)arg1 ;
-(id)getFootprintWithHandle:(id)arg1 ;
-(id)getFootprintHandlesWithKeyName:(id)arg1 ;
-(id)getKeyForProcessWithName:(id)arg1 pid:(int)arg2 ;
-(id)getAbandonedMemoryDataWithHandle:(id)arg1 ;
-(id)getObjectHandlesWithKeyName:(id)arg1 classString:(id)arg2 ;
-(id)getAllKeys;
-(NSString *)decompressPath;
-(NSDictionary *)listings;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
@end

