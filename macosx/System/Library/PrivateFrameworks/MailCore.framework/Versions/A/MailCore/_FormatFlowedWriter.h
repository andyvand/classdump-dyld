/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MailCore/MailCore-Structs.h>
@class NSMutableString, NSMutableAttributedString, NSAttributedString, NSString;

@interface _FormatFlowedWriter : NSObject {

	NSMutableString* _outputString;
	NSMutableString* _quotedString;
	NSMutableString* _lineString;
	NSMutableAttributedString* _attributedString;
	char _addedTrailingSpaces;
	NSAttributedString* _inputAttributedString;
	unsigned long long _encoding;
	NSString* _inputString;
	unsigned long long _quoteLevel;
	NSRange _paragraphRange;

}

@property (assign,nonatomic) char addedTrailingSpaces;                                       //@synthesize addedTrailingSpaces=_addedTrailingSpaces - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * inputAttributedString;              //@synthesize inputAttributedString=_inputAttributedString - In the implementation block
@property (nonatomic,readonly) unsigned long long encoding;                                  //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,copy) NSString * inputString;                                           //@synthesize inputString=_inputString - In the implementation block
@property (assign,nonatomic) unsigned long long quoteLevel;                                  //@synthesize quoteLevel=_quoteLevel - In the implementation block
@property (assign,nonatomic) NSRange paragraphRange;                                         //@synthesize paragraphRange=_paragraphRange - In the implementation block
-(unsigned long long)encoding;
-(id)initWithAttributedString:(id)arg1 encoding:(unsigned long long)arg2 ;
-(id)outputString;
-(char)addedTrailingSpaces;
-(id)quotedString;
-(unsigned long long)quoteLevel;
-(NSRange)paragraphRange;
-(NSString *)inputString;
-(unsigned long long)_findLineBreakInRange:(NSRange)arg1 maxCharWidthCount:(unsigned long long)arg2 endIsURL:(char)arg3 ;
-(void)setAddedTrailingSpaces:(char)arg1 ;
-(void)setParagraphRange:(NSRange)arg1 ;
-(NSAttributedString *)inputAttributedString;
-(void)setInputString:(NSString *)arg1 ;
-(void)_outputQuotedParagraph;
-(void)setQuoteLevel:(unsigned long long)arg1 ;
-(id)init;
@end

