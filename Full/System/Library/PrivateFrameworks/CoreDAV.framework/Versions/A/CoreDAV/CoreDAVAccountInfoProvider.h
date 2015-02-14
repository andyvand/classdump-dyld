/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreDAVAccountInfoProvider <NSObject>
@optional
-(char)handleTrustChallenge:(id)arg1;
-(char)handleShouldUseCredentialStorage;
-(char)handleAuthenticateAgainstProtectionSpace:(id)arg1;
-(char)shouldTurnModalOnBadPassword;
-(void)noteHomeSetOnDifferentHost:(id)arg1;
-(char)shouldSendClientInfoHeaderForURL:(id)arg1;
-(id)additionalHeaderValues;
-(id)customConnectionProperties;
-(id)oauthInfoProvider;
-(char)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
-(char)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
-(char)shouldRetryUnauthorizedConnection:(id)arg1;
-(char)shouldHandleHTTPCookiesForURL:(id)arg1;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 forTask:(id)arg2;
-(void)noteFailedNetworkRequestForTask:(id)arg1;
-(void)noteFailedProtocolRequestForTask:(id)arg1;
-(void)noteTimeSpentInNetworking:(double)arg1 forTask:(id)arg2;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;
-(void)noteTimeSpentInNetworking:(double)arg1;
-(CFURLStorageSessionRef)copyStorageSession;
-(char)shouldUseOpportunisticSockets;
-(char)shouldCompressRequests;
-(void)clientTokenRequestedByServer;
-(id)clientToken;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(/*^block*/id)arg3;

@required
-(id)password;
-(id)user;
-(id)scheme;
-(id)host;
-(id)accountID;
-(id)principalURL;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1;
-(id)serverRoot;
-(id)identityPersist;
-(id)serverComplianceClasses;
-(id)userAgentHeader;
-(char)handleCertificateError:(id)arg1;
-(char)shouldFailAllTasks;
-(long long)port;

@end

