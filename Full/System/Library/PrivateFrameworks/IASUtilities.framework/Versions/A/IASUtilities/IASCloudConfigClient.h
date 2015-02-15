/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IASUtilities.framework/Versions/A/IASUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, NSMutableDictionary, NSDictionary, NSError, NSData, NSUUID;

@interface IASCloudConfigClient : NSObject {

	char _hasActivationRecord;
	NSXPCConnection* _connection;
	unsigned long long _activationStatus;
	unsigned long long _profileStatus;
	unsigned long long _installationStatus;
	NSMutableDictionary* _activationReplyBlocks;
	NSMutableDictionary* _profileReplyBlocks;
	NSMutableDictionary* _installationReplyBlocks;
	NSDictionary* _activationConfiguration;
	NSError* _activationError;
	NSDictionary* _authorizationInfo;
	NSError* _profileError;
	NSData* _activationProfile;
	NSUUID* _installationUUID;
	NSError* _installationError;

}

@property (retain) NSXPCConnection * connection;                               //@synthesize connection=_connection - In the implementation block
@property (assign) unsigned long long activationStatus;                        //@synthesize activationStatus=_activationStatus - In the implementation block
@property (assign) unsigned long long profileStatus;                           //@synthesize profileStatus=_profileStatus - In the implementation block
@property (assign) unsigned long long installationStatus;                      //@synthesize installationStatus=_installationStatus - In the implementation block
@property (retain) NSMutableDictionary * activationReplyBlocks;                //@synthesize activationReplyBlocks=_activationReplyBlocks - In the implementation block
@property (retain) NSMutableDictionary * profileReplyBlocks;                   //@synthesize profileReplyBlocks=_profileReplyBlocks - In the implementation block
@property (retain) NSMutableDictionary * installationReplyBlocks;              //@synthesize installationReplyBlocks=_installationReplyBlocks - In the implementation block
@property (assign) char hasActivationRecord;                                   //@synthesize hasActivationRecord=_hasActivationRecord - In the implementation block
@property (retain) NSDictionary * activationConfiguration;                     //@synthesize activationConfiguration=_activationConfiguration - In the implementation block
@property (retain) NSError * activationError;                                  //@synthesize activationError=_activationError - In the implementation block
@property (retain) NSDictionary * authorizationInfo;                           //@synthesize authorizationInfo=_authorizationInfo - In the implementation block
@property (retain) NSError * profileError;                                     //@synthesize profileError=_profileError - In the implementation block
@property (retain) NSData * activationProfile;                                 //@synthesize activationProfile=_activationProfile - In the implementation block
@property (retain) NSUUID * installationUUID;                                  //@synthesize installationUUID=_installationUUID - In the implementation block
@property (retain) NSError * installationError;                                //@synthesize installationError=_installationError - In the implementation block
+(id)sharedClient;
-(void)setHasActivationRecord:(char)arg1 ;
-(void)setActivationConfiguration:(NSDictionary *)arg1 ;
-(void)setActivationError:(NSError *)arg1 ;
-(void)setActivationStatus:(unsigned long long)arg1 ;
-(void)setActivationReplyBlocks:(NSMutableDictionary *)arg1 ;
-(void)setProfileStatus:(unsigned long long)arg1 ;
-(void)setProfileReplyBlocks:(NSMutableDictionary *)arg1 ;
-(void)setInstallationStatus:(unsigned long long)arg1 ;
-(void)setInstallationReplyBlocks:(NSMutableDictionary *)arg1 ;
-(void)_ensureXPCConnection;
-(void)setProfileError:(NSError *)arg1 ;
-(void)setActivationProfile:(NSData *)arg1 ;
-(void)setInstallationError:(NSError *)arg1 ;
-(void)setInstallationUUID:(NSUUID *)arg1 ;
-(unsigned long long)activationStatus;
-(char)hasActivationRecord;
-(NSDictionary *)activationConfiguration;
-(NSError *)activationError;
-(NSMutableDictionary *)activationReplyBlocks;
-(void)_triggerActivationRequest;
-(unsigned long long)profileStatus;
-(NSDictionary *)authorizationInfo;
-(NSData *)activationProfile;
-(NSError *)profileError;
-(NSMutableDictionary *)profileReplyBlocks;
-(void)_triggerProfileRequestForAuthorizationInfo:(id)arg1 ;
-(unsigned long long)installationStatus;
-(NSError *)installationError;
-(NSMutableDictionary *)installationReplyBlocks;
-(void)_triggerInstallationRequestForUUID:(id)arg1 withProfileData:(id)arg2 ;
-(void)setAuthorizationInfo:(NSDictionary *)arg1 ;
-(void)_wrappedInstallationRequestWithArguments:(id)arg1 ;
-(NSUUID *)installationUUID;
-(id)requestActivationStatusWithTimeout:(double)arg1 reply:(/*^block*/id)arg2 ;
-(id)requestProfileWithAuthorization:(id)arg1 timeout:(double)arg2 reply:(/*^block*/id)arg3 ;
-(id)requestInstallationWithUUID:(id)arg1 profileData:(id)arg2 timeout:(double)arg3 reply:(/*^block*/id)arg4 ;
-(void)cancelActivationStatusRequest:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(id)init;
-(void)dealloc;
@end

