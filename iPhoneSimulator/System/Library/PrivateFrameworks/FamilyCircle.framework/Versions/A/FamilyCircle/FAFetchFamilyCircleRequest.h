/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/Versions/A/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSArray, NSDictionary;

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest {

	char _signedInAccountShouldBeApprover;
	char _forceServerFetch;
	char _doNotFetchFromServer;
	char _promptUserToResolveAuthenticatonFailure;
	NSArray* _expectedDSIDs;
	NSDictionary* _serverResponse;

}

@property (copy) NSArray * expectedDSIDs;                                     //@synthesize expectedDSIDs=_expectedDSIDs - In the implementation block
@property (assign) char signedInAccountShouldBeApprover;                      //@synthesize signedInAccountShouldBeApprover=_signedInAccountShouldBeApprover - In the implementation block
@property (assign) char forceServerFetch;                                     //@synthesize forceServerFetch=_forceServerFetch - In the implementation block
@property (assign) char doNotFetchFromServer;                                 //@synthesize doNotFetchFromServer=_doNotFetchFromServer - In the implementation block
@property (assign) char promptUserToResolveAuthenticatonFailure;              //@synthesize promptUserToResolveAuthenticatonFailure=_promptUserToResolveAuthenticatonFailure - In the implementation block
@property (retain,readonly) NSDictionary * serverResponse;                    //@synthesize serverResponse=_serverResponse - In the implementation block
-(id)requestOptions;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)expectedDSIDs;
-(char)signedInAccountShouldBeApprover;
-(char)forceServerFetch;
-(char)doNotFetchFromServer;
-(char)promptUserToResolveAuthenticatonFailure;
-(void)setExpectedDSIDs:(NSArray *)arg1 ;
-(void)setSignedInAccountShouldBeApprover:(char)arg1 ;
-(void)setForceServerFetch:(char)arg1 ;
-(void)setDoNotFetchFromServer:(char)arg1 ;
-(void)setPromptUserToResolveAuthenticatonFailure:(char)arg1 ;
-(NSDictionary *)serverResponse;
@end

