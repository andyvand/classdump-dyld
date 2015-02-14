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

@class NSString, NSDictionary;

@interface NSOrthography : NSObject <NSCopying, NSCoding>

@property (copy,readonly) NSString * dominantScript; 
@property (copy,readonly) NSDictionary * languageMap; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
-(id)initWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
-(unsigned)orthographyFlags;
-(NSDictionary *)languageMap;
-(id)allScripts;
-(id)languagesForScript:(id)arg1 ;
-(id)allLanguages;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)dominantLanguage;
-(id)dominantLanguageForScript:(id)arg1 ;
-(NSString *)dominantScript;
@end

