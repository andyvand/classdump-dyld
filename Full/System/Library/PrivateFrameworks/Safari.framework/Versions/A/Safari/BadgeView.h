/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>

@class NSString;

@interface BadgeView : NSView {

	NSString* _text;
	double _maxWidth;

}

@property (nonatomic,copy) NSString * text;                //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) double maxWidth;              //@synthesize maxWidth=_maxWidth - In the implementation block
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)sizeToFit;
-(char)canSmoothFontsInLayer;
-(NSString *)text;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
@end

