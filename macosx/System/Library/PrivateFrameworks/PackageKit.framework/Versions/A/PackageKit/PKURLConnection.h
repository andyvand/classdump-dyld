/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PackageKit/PackageKit-Structs.h>
@interface PKURLConnection : NSObject
+(void)setUserAgent:(id)arg1 ;
+(void)finishAuthenticationChallenge:(id)arg1 usingCredential:(id)arg2 ;
+(void)didReceiveAuthenticationChallenge:(id)arg1 ;
+(id)userAgent;
+(void)setSharedAuthenticationHandler:(id)arg1 ;
+(void)finishAuthenticationChallenge:(id)arg1 usingCredential:(id)arg2 shouldContinue:(char)arg3 ;
+(void)sendAsynchronousRequest:(id)arg1 notifyOn:(dispatch_queue_sRef)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)sendSynchronousRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3 ;
@end

