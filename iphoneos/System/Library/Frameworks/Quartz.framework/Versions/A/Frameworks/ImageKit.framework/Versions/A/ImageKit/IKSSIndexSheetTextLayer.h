/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString, NSDictionary;

@interface IKSSIndexSheetTextLayer : CALayer {

	NSString* _text;
	NSDictionary* _attributes;
	CGSize _textSize;
	CGSize _textMargins;
	char _animates;

}

@property (retain) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (assign) CGSize textMargins;                     //@synthesize textMargins=_textMargins - In the implementation block
@property (readonly) CGSize textSize; 
@property (assign) char animates;                          //@synthesize animates=_animates - In the implementation block
-(void)setText:(NSString *)arg1 ;
-(CGSize)textSize;
-(void)_updateLayerSize;
-(void)_updateTextSize;
-(void)setTextMargins:(CGSize)arg1 ;
-(CGSize)textMargins;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(char)containsPoint:(CGPoint)arg1 ;
-(NSString *)text;
-(NSDictionary *)attributes;
-(void)setAnimates:(char)arg1 ;
-(char)animates;
-(void)setAttributes:(NSDictionary *)arg1 ;
@end

