/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@interface MCCIDURLProtocol : NSURLProtocol
+(id)canonicalRequestForRequest:(id)arg1 ;
+(void)registerDataProvider:(id)arg1 ;
+(void)unregisterDataProvider:(id)arg1 ;
+(char)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(char)canInitWithRequest:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
@end

