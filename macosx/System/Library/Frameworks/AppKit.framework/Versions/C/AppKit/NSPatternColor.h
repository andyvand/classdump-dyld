/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSColor.h>

@class NSImage;

@interface NSPatternColor : NSColor {

	NSImage* _patternImage;
	CGColorRef cachedPatternColor;

}
+(id)newWithCoder:(id)arg1 zone:(NSZone*)arg2 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)set;
-(CGColorRef)CGColor;
-(id)colorSpaceName;
-(void)setFill;
-(void)setStroke;
-(id)patternImage;
-(id)initWithImage:(id)arg1 ;
-(id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2 ;
-(id)_initWithCGPatternColor:(CGColorRef)arg1 ;
-(CGColorRef)_createCGColorWithAlpha:(double)arg1 ;
-(Class)classForCoder;
@end

