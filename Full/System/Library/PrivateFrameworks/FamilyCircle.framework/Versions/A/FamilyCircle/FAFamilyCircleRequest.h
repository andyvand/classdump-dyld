/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/Versions/A/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FAFamilyCircleRequest : NSObject {

	NSString* _usernameOrDSID;
	NSString* _passwordOrToken;

}

@property (copy) NSString * usernameOrDSID;               //@synthesize usernameOrDSID=_usernameOrDSID - In the implementation block
@property (copy) NSString * passwordOrToken;              //@synthesize passwordOrToken=_passwordOrToken - In the implementation block
-(id)requestOptions;
-(id)serviceRemoteObjectWithErrorHandler:(/*^block*/id)arg1 ;
-(NSString *)usernameOrDSID;
-(NSString *)passwordOrToken;
-(void)setUsernameOrDSID:(NSString *)arg1 ;
-(void)setPasswordOrToken:(NSString *)arg1 ;
-(id)serviceConnection;
-(id)init;
@end

