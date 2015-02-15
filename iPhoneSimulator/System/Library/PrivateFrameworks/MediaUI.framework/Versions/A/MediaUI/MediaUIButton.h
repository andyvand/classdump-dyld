/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaUI.framework/Versions/A/MediaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaUI/MediaUI-Structs.h>
#import <MediaUI/MediaUIControl.h>

@class NSImage, NSString;

@interface MediaUIButton : MediaUIControl {

	NSImage* _image;
	NSString* _title;
	NSString* _keyEquivalent;
	unsigned long long _keyEquivalentModifierMask;
	char _bordered;
	long long _state;

}

@property (nonatomic,retain) NSImage * image; 
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isBordered,nonatomic) char bordered; 
@property (nonatomic,copy) NSString * keyEquivalent;                                    //@synthesize keyEquivalent=_keyEquivalent - In the implementation block
@property (assign,nonatomic) unsigned long long keyEquivalentModifierMask;              //@synthesize keyEquivalentModifierMask=_keyEquivalentModifierMask - In the implementation block
+(void)initialize;
-(double)MediaUI_slice;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(void)setBordered:(char)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(char)isBordered;
-(void)setKeyEquivalent:(NSString *)arg1 ;
-(void)setKeyEquivalentModifierMask:(unsigned long long)arg1 ;
-(NSString *)title;
-(void)performClick:(id)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(NSString *)keyEquivalent;
-(unsigned long long)keyEquivalentModifierMask;
-(char)isFlipped;
-(NSEdgeInsets)alignmentRectInsets;
-(void)mouseDown:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(id)objectValue;
-(void)setObjectValue:(id)arg1 ;
-(void)renewGState;
@end

