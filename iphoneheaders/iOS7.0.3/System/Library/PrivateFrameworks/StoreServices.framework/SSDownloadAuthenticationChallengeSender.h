/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSURLAuthenticationChallengeSender.h>

@protocol OS_dispatch_queue;
@class NSObject, SSDownloadAuthenticationSession;

@interface SSDownloadAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {

	NSObject<OS_dispatch_queue>* _dispatchQueue;
	SSDownloadAuthenticationSession* _session;

}

@property (readonly) SSDownloadAuthenticationSession * authenticationSession; 
-(void)dealloc;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(id)initWithAuthenticationSession:(id)arg1 ;
-(id)authenticationSession;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
@end
