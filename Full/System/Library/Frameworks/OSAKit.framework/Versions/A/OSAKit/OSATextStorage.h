/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OSAKit/OSAKit-Structs.h>
#import <UIFoundation/NSTextStorage.h>

@class NSMutableAttributedString, NSDate;

@interface OSATextStorage : NSTextStorage {

	NSMutableAttributedString* _contents;
	NSDate* _date;
	char _usesTabs;
	char _wrapsLines;
	char _indentsWrappedLines;
	unsigned long long _tabWidth;
	unsigned long long _indentWidth;

}
+(void)sourceStylesChanged;
+(id)defaultPlainTextFont;
+(void)initialize;
-(void)fixAttributesInRange:(NSRange)arg1 ;
-(id)initWithOwnedMutableAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 withUndoManager:(id)arg3 ;
-(unsigned long long)indentWidth;
-(unsigned long long)tabWidth;
-(id)_firstLayoutManager;
-(char)wrapsLines;
-(char)indentsWrappedLines;
-(void)fixWrappedLineIndentsInRange:(NSRange)arg1 ;
-(char)usesTabs;
-(void)fixTabStopsInRange:(NSRange)arg1 ;
-(void)setUsesTabs:(char)arg1 ;
-(void)setWrapsLines:(char)arg1 ;
-(void)setIndentsWrappedLines:(char)arg1 ;
-(void)setTabWidth:(unsigned long long)arg1 ;
-(void)setIndentWidth:(unsigned long long)arg1 ;
-(NSRange)findString:(id)arg1 previousFindRange:(NSRange)arg2 limitRange:(NSRange)arg3 options:(unsigned long long)arg4 matchStyle:(int)arg5 wrap:(char)arg6 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 withUndoManager:(id)arg3 ;
-(void)_fixAttributesInRange:(NSRange)arg1 forceExtended:(char)arg2 ;
-(id)init;
-(void)setContents:(id)arg1 ;
-(void)dealloc;
-(id)contents;
-(unsigned long long)length;
-(id)initWithString:(id)arg1 ;
-(id)string;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(void)insertValue:(id)arg1 atIndex:(unsigned long long)arg2 inPropertyWithKey:(id)arg3 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 fromPropertyWithKey:(id)arg2 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2 withValue:(id)arg3 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(id)date;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(id)undoManager;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)setAttributedString:(id)arg1 ;
-(void)setDate:(id)arg1 ;
-(void)appendAttributedString:(id)arg1 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(id)initWithAttributedString:(id)arg1 ;
@end

