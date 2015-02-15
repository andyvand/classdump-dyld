/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/Versions/A/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface APSSystemUser : NSObject {

	NSString* _userID;
	NSString* _status;
	char _daemonUser;

}

@property (nonatomic,readonly) unsigned uid; 
@property (nonatomic,readonly) NSString * userID;              //@synthesize userID=_userID - In the implementation block
@property (nonatomic,retain) NSString * status; 
+(id)systemUserWithUID:(unsigned)arg1 ;
+(id)systemUserWithUserID:(id)arg1 ;
+(id)allConsoleUserIDs;
-(NSString *)userID;
-(char)isLoggedIn;
-(id)initWithUserID:(id)arg1 ;
-(char)isDaemonUser;
-(char)isLoggedOut;
-(void)dealloc;
-(id)debugDescription;
-(NSString *)status;
-(void)updateStatus;
-(unsigned)uid;
-(void)setStatus:(NSString *)arg1 ;
@end

