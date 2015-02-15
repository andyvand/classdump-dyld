/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSCopying.h>
#import <UIFoundation/NSSecureCoding.h>

@class NSString;

@interface NSGlyphInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _baseString;

}

@property (copy,readonly) NSString * glyphName; 
@property (readonly) unsigned long long characterIdentifier; 
@property (readonly) unsigned long long characterCollection; 
+(void)initialize;
+(char)supportsSecureCoding;
+(id)glyphInfoWithGlyph:(unsigned)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
+(id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3 ;
+(id)glyphInfoWithGlyphName:(id)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_baseString;
-(Class)classForKeyedArchiver;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(NSString *)glyphName;
-(unsigned long long)characterCollection;
-(unsigned long long)characterIdentifier;
-(id)initWithBaseString:(id)arg1 ;
@end

