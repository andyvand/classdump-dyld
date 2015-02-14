/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCAccount;
#import <MailCore/MailCore-Structs.h>
@class NSError, NSString, NSArray;

@interface MCSaslClient : NSObject {

	char* _userLanguageCode;
	char* _authenticationName;
	char* _authorizationName;
	sasl_secret* _password;
	char* _authenticationPersonID;
	char* _authorizationPersonID;
	char* _appleToken;
	char* _googleToken;
	char _excludeAuthorizationName;
	char _mechanismUsesPlainText;
	char _lastResponseIncludesCredential;
	unsigned _encryptionBufferSize;
	id<MCAccount> _account;
	long long _saslStatus;
	NSError* _saslError;
	NSString* _selectedMechanismName;
	NSArray* _mechanismNames;
	sasl_callback* _callbacks;
	sasl_connRef _saslConnection;

}

@property (assign,nonatomic,__weak) id<MCAccount> account;                                //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) long long saslStatus;                                        //@synthesize saslStatus=_saslStatus - In the implementation block
@property (nonatomic,retain) NSError * saslError;                                         //@synthesize saslError=_saslError - In the implementation block
@property (nonatomic,copy) NSString * selectedMechanismName;                              //@synthesize selectedMechanismName=_selectedMechanismName - In the implementation block
@property (assign,nonatomic) char excludeAuthorizationName;                               //@synthesize excludeAuthorizationName=_excludeAuthorizationName - In the implementation block
@property (nonatomic,readonly) char lastResponseIncludesPlainTextCredential; 
@property (assign,nonatomic) unsigned encryptionBufferSize;                               //@synthesize encryptionBufferSize=_encryptionBufferSize - In the implementation block
@property (nonatomic,copy) NSArray * mechanismNames;                                      //@synthesize mechanismNames=_mechanismNames - In the implementation block
@property (assign,nonatomic) sasl_callback* callbacks;                                    //@synthesize callbacks=_callbacks - In the implementation block
@property (assign,nonatomic) sasl_connRef saslConnection;                                 //@synthesize saslConnection=_saslConnection - In the implementation block
@property (assign,nonatomic) char mechanismUsesPlainText;                                 //@synthesize mechanismUsesPlainText=_mechanismUsesPlainText - In the implementation block
@property (assign,nonatomic) char lastResponseIncludesCredential;                         //@synthesize lastResponseIncludesCredential=_lastResponseIncludesCredential - In the implementation block
+(id)keyPathsForValuesAffectingLastResponseIncludesPlainTextCredential;
-(id)initWithMechanismNames:(id)arg1 account:(id)arg2 externalSecurityLayer:(unsigned)arg3 allowPlainText:(char)arg4 ;
-(void)setExcludeAuthorizationName:(char)arg1 ;
-(id)newDecryptedDataForBytes:(const char*)arg1 length:(unsigned)arg2 ;
-(id)newEncryptedDataForBytes:(const char*)arg1 length:(unsigned)arg2 ;
-(char)_logGenericError:(int)arg1 saslConnection:(sasl_connRef)arg2 description:(id)arg3 error:(id*)arg4 ;
-(NSArray *)mechanismNames;
-(sasl_connRef)saslConnection;
-(void)setSelectedMechanismName:(NSString *)arg1 ;
-(void)_clearAuthenticationCallbackBuffers;
-(void)setSaslStatus:(long long)arg1 ;
-(void)_retrieveEncryptionBufferSize;
-(void)_handleGenericError:(int)arg1 description:(id)arg2 ;
-(void)_handleNeedsUserInteraction:(sasl_interact*)arg1 ;
-(void)_handleStartFailure:(int)arg1 ;
-(void)setLastResponseIncludesCredential:(char)arg1 ;
-(char)lastResponseIncludesCredential;
-(char)mechanismUsesPlainText;
-(void)setEncryptionBufferSize:(unsigned)arg1 ;
-(void)setSaslError:(NSError *)arg1 ;
-(char)excludeAuthorizationName;
-(void)setMechanismNames:(NSArray *)arg1 ;
-(sasl_callback*)callbacks;
-(void)setCallbacks:(sasl_callback*)arg1 ;
-(void)setSaslConnection:(sasl_connRef)arg1 ;
-(void)setMechanismUsesPlainText:(char)arg1 ;
-(id)startAndReturnInitialResponse:(char)arg1 ;
-(long long)saslStatus;
-(NSError *)saslError;
-(NSString *)selectedMechanismName;
-(id)responseForServerData:(id)arg1 ;
-(char)lastResponseIncludesPlainTextCredential;
-(unsigned)encryptionBufferSize;
-(id)init;
-(void)dealloc;
-(id)description;
-(id<MCAccount>)account;
-(void)setAccount:(id<MCAccount>)arg1 ;
@end

