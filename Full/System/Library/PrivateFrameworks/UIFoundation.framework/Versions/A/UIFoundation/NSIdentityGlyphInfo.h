/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/NSGlyphInfo.h>

@class NSFont;

@interface NSIdentityGlyphInfo : NSGlyphInfo {

	NSFont* _font;
	unsigned _glyph;

}
+(void)initialize;
+(id)glyphInfoWithGlyph:(unsigned)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
-(id)_font;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(unsigned)_glyph;
-(id)initWithGlyph:(unsigned)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
@end
