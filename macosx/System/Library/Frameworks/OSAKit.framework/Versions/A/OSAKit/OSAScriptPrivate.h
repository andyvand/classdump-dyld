/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OSAKit/OSAKit-Structs.h>
@class NSString, NSURL, NSDate, OSALanguageInstance, NSAppleEventDescriptor;

@interface OSAScriptPrivate : NSObject {

	NSString* _source;
	unsigned _compiledScriptID;
	void* _reserved1;
	void* _reserved2;
	NSURL* _url;
	char _dontSetScriptLocation;
	char _isExecuting;
	NSDate* _date;
	OSALanguageInstance* _languageInstance;
	opaque_pthread_t* _executionThread;
	NSAppleEventDescriptor* _defaultTarget;

}
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

