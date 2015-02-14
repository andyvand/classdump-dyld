/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCatalogColor.h>

@class NSColor;

@interface NSSourceListBackgroundColor : NSCatalogColor {

	NSColor* _activeColor;
	NSColor* _inactiveColor;

}
+(id)activeGradient;
+(id)inactiveGradient;
+(id)activeColor;
+(id)inactiveColor;
-(id)init;
-(void)dealloc;
-(void)set;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)colorUsingColorSpaceName:(id)arg1 ;
-(char)isUniform;
-(void)setFill;
-(void)setStroke;
-(char)_isSourceListColor;
-(id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2 ;
-(id)colorUsingColorSpace:(id)arg1 ;
-(void)drawSwatchInRect:(CGRect)arg1 ;
-(id)initWithCatalogName:(id)arg1 colorName:(id)arg2 genericColor:(id)arg3 ;
-(id)_currentDisplayColor;
-(id)_legacyCurrentDisplayColor;
@end

