/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <vCard/vCard-Structs.h>
@class NSMutableData, NSArray;

@interface CNVCardLexer : NSObject {

	NSMutableData* _data;
	char* _bytes;
	unsigned long long _length;
	unsigned long long _peekedPoint;
	unsigned long long _cursor;
	char _unicode;
	long long _errorCount;
	NSArray* _activeTokenSets;

}
-(id)tokenSetForLength:(long long)arg1 ;
-(int)nextTokenPeek:(char)arg1 ;
-(int)nextTokenPeekUnicode:(char)arg1 length:(long long)arg2 ;
-(int)nextTokenPeekSingle:(char)arg1 length:(long long)arg2 ;
-(char)advancePastEOL;
-(char)advancedPastToken:(int)arg1 ;
-(id)nextQuotedStringValueInEncoding:(unsigned long long)arg1 ;
-(NSRange)emptyRangeStartingAtCursor;
-(void)appendDataInRange:(NSRange)arg1 toData:(id)arg2 ;
-(void)appendNextQuotedPrintableDataToData:(id)arg1 ;
-(void)appendNextEscapedCharacterToData:(id)arg1 ;
-(id)stringFromData:(id)arg1 encoding:(unsigned long long)arg2 prefixLength:(unsigned long long)arg3 suffixLength:(unsigned long long)arg4 ;
-(id)nextQuotedPrintableData;
-(id)nextEscapedCharacter;
-(id)trimData:(id)arg1 withPrefixLength:(unsigned long long)arg2 suffixLength:(unsigned long long)arg3 ;
-(id)stringFromSubData:(id)arg1 encoding:(unsigned long long)arg2 ;
-(NSRange)rangeWithLength:(unsigned long long)arg1 lTrim:(unsigned long long)arg2 rTrim:(unsigned long long)arg3 ;
-(NSRange)expandRange:(NSRange)arg1 untilNextByteIs:(id)arg2 ;
-(id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(char)arg2 trim:(char)arg3 ;
-(void)advanceToPeekPoint;
-(void)_applyNextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(char)arg2 stopTokens:(int)arg3 trim:(char)arg4 intoString:(id)arg5 ;
-(id)nextSingleByteStringInEncoding:(unsigned long long)arg1 quotedPrintable:(char)arg2 stopTokens:(int)arg3 trim:(char)arg4 ;
-(int)tokenAtCursor;
-(id)nextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(char)arg2 stopTokens:(int)arg3 trim:(char)arg4 ;
-(id)nextUnicodeBase64Line:(char*)arg1 ;
-(id)nextSingleByteBase64Line:(char*)arg1 ;
-(id)nextBase64Line:(char*)arg1 ;
-(char)advanceToEOL;
-(long long)advanceToString;
-(long long)advanceToUnicodeString;
-(long long)advanceToSingleByteString;
-(int)readNextToken;
-(char)advanceToEOLUnicode;
-(char)advanceToEOLSingle;
-(char)advancePastEOLUnicode;
-(char)advancePastEOLSingle;
-(long long)errorCount;
-(int)peekAtNextToken;
-(unsigned short)charAtPosition:(unsigned long long)arg1 withOffset:(long long)arg2 ;
-(id)stringWithRange:(NSRange)arg1 encoding:(unsigned long long)arg2 ;
-(id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned long long)arg3 ;
-(id)nextBase64Data;
-(char)advanceToToken:(int)arg1 throughTypes:(long long)arg2 ;
-(char)atEOF;
-(unsigned long long)cursor;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end

