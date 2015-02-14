/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface EWSAutodiscoverResponse : NSObject {

	NSString* _displayName;
	NSString* _emailAddress;
	NSString* _user;
	NSURL* _internalURL;
	NSURL* _externalURL;
	NSURL* _autodiscoverURL;

}

@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                      //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * user;                              //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSURL * internalURL;                      //@synthesize internalURL=_internalURL - In the implementation block
@property (nonatomic,readonly) NSURL * externalURL;                      //@synthesize externalURL=_externalURL - In the implementation block
@property (nonatomic,readonly) NSURL * autodiscoverURL;                  //@synthesize autodiscoverURL=_autodiscoverURL - In the implementation block
-(NSString *)user;
-(id)initWithDisplayName:(id)arg1 internalURL:(id)arg2 externalURL:(id)arg3 autodiscoverURL:(id)arg4 ;
-(NSURL *)internalURL;
-(NSURL *)autodiscoverURL;
-(void)dealloc;
-(id)description;
-(NSString *)displayName;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setUser:(NSString *)arg1 ;
-(NSURL *)externalURL;
@end

