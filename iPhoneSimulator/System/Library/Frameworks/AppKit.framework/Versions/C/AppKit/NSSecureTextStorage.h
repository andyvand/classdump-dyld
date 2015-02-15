/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:27 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <UIFoundation/NSTextStorage.h>

@class NSFont;

@interface NSSecureTextStorage : NSTextStorage {

	CFAttributedStringRef _storage;
	NSFont* _font;
	long long _level;
	unsigned short _bulletCharacter;

}
+(void)initialize;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)string;
-(id)font;
-(void)setFont:(id)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(NSRange)doubleClickAtIndex:(unsigned long long)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(void)beginSecureMode;
-(void)endSecureMode;
-(void)setBulletCharacter:(unsigned short)arg1 ;
-(unsigned short)bullferCharacter;
-(unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(NSRange)arg2 ;
-(unsigned long long)lineBreakByHyphenatingBeforeIndex:(unsigned long long)arg1 withinRange:(NSRange)arg2 ;
-(unsigned long long)nextWordFromIndex:(unsigned long long)arg1 forward:(char)arg2 ;
@end
