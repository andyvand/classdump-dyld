/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SLFacebookRemoteSessionProtocol;
@interface SLFacebookSession : NSObject {

	id<SLFacebookRemoteSessionProtocol> _remoteSession;

}
+(id)_remoteInterface;
+(id)sharedSession;
-(id)tokenSecretForEntitledClientWithError:(id*)arg1 ;
-(void)injectCompletedUploadWithCompletion:(/*^block*/id)arg1 ;
-(void)uploadPost:(id)arg1 suppressAlerts:(char)arg2 withPostCompletion:(/*^block*/id)arg3 ;
-(void)uploadsInProgress:(/*^block*/id)arg1 ;
-(void)cancelUploadWithIdentifier:(id)arg1 ;
-(void)revokeAccessTokenForAppWithID:(id)arg1 ;
-(void)likeURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unlikeURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchLikeStatusForURL:(id)arg1 flags:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)testCall;
-(char)uploadPost:(id)arg1 ;
-(char)uploadPost:(id)arg1 forPID:(int)arg2 ;
-(void)revokeAllAccessTokensForDevice;
-(char)uploadProfilePicture:(id)arg1 error:(id*)arg2 ;
-(id)init;
@end
