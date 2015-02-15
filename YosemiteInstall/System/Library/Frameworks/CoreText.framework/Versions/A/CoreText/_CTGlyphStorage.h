/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreText.framework/Versions/A/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreText/CoreText-Structs.h>
@interface _CTGlyphStorage : NSObject {

	long long _count;
	const unsigned short* _glyphs;
	const CGSize* _advances;
	const unsigned* _props;
	const long long* _stringIndices;

}
-(void*)refCon;
-(id)initWithCount:(long long)arg1 ;
-(void)setProps:(unsigned)arg1 atIndex:(long long)arg2 ;
-(void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2 ;
-(void)setStringIndex:(long long)arg1 atIndex:(long long)arg2 ;
-(long long)attachmentCountAtIndex:(long long)arg1 ;
-(void)popGlyphAtIndex:(long long)arg1 ;
-(void)pushGlyphAtIndex:(long long)arg1 ;
-(void)initGlyphStackWithCapacity:(long long)arg1 ;
-(void)puntStringIndicesInRange:(SCD_Struct_CT0)arg1 by:(long long)arg2 ;
-(id)copyWithRange:(SCD_Struct_CT0)arg1 ;
-(void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2 ;
-(void)setAdvance:(CGSize)arg1 atIndex:(long long)arg2 ;
-(void)insertGlyphsAtRange:(SCD_Struct_CT0)arg1 ;
-(void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2 ;
-(void)moveGlyphsFromRange:(SCD_Struct_CT0)arg1 toIndex:(long long)arg2 ;
-(char)isEqual:(id)arg1 ;
-(void)disposeGlyphStack;
-(void)sync;
@end
