/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:51:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DashboardClient.framework/Versions/A/DashboardClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DashboardClient/DBCUNIXScriptJSObject.h>

@class WebScriptObject;

@interface DBCAsyncUNIXScriptJSObject : DBCUNIXScriptJSObject {

	WebScriptObject* _callback;
	id _widget;
	unsigned _cancelled : 1;
	unsigned _readingstdout : 1;
	unsigned _readingstderr : 1;
	unsigned _complete : 1;
	unsigned _closed : 1;
	WebScriptObject* onreadoutput;
	WebScriptObject* onreaderror;

}
+(void)_addScriptToCache:(id)arg1 ;
+(void)_removeScriptFromCache:(id)arg1 ;
+(void)invalidateScriptsForWidget:(id)arg1 ;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(id)initWithCommand:(id)arg1 callback:(id)arg2 currentDirectory:(id)arg3 widget:(id)arg4 ;
-(void)_collectData:(id)arg1 ;
-(void)_taskedFinished:(id)arg1 ;
-(void)_clearFileHandle:(id)arg1 ;
-(id)toString;
-(void)write:(id)arg1 ;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)cancel;
-(void)close;
@end
