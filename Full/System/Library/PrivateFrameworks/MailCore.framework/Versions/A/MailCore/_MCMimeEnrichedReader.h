/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MailCore/MailCore-Structs.h>
@class NSMutableArray, NSMutableString;

@interface _MCMimeEnrichedReader : NSObject {

	SCD_Struct_MC11* _inputBuffer;
	long long _currentIndex;
	long long _inputLength;
	unsigned _noFillLevel : 30;
	unsigned _eatOneNewline : 1;
	unsigned _insideComment : 1;
	long long _lastQuoteLevel;
	NSMutableArray* _commandStack;
	id _outputString;
	NSMutableString* _outputBuffer;
	char outputShouldBeHTML;

}
-(id)currentFont;
-(void)fixConsecutiveSpaces:(id)arg1 ;
-(id)parenthesesSet;
-(id)copyNextTokenWithDelimiters:(id)arg1 ;
-(void)parseParameterString:(id)arg1 ;
-(void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
-(void)handleNoParameterCommand:(const SCD_Struct_MC9*)arg1 ;
-(void)setupFontStackEntry:(id)arg1 ;
-(id)punctuationSet;
-(id)copyCommand;
-(void)resetStateWithString:(id)arg1 outputString:(id)arg2 ;
-(long long)readTokenInto:(id*)arg1 ;
-(void)beginCommand:(id)arg1 ;
-(void)endCommand:(id)arg1 ;
-(void)appendStringToBuffer:(id)arg1 ;
-(void)closeUpQuoting;
-(void)convertRichTextString:(id)arg1 intoOutputString:(id)arg2 ;
-(void)convertEnrichedString:(id)arg1 intoOutputString:(id)arg2 ;
-(void)convertEnrichedString:(id)arg1 intoPlainOutputString:(id)arg2 ;
-(id)init;
-(id)description;
@end

