/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:51:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DashboardClient.framework/Versions/A/DashboardClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTask, NSString, NSMutableData;

@interface DBCUNIXScriptJSObject : NSObject {

	NSTask* _task;
	int status;
	NSString* outputString;
	NSString* errorString;
	NSMutableData* _outputData;
	NSMutableData* _errorData;

}
+(id)UNIXScriptWithCommand:(id)arg1 callback:(id)arg2 currentDirectory:(id)arg3 widget:(id)arg4 ;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(id)initWithCommand:(id)arg1 currentDirectory:(id)arg2 ;
-(void)_collectData:(id)arg1 ;
-(id)toString;
-(id)init;
-(void)dealloc;
@end
