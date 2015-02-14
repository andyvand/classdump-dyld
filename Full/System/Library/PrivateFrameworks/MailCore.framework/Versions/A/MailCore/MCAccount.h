/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray, MCAuthScheme, NSURL;


@protocol MCAccount <NSObject>
@property (copy,readonly) NSString * accountTypeString; 
@property (copy,readonly) NSString * identifier; 
@property (copy) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * saslProfileName; 
@property (assign) char configureDynamically; 
@property (assign) char allowInsecureAuthentication; 
@property (copy) NSString * canonicalEmailAddress; 
@property (copy) NSString * hostname; 
@property (assign) long long portNumber; 
@property (nonatomic,copy,readonly) NSArray * standardPorts; 
@property (nonatomic,copy,readonly) NSArray * standardSSLPorts; 
@property (assign) long long securityLayerType; 
@property (retain) MCAuthScheme * preferredAuthScheme; 
@property (copy) NSString * username; 
@property (copy) NSString * password; 
@property (copy,readonly) NSString * applePersonID; 
@property (copy,readonly) NSString * appleAuthenticationToken; 
@property (copy,readonly) NSString * googleClientToken; 
@property (nonatomic,readonly) char requiresAuthentication; 
@property (assign) char shouldUseAuthentication; 
@property (assign) char usesSSL; 
@property (readonly) NSURL * subscriptionURL; 
@property (copy,readonly) NSString * subscriptionURLLabel; 
@property (copy) NSString * externalHostname; 
@optional
-(NSString *)externalHostname;
-(void)setExternalHostname:(id)arg1;

@required
+(NSString *)accountTypeString;
+(void)saveAccountInfoToDefaults;
-(NSString *)password;
-(NSString *)username;
-(void)setUsername:(id)arg1;
-(void)setHostname:(id)arg1;
-(NSString *)hostname;
-(void)setConfigureDynamically:(char)arg1;
-(NSArray *)standardPorts;
-(NSArray *)standardSSLPorts;
-(void)setTLSIdentity:(OpaqueSecIdentityRefRef)arg1;
-(void)setAllowInsecureAuthentication:(char)arg1;
-(void)setCanonicalEmailAddress:(id)arg1;
-(char)configureDynamically;
-(char)allowInsecureAuthentication;
-(NSString *)canonicalEmailAddress;
-(OpaqueSecIdentityRefRef)copyTLSIdentity;
-(NSString *)accountTypeString;
-(id)sessionPassword;
-(MCAuthScheme *)preferredAuthScheme;
-(void)setSessionPassword:(id)arg1;
-(char)usesSSL;
-(void)setSecurityLayerType:(long long)arg1;
-(long long)securityLayerType;
-(char)requiresAuthentication;
-(char)shouldUseAuthentication;
-(char)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)arg1 host:(id)arg2 didPromptUser:(char*)arg3;
-(void)updateFromSuccessfulConnectionPortNumber:(long long)arg1 securityLayerType:(long long)arg2;
-(char)autodiscoverSettings:(id*)arg1;
-(char)connectAndAuthenticate:(id)arg1;
-(void)respondToHostBecomingReachable;
-(id)newConnectedConnectionDiscoveringBestSettings:(char)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
-(id)authenticatedConnection;
-(char)canAuthenticateWithScheme:(id)arg1;
-(NSString *)saslProfileName;
-(void)setPreferredAuthScheme:(id)arg1;
-(NSString *)applePersonID;
-(NSString *)appleAuthenticationToken;
-(NSString *)googleClientToken;
-(void)setShouldUseAuthentication:(char)arg1;
-(void)setUsesSSL:(char)arg1;
-(NSString *)subscriptionURLLabel;
-(NSString *)identifier;
-(NSString *)displayName;
-(void)setDisplayName:(id)arg1;
-(NSURL *)subscriptionURL;
-(void)setPassword:(id)arg1;
-(long long)portNumber;
-(void)setPortNumber:(long long)arg1;

@end

