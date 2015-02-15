/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBAReaderKit/iBAReaderKit-Structs.h>
@class TSUColor, TSDStroke;

@interface TSWPopoverTheme : NSObject {

	char _popoverHasGradientBackground;
	int _presentationMode;
	TSUColor* _popoverBackgroundColor;
	TSDStroke* _popoverStroke;
	double _popoverCornerRadius;
	TSUColor* _popoverShadowColor;
	double _popoverShadowRadius;
	double _popoverShadowOpacity;
	CGSize _popoverShadowOffset;
	NSEdgeInsets _popoverContentInsets;
	NSEdgeInsets _popoverFadeInsets;
	NSEdgeInsets _popoverFadeSizes;

}

@property (nonatomic,retain) TSUColor * popoverBackgroundColor;              //@synthesize popoverBackgroundColor=_popoverBackgroundColor - In the implementation block
@property (assign,nonatomic) char popoverHasGradientBackground;              //@synthesize popoverHasGradientBackground=_popoverHasGradientBackground - In the implementation block
@property (nonatomic,retain) TSDStroke * popoverStroke;                      //@synthesize popoverStroke=_popoverStroke - In the implementation block
@property (assign,nonatomic) double popoverCornerRadius;                     //@synthesize popoverCornerRadius=_popoverCornerRadius - In the implementation block
@property (assign,nonatomic) NSEdgeInsets popoverContentInsets;              //@synthesize popoverContentInsets=_popoverContentInsets - In the implementation block
@property (assign,nonatomic) NSEdgeInsets popoverFadeInsets;                 //@synthesize popoverFadeInsets=_popoverFadeInsets - In the implementation block
@property (assign,nonatomic) NSEdgeInsets popoverFadeSizes;                  //@synthesize popoverFadeSizes=_popoverFadeSizes - In the implementation block
@property (nonatomic,retain) TSUColor * popoverShadowColor;                  //@synthesize popoverShadowColor=_popoverShadowColor - In the implementation block
@property (assign,nonatomic) CGSize popoverShadowOffset;                     //@synthesize popoverShadowOffset=_popoverShadowOffset - In the implementation block
@property (assign,nonatomic) double popoverShadowRadius;                     //@synthesize popoverShadowRadius=_popoverShadowRadius - In the implementation block
@property (assign,nonatomic) double popoverShadowOpacity;                    //@synthesize popoverShadowOpacity=_popoverShadowOpacity - In the implementation block
@property (assign,nonatomic) int presentationMode;                           //@synthesize presentationMode=_presentationMode - In the implementation block
-(TSDStroke *)popoverStroke;
-(double)popoverShadowRadius;
-(double)popoverShadowOpacity;
-(TSUColor *)popoverBackgroundColor;
-(TSUColor *)popoverShadowColor;
-(void)setPopoverBackgroundColor:(TSUColor *)arg1 ;
-(void)setPopoverHasGradientBackground:(char)arg1 ;
-(void)setPopoverStroke:(TSDStroke *)arg1 ;
-(void)setPopoverCornerRadius:(double)arg1 ;
-(void)setPopoverContentInsets:(NSEdgeInsets)arg1 ;
-(void)setPopoverFadeInsets:(NSEdgeInsets)arg1 ;
-(void)setPopoverFadeSizes:(NSEdgeInsets)arg1 ;
-(void)setPopoverShadowColor:(TSUColor *)arg1 ;
-(void)setPopoverShadowOffset:(CGSize)arg1 ;
-(void)setPopoverShadowRadius:(double)arg1 ;
-(void)setPopoverShadowOpacity:(double)arg1 ;
-(char)popoverHasGradientBackground;
-(double)popoverCornerRadius;
-(NSEdgeInsets)popoverContentInsets;
-(NSEdgeInsets)popoverFadeInsets;
-(NSEdgeInsets)popoverFadeSizes;
-(CGSize)popoverShadowOffset;
-(void)scaleWithFactor:(double)arg1 ;
-(void)setPresentationMode:(int)arg1 ;
-(int)presentationMode;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
