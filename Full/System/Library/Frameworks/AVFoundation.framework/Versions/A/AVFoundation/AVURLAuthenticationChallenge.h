/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSURLAuthenticationChallenge.h>
#import <AVFoundation/AVAssetResourceLoaderRequest.h>

@class AVWeakReference, NSDictionary, NSString;

@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge <AVAssetResourceLoaderRequest> {

	AVWeakReference* _weakReference;
	NSDictionary* _requestDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SEL)_selectorForInformingDelegateOfCancellationByFig;
-(id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 ;
-(id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6 ;
-(id)_weakReference;
-(id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 requestDictionary:(id)arg3 ;
-(id)_requestDictionary;
-(void)_performCancellationByClient;
-(char)_shouldInformDelegateOfFigCancellation;
-(id)init;
-(void)dealloc;
@end
