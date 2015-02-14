/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AppContainer.framework/Versions/A/AppContainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppContainer/AppContainer-Structs.h>
@class NSURL, NSArray, NSFileHandle;

@interface ASBContainerSchema : NSObject {

	NSURL* _schemaURL;
	NSArray* _schema;
	unsigned long long _currentVersion;
	NSFileHandle* _schemaFile;
	dispatch_source_sRef _monitorSource;

}

@property (readonly) unsigned long long currentVersion;              //@synthesize currentVersion=_currentVersion - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedSchema;
-(id)init;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(void)dealloc;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)currentVersion;
-(char)reloadAndReturnError:(id*)arg1 ;
-(id)upgradeScriptFromSchemaVersion:(unsigned long long)arg1 error:(id*)arg2 ;
@end

