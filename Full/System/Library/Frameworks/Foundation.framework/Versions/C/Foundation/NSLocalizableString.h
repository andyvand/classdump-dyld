/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface NSLocalizableString : NSString {

	NSString* _stringsFileKey;
	NSString* _developmentLanguageString;

}

@property (copy,readonly) NSString * stringsFileKey; 
@property (copy,readonly) NSString * developmentLanguageString; 
+(id)localizableStringWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2 ;
-(id)initWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2 ;
-(NSString *)stringsFileKey;
-(void)setStringsFileKey:(NSString *)arg1 ;
-(NSString *)developmentLanguageString;
-(void)setDevelopmentLanguageString:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(id)awakeAfterUsingCoder:(id)arg1 ;
@end

