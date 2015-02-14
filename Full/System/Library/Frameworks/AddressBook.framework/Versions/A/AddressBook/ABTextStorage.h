/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <UIFoundation/NSTextStorage.h>
#import <AddressBook/NSCopying.h>
#import <AddressBook/NSMutableCopying.h>

@class NSMutableAttributedString;

@interface ABTextStorage : NSTextStorage <NSCopying, NSMutableCopying> {

	NSMutableAttributedString* _cm_string;
	char _customAttributeFixing;

}
+(void)invalidateParagraphStyles;
+(unsigned long long)maxLabelStringWidth;
+(id)secondLineParagraphStyle;
+(id)noteFirstLineParagraphStyle;
+(id)noteSecondLineParagraphStyle;
+(id)firstLineParagraphStyle;
-(void)_setAttributedString:(id)arg1 ;
-(void)fixAttributesInRange:(NSRange)arg1 ;
-(char)enableCustomAttributeFixing;
-(void)fixNotesRulersInRange:(NSRange)arg1 ;
-(void)fixAddressRulersInRange:(NSRange)arg1 ;
-(NSRange)findNextOccuranceOfAttributeNamed:(id)arg1 startingRange:(NSRange)arg2 ;
-(NSRange)findPreviousOccuranceOfAttributeNamed:(id)arg1 startingRange:(NSRange)arg2 ;
-(NSRange)findAttributeNamed:(id)arg1 value:(id)arg2 ;
-(char)fixesAttributesLazily;
-(void)setEnableCustomAttributeFixing:(char)arg1 ;
-(NSRange)findAttachement:(id)arg1 ;
-(NSRange)findPopupForField:(id)arg1 excludingRange:(NSRange)arg2 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

