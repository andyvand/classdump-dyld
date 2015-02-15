/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWLANKit.framework/Versions/A/CoreWLANKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSCharacterSet;

@interface APFormatter : NSFormatter {

	NSCharacterSet* _characterSet;
	NSCharacterSet* _invertedCharacterSet;
	unsigned long long _maxLength;

}
+(id)romanSet;
+(id)ipAddressSet;
+(id)multipleIpAddressesSet;
+(id)phoneNumberSet;
+(id)asciiSet;
+(id)ascii7BitSet;
+(id)hexSet;
+(id)domainNameSet;
+(id)romanFormatter:(int)arg1 ;
+(id)sharedIPFormatter;
+(id)ipFormatter:(int)arg1 ;
+(id)sharedMultipleIPFormatter;
+(id)multipleIPFormatter:(int)arg1 ;
+(id)maxLengthFormatter:(int)arg1 ;
+(id)numberOnlyFormatter:(int)arg1 ;
+(id)nonZeroNumberOnly:(int)arg1 ;
+(id)sharedPhoneNumberFormatter;
+(id)phoneNumberFormatter:(int)arg1 ;
+(id)asciiFormatter:(int)arg1 ;
+(id)ascii7BitFormatter:(int)arg1 ;
+(id)hexFormatter:(int)arg1 ;
+(id)sharedDomainNameFormatter;
+(id)domainNameFormatter:(int)arg1 ;
+(id)pogoPasswordSet;
-(char)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(void)setCharacterSet:(id)arg1 ;
-(id)characterSet;
-(id)initWithCharacterSet:(id)arg1 withMaxLength:(int)arg2 ;
-(void)setInvertedCharacterSet:(id)arg1 ;
-(id)invertedCharacterSet;
-(id)initWithMaxLength:(int)arg1 ;
-(id)initWithStringOfValidCharacters:(id)arg1 withMaxLength:(int)arg2 ;
-(void)dealloc;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
@end
