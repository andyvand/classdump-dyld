/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/DiscRecording.framework/Versions/A/DiscRecording
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DiscRecording/DiscRecording-Structs.h>
#import <DiscRecording/DRFSObject.h>

@interface DRFile : DRFSObject
+(id)fileWithPath:(id)arg1 ;
+(id)virtualFileWithName:(id)arg1 data:(id)arg2 ;
+(id)virtualFileWithName:(id)arg1 dataProducer:(id)arg2 ;
+(id)hardLinkPointingTo:(id)arg1 inFilesystem:(id)arg2 ;
+(id)symLinkPointingTo:(id)arg1 inFilesystem:(id)arg2 ;
+(id)finderAliasPointingTo:(id)arg1 inFilesystem:(id)arg2 ;
+(void)initialize;
-(DRFileObject*)_obj;
-(id)initWithFSRef:(const FSRef*)arg1 ;
-(id)initWithName:(id)arg1 bytes:(void*)arg2 length:(unsigned long long)arg3 ;
-(id)initWithName:(id)arg1 callback:(/*function pointer*/void*)arg2 refCon:(void*)arg3 ;
-(id)initWithLinkType:(id)arg1 pointingTo:(id)arg2 inFilesystem:(id)arg3 ;
-(id)initWithName:(id)arg1 dataProducer:(id)arg2 ;
-(unsigned long long)_cfTypeID;
-(id)initWithName:(id)arg1 data:(id)arg2 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithPath:(id)arg1 ;
@end

