/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MCMimeCharset : NSObject {

	char _useBase64InHeaders;
	char _canBeUsedForOutgoingMessages;
	unsigned long long _encoding;
	NSString* _primaryLanguage;
	NSString* _charsetName;

}

@property (readonly) unsigned long long encoding;                              //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryLanguage;                //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
@property (nonatomic,copy,readonly) NSString * charsetName;                    //@synthesize charsetName=_charsetName - In the implementation block
@property (nonatomic,readonly) char useBase64InHeaders;                        //@synthesize useBase64InHeaders=_useBase64InHeaders - In the implementation block
@property (nonatomic,readonly) char canBeUsedForOutgoingMessages;              //@synthesize canBeUsedForOutgoingMessages=_canBeUsedForOutgoingMessages - In the implementation block
+(unsigned long long)encodingVariantForEncoding:(unsigned long long)arg1 address:(id)arg2 ;
+(id)allMimeCharsets;
+(id)preferredMimeCharset;
+(id)encodingVariantsForRecipients:(id)arg1 ;
+(id)charsetForEncoding:(unsigned long long)arg1 ;
-(unsigned long long)encoding;
-(id)initWithCFEncoding:(unsigned)arg1 primaryLanguage:(id)arg2 ;
-(NSString *)primaryLanguage;
-(char)useBase64InHeaders;
-(char)canBeUsedForOutgoingMessages;
-(NSString *)charsetName;
-(id)description;
-(id)displayName;
@end

