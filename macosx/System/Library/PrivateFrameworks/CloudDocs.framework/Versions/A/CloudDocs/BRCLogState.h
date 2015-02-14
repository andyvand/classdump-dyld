/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CloudDocs/CloudDocs-Structs.h>
@class NSURL, NSString;

@interface BRCLogState : NSObject {

	asl_object_sRef _asl_store;
	asl_object_sRef _asl_client;
	NSURL* _directory;
	NSString* _basename;
	int _fd;
	dispatch_source_sRef _fdDeletionWatcher;

}

@property (nonatomic,retain) NSURL * directory;                //@synthesize directory=_directory - In the implementation block
@property (nonatomic,retain) NSString * basename;              //@synthesize basename=_basename - In the implementation block
+(id)defaultLogState;
-(NSString *)basename;
-(void)closeLog;
-(void)setBasename:(NSString *)arg1 ;
-(void)openASLStoreIfNeeded;
-(void)setPath:(const char*)arg1 base:(const char*)arg2 ;
-(const char*)currentSectionID;
-(void)logMsg:(int)arg1 facility:(const char*)arg2 func:(const char*)arg3 src:(const char*)arg4 lno:(int)arg5 msg:(const char*)arg6 aslmsg:(asl_object_sRef)arg7 ;
-(id)init;
-(int)indentationLevel;
-(void)setLevel:(int)arg1 ;
-(void)setDirectory:(NSURL *)arg1 ;
-(NSURL *)directory;
@end

