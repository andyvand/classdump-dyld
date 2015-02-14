/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ViewBridge/ViewBridge-Structs.h>
@class NSString;

@interface NSCFRunLoopSemaphore : NSObject {

	unsigned _waiting : 1;
	unsigned _waited : 1;
	unsigned _signaled : 1;
	void* _mode;
	NSString* _legend;
	NSString* _loggingDomain;

}

@property (copy) NSString * legend;                     //@synthesize legend=_legend - In the implementation block
@property (copy) NSString * loggingDomain;              //@synthesize loggingDomain=_loggingDomain - In the implementation block
@property (readonly) NSString * mode;                   //@synthesize mode=_mode - In the implementation block
+(CFStringRef)mode;
-(void)setLoggingDomain:(NSString *)arg1 ;
-(void)setLegend:(NSString *)arg1 ;
-(void)deallocOnAppKitThread;
-(void)_log:(id)arg1 ;
-(void)signalOnAppKitThread;
-(id)initWithModes:(CFArrayRef)arg1 ;
-(NSString *)legend;
-(NSString *)loggingDomain;
-(id)init;
-(void)dealloc;
-(NSString *)mode;
-(void)signal;
-(void)wait;
-(id)initWithMode:(CFStringRef)arg1 ;
@end

