/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSATSTypesetter;

@interface NSATSLineFragment : NSObject {

	void* _line;
	NSATSTypesetter* _typesetter;
	NSRange _glyphRange;
	NSRange _characterRange;
	double _minPosition;
	double _maxPosition;
	long long _elasticCharIndex;
	double _elasticRangeWidth;
	unsigned _hyphenGlyph;
	double _hyphenGlyphWidth;
	struct {
		unsigned _directionState : 2;
		unsigned _drawsOutside : 1;
		unsigned _isLineArray : 1;
		unsigned _reserved : 28;
	}  _flags;

}
-(void)finalize;
-(void)dealloc;
-(void)_invalidate;
-(NSRange)characterRange;
-(NSRange)glyphRange;
-(id)initWithTypesetter:(id)arg1 ;
-(void)layoutForStartingGlyphAtIndex:(unsigned long long)arg1 characterIndex:(unsigned long long)arg2 minPosition:(double)arg3 maxPosition:(double)arg4 lineFragmentRect:(CGRect)arg5 ;
-(void)getTypographicLineHeight:(double*)arg1 baselineOffset:(double*)arg2 leading:(double*)arg3 ;
-(void)justifyWithFactor:(double)arg1 ;
-(double)lineWidthForType:(int)arg1 ;
-(char)hasElasticRange;
-(void)saveMorphedGlyphs:(NSRange*)arg1 ;
-(void)saveWithGlyphOrigin:(double)arg1 ;
-(id)_copyRenderingContextWithGlyphOrigin:(double)arg1 ;
-(void)_flushCachedObjects;
-(unsigned long long)resolvedLineBreakMode:(char)arg1 ;
-(long long)_charIndexToBreakLineByWordWrappingAtIndex:(long long)arg1 lineFragmentWidth:(double)arg2 hyphenate:(char*)arg3 ;
@end

