/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@interface __NSCFAttributedString : NSMutableAttributedString
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)finalize;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)length;
-(id)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(char)isEqualToAttributedString:(id)arg1 ;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)setAttributedString:(id)arg1 ;
-(Class)classForCoder;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)appendAttributedString:(id)arg1 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

