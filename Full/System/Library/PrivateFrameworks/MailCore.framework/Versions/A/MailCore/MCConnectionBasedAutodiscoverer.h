/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MCConnectionBasedAutodiscoverer : NSObject {

	char _shouldCancel;
	long long _autoconfigurationStatus;

}

@property (assign) long long autoconfigurationStatus;              //@synthesize autoconfigurationStatus=_autoconfigurationStatus - In the implementation block
@property (assign) char shouldCancel;                              //@synthesize shouldCancel=_shouldCancel - In the implementation block
+(id)serverNameFromAccountSettings:(id)arg1 ;
+(id)userNameForEmailAddress:(id)arg1 accountSettings:(id)arg2 ;
-(void)setAutoconfigurationStatus:(long long)arg1 ;
-(long long)autoconfigurationStatus;
-(char)shouldCancel;
-(void)discoverSettingsForDomain:(id)arg1 receivingAccountSettings:(id*)arg2 sendingAccountsSettings:(id*)arg3 ;
-(void)setShouldCancel:(char)arg1 ;
-(id)init;
-(void)cancel;
@end

