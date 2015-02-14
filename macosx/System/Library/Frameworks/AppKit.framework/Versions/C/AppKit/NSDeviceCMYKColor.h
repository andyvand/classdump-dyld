/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSColor.h>

@interface NSDeviceCMYKColor : NSColor {

	double cyanComponent;
	double magentaComponent;
	double yellowComponent;
	double blackComponent;
	double alphaComponent;
	CGColorRef _cachedCGColor;

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
-(id)colorSpace;
-(void)getCyan:(double*)arg1 magenta:(double*)arg2 yellow:(double*)arg3 black:(double*)arg4 alpha:(double*)arg5 ;
-(char)isUniform;
-(double)alphaComponent;
-(void)setFill;
-(void)setStroke;
-(void)getComponents:(double*)arg1 ;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)initWithCyan:(double)arg1 magenta:(double)arg2 yellow:(double)arg3 black:(double)arg4 alpha:(double)arg5 ;
-(id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2 ;
-(id)colorUsingColorSpace:(id)arg1 ;
-(void)drawSwatchInRect:(CGRect)arg1 ;
-(double)cyanComponent;
-(double)magentaComponent;
-(double)yellowComponent;
-(double)blackComponent;
-(long long)numberOfComponents;
-(CGColorRef)_createCGColorWithAlpha:(double)arg1 ;
-(Class)classForCoder;
@end

