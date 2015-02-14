/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/ImportedBrowserCredential.h>

@class NSString, NSData;

@interface ImportedFirefoxCredential : ImportedBrowserCredential {

	NSString* _base64EncodedEncryptedUsername;
	NSString* _base64EncodedEncryptedPassword;

}

@property (nonatomic,copy,readonly) NSString * base64EncodedEncryptedUsername;              //@synthesize base64EncodedEncryptedUsername=_base64EncodedEncryptedUsername - In the implementation block
@property (nonatomic,copy,readonly) NSString * base64EncodedEncryptedPassword;              //@synthesize base64EncodedEncryptedPassword=_base64EncodedEncryptedPassword - In the implementation block
@property (nonatomic,copy,readonly) NSData * encryptedUsername; 
@property (nonatomic,copy,readonly) NSData * encryptedPassword; 
+(char)supportsSecureCoding;
-(id)encryptedURLCredentialWithPersistence:(unsigned long long)arg1 ;
-(NSData *)encryptedUsername;
-(NSData *)encryptedPassword;
-(id)initWithBase64EncodedEncryptedUsername:(id)arg1 base64EncodedEncryptedPassword:(id)arg2 url:(id)arg3 ;
-(NSString *)base64EncodedEncryptedUsername;
-(NSString *)base64EncodedEncryptedPassword;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
@end

