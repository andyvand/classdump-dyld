/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSUI/AOSUI-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSString;

@interface MMPhoneNumberFormatter : NSFormatter {

	NSString* _countryCode;

}

@property (copy) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
+(id)defaultCountryCode;
+(id)availableCountryCodes;
+(id)countryCodesFromPlist;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(char)isPhoneNumberValid:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 withObfuscations:(char)arg2 obfuscatedLength:(long long)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(char)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
@end

