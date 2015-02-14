/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CNVCardActivityAlertScanner : NSObject {

	NSString* _string;
	unsigned long long _position;

}
+(char)characterIsStringValueCharacter:(unsigned short)arg1 ;
+(id)scanAlertValueFromString:(id)arg1 ;
+(id)scannerWithString:(id)arg1 ;
-(unsigned short)nextCharacter;
-(id)scanAlertValue;
-(id)scanKeyValuePair;
-(char)scanPastItemDelimiter;
-(id)scanStringValue;
-(char)scanPastKeyValueSeparator;
-(unsigned short)nextUnescapedCharacter;
-(id)scanQuotedStringValue;
-(id)scanUnquotedStringValue;
-(unsigned short)scanCharacter;
-(char)scanPastCharacter:(unsigned short)arg1 ;
-(unsigned short)scanCharacterWithEscaping:(char)arg1 ;
-(void)scanPastWhitespace;
-(char)atEnd;
-(void)dealloc;
-(unsigned long long)position;
-(id)initWithString:(id)arg1 ;
@end

