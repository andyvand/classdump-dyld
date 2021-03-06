/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSColor.h>

@class NSGradient;

@interface NSGradientColor : NSColor {

	NSGradient* _gradient;
	CGImageRef _patternImageRef;
	CGRect _destRect;
	CGColorRef _patternColor;

}
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)set;
-(CGColorRef)CGColor;
-(id)colorSpaceName;
-(void)setFill;
-(void)setStroke;
-(id)colorUsingColorSpaceName:(id)arg1 device:(id)arg2 ;
-(void)_updatePatternImage;
-(void)_updatePattern;
-(id)initWithGradient:(id)arg1 ;
@end

