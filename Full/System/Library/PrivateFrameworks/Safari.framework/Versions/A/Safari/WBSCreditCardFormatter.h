/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Foundation/NSFormatter.h>

@interface WBSCreditCardFormatter : NSFormatter {

	char _showLastFourDigits;
	char _showCreditCardNumber;
	char _allowsUnknownCardTypes;

}

@property (assign,nonatomic) char showLastFourDigits;                  //@synthesize showLastFourDigits=_showLastFourDigits - In the implementation block
@property (assign,nonatomic) char showCreditCardNumber;                //@synthesize showCreditCardNumber=_showCreditCardNumber - In the implementation block
@property (assign,nonatomic) char allowsUnknownCardTypes;              //@synthesize allowsUnknownCardTypes=_allowsUnknownCardTypes - In the implementation block
-(void)setShowCreditCardNumber:(char)arg1 ;
-(void)setShowLastFourDigits:(char)arg1 ;
-(void)setAllowsUnknownCardTypes:(char)arg1 ;
-(char)showCreditCardNumber;
-(id)_formattedStringForNormalizedNumber:(id)arg1 showCreditCardNumber:(char)arg2 ;
-(char)allowsUnknownCardTypes;
-(NSRange)_normalizedSelectionRangeForFormattedCreditCardNumber:(id)arg1 withOriginalSelectionRange:(NSRange)arg2 ;
-(NSRange)_selectionRangeInFormattedCreditCardNumber:(id)arg1 forNormalizedSelectionRange:(NSRange)arg2 inNormalizedCreditCardNumber:(id)arg3 ;
-(char)showLastFourDigits;
-(char)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)stringForObjectValue:(id)arg1 ;
-(char)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
@end

