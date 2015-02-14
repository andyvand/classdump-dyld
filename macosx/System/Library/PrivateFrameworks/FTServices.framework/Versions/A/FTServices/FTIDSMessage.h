/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/Versions/A/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <FTServices/NSCopying.h>

@class NSData, NSString, NSMutableArray;

@interface FTIDSMessage : IDSBaseMessage <NSCopying> {

	NSData* _pushCert;
	OpaqueSecKeyRefRef _identityKey;
	NSData* _identityCert;
	OpaqueSecKeyRefRef _identityPublicKey;
	OpaqueSecKeyRefRef _pushKey;
	OpaqueSecKeyRefRef _pushPublicKey;
	NSData* _pushToken;
	NSString* _selfURI;
	NSMutableArray* _certDataArray;
	NSMutableArray* _publicKeyArray;
	NSMutableArray* _privateKeyArray;
	NSMutableArray* _userIDArray;

}

@property (assign,nonatomic) OpaqueSecKeyRefRef pushPrivateKey;                  //@synthesize pushKey=_pushKey - In the implementation block
@property (assign,nonatomic) OpaqueSecKeyRefRef pushPublicKey;                   //@synthesize pushPublicKey=_pushPublicKey - In the implementation block
@property (nonatomic,copy) NSData * pushCertificate;                             //@synthesize pushCert=_pushCert - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                                   //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,copy) NSString * selfURI;                                   //@synthesize selfURI=_selfURI - In the implementation block
@property (nonatomic,copy) NSMutableArray * certDataArray;                       //@synthesize certDataArray=_certDataArray - In the implementation block
@property (nonatomic,copy) NSMutableArray * publicKeyArray;                      //@synthesize publicKeyArray=_publicKeyArray - In the implementation block
@property (nonatomic,copy) NSMutableArray * privateKeyArray;                     //@synthesize privateKeyArray=_privateKeyArray - In the implementation block
@property (nonatomic,copy) NSMutableArray * userIDArray;                         //@synthesize userIDArray=_userIDArray - In the implementation block
@property (assign,nonatomic) OpaqueSecKeyRefRef identityPrivateKey;              //@synthesize identityKey=_identityKey - In the implementation block
@property (assign,nonatomic) OpaqueSecKeyRefRef identityPublicKey;               //@synthesize identityPublicKey=_identityPublicKey - In the implementation block
@property (nonatomic,copy) NSData * IDCertificate;                               //@synthesize identityCert=_identityCert - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)command;
-(NSData *)pushToken;
-(void)setPushToken:(NSData *)arg1 ;
-(char)wantsHTTPHeaders;
-(char)wantsBinaryPush;
-(char)wantsIDSServer;
-(char)wantsCompressedBody;
-(char)wantsBagKey;
-(char)wantsSignature;
-(char)wantsBodySignature;
-(OpaqueSecKeyRefRef)pushPrivateKey;
-(void)setPushPrivateKey:(OpaqueSecKeyRefRef)arg1 ;
-(OpaqueSecKeyRefRef)pushPublicKey;
-(void)setPushPublicKey:(OpaqueSecKeyRefRef)arg1 ;
-(NSData *)pushCertificate;
-(void)setPushCertificate:(NSData *)arg1 ;
-(NSMutableArray *)certDataArray;
-(void)setCertDataArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)publicKeyArray;
-(void)setPublicKeyArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)privateKeyArray;
-(void)setPrivateKeyArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)userIDArray;
-(void)setUserIDArray:(NSMutableArray *)arg1 ;
-(OpaqueSecKeyRefRef)identityPrivateKey;
-(OpaqueSecKeyRefRef)identityPublicKey;
-(NSData *)IDCertificate;
-(long long)responseCommand;
-(id)additionalMessageHeaders;
-(id)additionalMessageHeadersForOutgoingPush;
-(NSString *)selfURI;
-(void)setSelfURI:(NSString *)arg1 ;
-(void)setIDCertificate:(NSData *)arg1 ;
-(void)setIdentityPrivateKey:(OpaqueSecKeyRefRef)arg1 ;
-(void)setIdentityPublicKey:(OpaqueSecKeyRefRef)arg1 ;
-(void)addAuthUserID:(id)arg1 certificate:(id)arg2 privateKey:(OpaqueSecKeyRefRef)arg3 publicKey:(OpaqueSecKeyRefRef)arg4 ;
@end

