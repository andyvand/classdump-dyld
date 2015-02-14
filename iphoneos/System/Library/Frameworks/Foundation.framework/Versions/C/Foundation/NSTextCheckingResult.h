/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSCoding.h>

@interface NSTextCheckingResult : NSObject <NSCopying, NSCoding>

@property (readonly) unsigned long long resultType; 
@property (readonly) NSRange range; 
+(id)orthographyCheckingResultWithRange:(NSRange)arg1 orthography:(id)arg2 ;
+(id)spellCheckingResultWithRange:(NSRange)arg1 ;
+(id)grammarCheckingResultWithRange:(NSRange)arg1 details:(id)arg2 ;
+(id)dateCheckingResultWithRange:(NSRange)arg1 date:(id)arg2 ;
+(id)dateCheckingResultWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 ;
+(id)addressCheckingResultWithRange:(NSRange)arg1 components:(id)arg2 ;
+(id)linkCheckingResultWithRange:(NSRange)arg1 URL:(id)arg2 ;
+(id)quoteCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 ;
+(id)dashCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 ;
+(id)replacementCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 ;
+(id)correctionCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 ;
+(id)correctionCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3 ;
+(id)regularExpressionCheckingResultWithRanges:(NSRange*)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3 ;
+(id)phoneNumberCheckingResultWithRange:(NSRange)arg1 phoneNumber:(id)arg2 ;
+(id)transitInformationCheckingResultWithRange:(NSRange)arg1 components:(id)arg2 ;
+(void)initialize;
-(unsigned long long)numberOfRanges;
-(void)encodeRangeWithCoder:(id)arg1 ;
-(NSRange)decodeRangeWithCoder:(id)arg1 ;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(char)_adjustRangesWithOffset:(long long)arg1 ;
-(double)duration;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)URL;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(id)date;
-(id)components;
-(id)timeZone;
-(NSRange)range;
-(id)replacementString;
-(id)grammarDetails;
-(unsigned long long)resultType;
-(void*)underlyingResult;
-(id)orthography;
-(id)alternativeStrings;
-(id)phoneNumber;
-(id)regularExpression;
-(id)addressComponents;
@end

