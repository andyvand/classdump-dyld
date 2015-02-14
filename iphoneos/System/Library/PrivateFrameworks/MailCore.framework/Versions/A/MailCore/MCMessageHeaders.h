/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MailCore-Structs.h>
#import <MailCore/NSCopying.h>
#import <MailCore/NSMutableCopying.h>

@class NSData;

@interface MCMessageHeaders : NSObject <NSCopying, NSMutableCopying> {

	NSData* _data;
	id _sender;
	unsigned long long _encodingHint;

}

@property (nonatomic,readonly) unsigned long long encodingHint;              //@synthesize encodingHint=_encodingHint - In the implementation block
+(id)basicHeaderKeys;
+(id)customDisplayedHeaders;
+(char)_customHeadersEnabled;
+(id)customHeadersIgnoringDisabledState;
+(id)localizedHeaders;
+(const char*)cstringForKey:(id)arg1 ;
+(id)_localizedHeadersForKeys;
+(void)setCustomDisplayedHeaders:(id)arg1 ;
+(id)localizedHeaderForKey:(id)arg1 ;
+(id)localizedHeadersFromEnglishHeaders:(id)arg1 ;
+(id)englishHeadersFromLocalizedHeaders:(id)arg1 ;
+(id)headerKeysFromLocalizedHeaders:(id)arg1 ;
+(char)isAddressHeaderKey:(id)arg1 ;
+(char)isMessageIDHeaderKey:(id)arg1 ;
+(char)isHumanReadableHeaderKey:(id)arg1 ;
+(void)initialize;
-(id)_sender;
-(id)_headersToDisplayFromHeaderKeys:(id)arg1 ;
-(id)_headersForKey:(id)arg1 ;
-(id)_htmlHeaderKey:(id)arg1 useBold:(char)arg2 useGray:(char)arg3 ;
-(id)_htmlValueWithKey:(id)arg1 value:(id)arg2 useBold:(char)arg3 ;
-(id)_capitalizedKeyForKey:(id)arg1 ;
-(id)_attributedStringForHeaders:(id)arg1 ;
-(id)_firstAddressForKey:(id)arg1 sender:(id)arg2 ;
-(void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2 ;
-(id)_newHeaderValueForKey:(id)arg1 offset:(unsigned long long*)arg2 ;
-(id)_newDecodedAddressFromDataInRange:(NSRange)arg1 sender:(id)arg2 consumedLength:(unsigned long long*)arg3 ;
-(id)_newDecodedMessageIDFromDataInRange:(NSRange)arg1 sender:(id)arg2 consumedLength:(unsigned long long*)arg3 ;
-(id)_firstMessageIDForKey:(id)arg1 sender:(id)arg2 ;
-(void)_appendAddressList:(id)arg1 toData:(id)arg2 ;
-(id)htmlStringUseBold:(char)arg1 useGray:(char)arg2 ;
-(id)headersDictionaryForMessageType:(char)arg1 ;
-(void)_resetSender;
-(id)mailVersion;
-(id)addressListForKey:(id)arg1 ;
-(id)firstMessageIDForKey:(id)arg1 ;
-(id)headerData;
-(id)attributedStringForAllHeaders;
-(id)allHeaderKeys;
-(id)messageIDListForKey:(id)arg1 ;
-(id)headersForKey:(id)arg1 ;
-(id)firstHeaderForKey:(id)arg1 ;
-(void)appendHeaderData:(id)arg1 recipients:(id)arg2 recipientsByHeaderKey:(id)arg3 expandGroups:(char)arg4 includeComment:(char)arg5 ;
-(id)firstAddressForKey:(id)arg1 ;
-(id)encodedHeadersIncludingFromSpace:(char)arg1 ;
-(id)initWithHeaderData:(id)arg1 encodingHint:(unsigned long long)arg2 ;
-(char)hasHeaderForKey:(id)arg1 ;
-(void)appendHeaderData:(id)arg1 recipients:(id)arg2 ;
-(unsigned long long)encodingHint;
-(char)messageIsFromMicrosoft;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributedString;
@end

