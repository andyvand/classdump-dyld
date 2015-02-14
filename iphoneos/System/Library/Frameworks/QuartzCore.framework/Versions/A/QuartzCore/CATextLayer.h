/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CATextLayer : CALayer {

	CATextLayerPrivateRef _state;

}

@property (copy) id truncationString; 
@property (assign) char allowsFontSubpixelQuantization; 
@property (copy) id string; 
@property (assign) void* font; 
@property (assign) double fontSize; 
@property (assign) CGColorRef foregroundColor; 
@property (getter=isWrapped) char wrapped; 
@property (copy) NSString * truncationMode; 
@property (copy) NSString * alignmentMode; 
+(id)CA_attributes;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(char)needsDisplayForKey:(id)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)_prepareContext:(CGContextRef)arg1 ;
-(CGSize)_preferredSize;
-(char)allowsFontSubpixelQuantization;
-(void)_drawLine:(CTLineRef)arg1 inContext:(CGContextRef)arg2 atPoint:(CGPoint)arg3 ;
-(char)isWrapped;
-(id)_createStringDict;
-(id)truncationString;
-(CTTypesetterRef)_retainTypesetter;
-(NSString *)alignmentMode;
-(NSString *)truncationMode;
-(CTLineRef)_createTruncationToken;
-(void)_applyLinesToFunction:(/*function pointer*/void*)arg1 info:(void*)arg2 ;
-(char)wrapped;
-(void)setTruncationString:(id)arg1 ;
-(void)setAllowsFontSubpixelQuantization:(char)arg1 ;
-(void)setWrapped:(char)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(id)string;
-(void*)font;
-(void)setFont:(void*)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(CGColorRef)foregroundColor;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(void)setTruncationMode:(NSString *)arg1 ;
-(void)setAlignmentMode:(NSString *)arg1 ;
@end

