/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface WBSURLCompletionUserTypedString : NSObject {

	NSString* _string;
	const unsigned short* _unichars;
	const char* _chars;
	int _length;
	char _containsAnySpaces;
	char _ownsUnichars;
	char _ownsChars;

}

@property (nonatomic,readonly) NSString * normalizedString;              //@synthesize string=_string - In the implementation block
+(void)initialize;
-(NSString *)normalizedString;
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
@end

