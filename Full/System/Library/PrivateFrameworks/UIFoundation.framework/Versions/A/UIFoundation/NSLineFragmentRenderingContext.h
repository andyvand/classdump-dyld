/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class CUICatalog, CUIStyleEffectConfiguration, NSGraphicsContext;

@interface NSLineFragmentRenderingContext : NSObject {

	void* _runs;
	long long _numRuns;
	unsigned short* _glyphs;
	CGSize* _advancements;
	double _leftSideDelta;
	double _lineWidth;
	double _leftControlWidth;
	double _rightControlWidth;
	double _elasticWidth;
	CGRect _imageBounds;
	struct {
		unsigned _isRTL : 1;
		unsigned _vAdvance : 1;
		unsigned _flipped : 1;
		unsigned _usesSimpleTextEffects : 1;
		unsigned _reserved : 28;
	}  _flags;
	CUICatalog* _catalog;
	CUIStyleEffectConfiguration* _styleEffects;
	NSGraphicsContext* _graphicsContext;

}

@property (retain) CUICatalog * cuiCatalog;                                                                          //@synthesize catalog=_catalog - In the implementation block
@property (retain) CUIStyleEffectConfiguration * cuiStyleEffects;                                                    //@synthesize styleEffects=_styleEffects - In the implementation block
@property (setter=_setUsesSimpleTextEffects:,getter=_usesSimpleTextEffects) char usesSimpleTextEffects; 
@property (retain) NSGraphicsContext * graphicsContext;                                                              //@synthesize graphicsContext=_graphicsContext - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(oneway void)release;
-(void)finalize;
-(void)dealloc;
-(void)setCuiCatalog:(CUICatalog *)arg1 ;
-(void)setCuiStyleEffects:(CUIStyleEffectConfiguration *)arg1 ;
-(void)setGraphicsContext:(NSGraphicsContext *)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(NSGraphicsContext *)graphicsContext;
-(CUICatalog *)cuiCatalog;
-(CUIStyleEffectConfiguration *)cuiStyleEffects;
-(double)lineFragmentWidth;
-(double)elasticWidth;
-(char)isRTL;
-(CGSize)sizeWithBehavior:(long long)arg1 usesFontLeading:(char)arg2 baselineDelta:(double*)arg3 ;
-(void)getMaximumAscender:(double*)arg1 minimumDescender:(double*)arg2 ;
-(void)_setUsesSimpleTextEffects:(char)arg1 ;
-(void)drawAtPoint:(CGPoint)arg1 inContext:(CGContextRef)arg2 ;
-(char)_usesSimpleTextEffects;
-(id)initWithRuns:(CFArrayRef)arg1 glyphOrigin:(double)arg2 lineFragmentWidth:(double)arg3 elasticWidth:(double)arg4 usesScreenFonts:(char)arg5 isRTL:(char)arg6 ;
-(CGRect)imageBounds;
@end

