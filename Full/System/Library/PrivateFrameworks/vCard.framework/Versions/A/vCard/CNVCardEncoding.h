/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CNVCardEncoding : NSObject {

	NSString* _name;
	unsigned long long _stringEncoding;

}

@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long stringEncoding;              //@synthesize stringEncoding=_stringEncoding - In the implementation block
+(id)encodingsFromUserDefaults;
+(id)standardEncodings;
+(id)utf8Encoding;
+(id)asciiEncoding;
+(id)isoLatin1Encoding;
+(id)macRomanEncoding;
+(id)preferredEncodingInUserDefaults;
+(id)addPreferredEncoding:(id)arg1 toEncodings:(id)arg2 ;
+(id)encodingWithName:(id)arg1 stringEncoding:(unsigned long long)arg2 ;
-(unsigned long long)stringEncoding;
-(id)initWithName:(id)arg1 stringEncoding:(unsigned long long)arg2 ;
-(NSString *)name;
@end

