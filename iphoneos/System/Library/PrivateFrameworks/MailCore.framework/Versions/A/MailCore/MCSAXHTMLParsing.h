/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableString, NSMutableDictionary, NSString;

@interface MCSAXHTMLParsing : NSObject {

	NSMutableString* string;
	NSMutableDictionary* attributes;
	NSString* metaName;
	NSString* metaHttpEquiv;
	NSString* metaContent;
	unsigned long long encoding;
	unsigned indexingLimit;
	const char* titleStart;
	unsigned titleLength;
	char inHead;
	char inTitle;
	char inScript;
	char inStyle;

}
-(id)initWithEncoding:(unsigned long long)arg1 ;
@end

