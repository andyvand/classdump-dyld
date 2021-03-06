/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:17 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IAChatService : NSObject {

	NSString* _identifier;
	NSString* _displayName;
	NSString* _domainLabel;
	NSString* _accountLabel;
	char _showUsernameField;
	char _showPasswordField;
	char _showServerHostField;
	char _showServerPortField;
	char _showUseSSLCheckbox;
	char _showKerberosCheckbox;

}

@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * domainLabel;               //@synthesize domainLabel=_domainLabel - In the implementation block
@property (nonatomic,retain) NSString * accountLabel;              //@synthesize accountLabel=_accountLabel - In the implementation block
@property (assign) char showUsernameField;                         //@synthesize showUsernameField=_showUsernameField - In the implementation block
@property (assign) char showPasswordField;                         //@synthesize showPasswordField=_showPasswordField - In the implementation block
@property (assign) char showServerHostField;                       //@synthesize showServerHostField=_showServerHostField - In the implementation block
@property (assign) char showServerPortField;                       //@synthesize showServerPortField=_showServerPortField - In the implementation block
@property (assign) char showUseSSLCheckbox;                        //@synthesize showUseSSLCheckbox=_showUseSSLCheckbox - In the implementation block
@property (assign) char showKerberosCheckbox;                      //@synthesize showKerberosCheckbox=_showKerberosCheckbox - In the implementation block
-(void)setShowUsernameField:(char)arg1 ;
-(void)setShowPasswordField:(char)arg1 ;
-(NSString *)domainLabel;
-(void)setDomainLabel:(NSString *)arg1 ;
-(NSString *)accountLabel;
-(void)setAccountLabel:(NSString *)arg1 ;
-(char)showUsernameField;
-(char)showPasswordField;
-(char)showServerHostField;
-(void)setShowServerHostField:(char)arg1 ;
-(char)showServerPortField;
-(void)setShowServerPortField:(char)arg1 ;
-(char)showUseSSLCheckbox;
-(void)setShowUseSSLCheckbox:(char)arg1 ;
-(char)showKerberosCheckbox;
-(void)setShowKerberosCheckbox:(char)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end

