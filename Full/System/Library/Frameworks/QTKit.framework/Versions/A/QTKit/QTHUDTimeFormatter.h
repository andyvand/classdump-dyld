/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:20 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <Foundation/NSFormatter.h>

@interface QTHUDTimeFormatter : NSFormatter {

	QTHUDTimeFormatterAuxStorage* _aux;

}
+(void)initialize;
-(id)decimalSeparator;
-(id)positivePrefix;
-(id)positiveSuffix;
-(id)negativePrefix;
-(id)negativeSuffix;
-(void)setDecimalSeparator:(id)arg1 ;
-(void)setPositivePrefix:(id)arg1 ;
-(void)setPositiveSuffix:(id)arg1 ;
-(void)setNegativePrefix:(id)arg1 ;
-(void)setNegativeSuffix:(id)arg1 ;
-(unsigned long long)minimumIntegerDigits;
-(unsigned long long)maximumIntegerDigits;
-(void)setMaximumIntegerDigits:(unsigned long long)arg1 ;
-(unsigned long long)minimumFractionDigits;
-(unsigned long long)maximumFractionDigits;
-(id)stringFromTimeInterval:(double)arg1 ;
-(id)stringFromCMTime:(SCD_Struct_QT36)arg1 ;
-(id)stringFromQTTime:(SCD_Struct_QT12)arg1 ;
-(QTTimeFormatterRef)_QTTimeFormatter;
-(SCD_Struct_QT36)CMTimeFromString:(id)arg1 ;
-(SCD_Struct_QT12)QTTimeFromString:(id)arg1 ;
-(double)timeIntervalFromString:(id)arg1 ;
-(char)showsSignInAllComponents;
-(void)setShowsSignInAllComponents:(char)arg1 ;
-(id)componentSeparator;
-(void)setComponentSeparator:(id)arg1 ;
-(unsigned long long)componentOrder;
-(void)setComponentOrder:(unsigned long long)arg1 ;
-(char)usesDigitGroupingSeparator;
-(void)setUsesDigitGroupingSeparator:(char)arg1 ;
-(id)digitGroupingSeparator;
-(void)setDigitGroupingSeparator:(id)arg1 ;
-(id)requiredComponents;
-(void)setRequiredComponents:(id)arg1 ;
-(id)optionalComponents;
-(void)setOptionalComponents:(id)arg1 ;
-(id)nonfiniteSymbol;
-(void)setNonfiniteSymbol:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)minimum;
-(id)maximum;
-(void)setMinimum:(id)arg1 ;
-(void)setMaximum:(id)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)editingStringForObjectValue:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(char)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(void)setLocale:(id)arg1 ;
-(id)locale;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(void)setMinimumFractionDigits:(unsigned long long)arg1 ;
-(void)setMinimumIntegerDigits:(unsigned long long)arg1 ;
@end

