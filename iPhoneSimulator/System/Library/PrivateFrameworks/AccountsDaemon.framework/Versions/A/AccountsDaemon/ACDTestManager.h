/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCListener, NSString, NSXPCListenerEndpoint;

@interface ACDTestManager : NSObject {

	NSXPCListener* _accountStoreConnectionListener;
	NSXPCListener* _oauthSignerConnectionListener;
	NSXPCListener* _authenticationDialogConnectionListener;
	NSString* _storePath;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * remoteAccountStoreEndpoint; 
@property (nonatomic,readonly) NSXPCListenerEndpoint * remoteOAuthSignerEndpoint; 
+(id)testServer;
-(id)_pseudoUniqueDatabasePath;
-(void)startTestServer;
-(void)stopTestServer;
-(NSXPCListenerEndpoint *)remoteAccountStoreEndpoint;
-(NSXPCListenerEndpoint *)remoteOAuthSignerEndpoint;
@end

