/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface _NSCFWikipediaProtocol : NSURLProtocol {

	const void* _instance;
	const CFURLProtocolInstanceCallbacks* _callbacks;

}
+(id)canonicalRequestForRequest:(id)arg1 ;
+(char)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(char)canInitWithRequest:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
-(void)dealloc;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)scheduleOnRunloop:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(void)unscheduleOnRunloop:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
@end

