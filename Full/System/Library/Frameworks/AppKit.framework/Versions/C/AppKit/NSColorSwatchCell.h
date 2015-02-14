/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSColor;

@interface NSColorSwatchCell : NSTextFieldCell {

	NSColor* _swatchColor;
	CGSize _swatchSize;

}

@property (retain) NSColor * swatchColor;              //@synthesize swatchColor=_swatchColor - In the implementation block
@property (assign) CGSize swatchSize;                  //@synthesize swatchSize=_swatchSize - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)editWithFrame:(CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5 ;
-(void)selectWithFrame:(CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6 ;
-(void)setSwatchColor:(NSColor *)arg1 ;
-(void)setSwatchSize:(CGSize)arg1 ;
-(NSColor *)swatchColor;
-(CGSize)swatchSize;
-(CGRect)_swatchRectForCellFrame:(CGRect)arg1 ;
@end

