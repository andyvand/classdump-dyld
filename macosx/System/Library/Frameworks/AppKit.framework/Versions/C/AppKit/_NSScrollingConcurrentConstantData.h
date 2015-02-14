/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <CoreFoundation/NSData.h>

@protocol NSScrollViewDelegate;
@class NSWindow, NSScrollView, NSClipView, CALayer, NSView, NSString, NSArray;

@interface _NSScrollingConcurrentConstantData : NSData {

	NSWindow* window;
	NSScrollView* scrollView;
	id<NSScrollViewDelegate> scrollViewDelegate;
	NSClipView* clipView;
	CALayer* clipLayer;
	NSClipView* headerClipView;
	CALayer* headerClipLayer;
	NSView* documentView;
	CALayer* documentLayer;
	NSString* documentPerfCategory;
	CGSize pointsPerPixel;
	CGAffineTransform affineTransformToClipView;
	char isClipViewFlipped;
	char usePredominantAxisScrolling;
	char allowsHorizontalStretching;
	char allowsVerticalStretching;
	char isDocumentLayerInclusive;
	char doesDelegateRespondToSynchLayers;
	unsigned long long scrollingModeHorizontal;
	unsigned long long scrollingModeVertical;
	NSArray* synchronizedSiblingsHorizontal;
	NSArray* synchronizedSiblingsVertical;
	NSArray* pageAlignmentsHorizontal;
	NSArray* pageAlignmentsVertical;
	CGRect initialDocumentFrame;
	CGPoint initialOriginConstraintLoc;
	CGSize initialStretchAmount;
	CGPoint initialClipOrigin;
	CGSize initialClipSize;

}

@property (nonatomic,retain) NSWindow * window; 
@property (nonatomic,retain) NSScrollView * scrollView; 
@property (nonatomic,retain) id<NSScrollViewDelegate> scrollViewDelegate; 
@property (nonatomic,retain) NSClipView * clipView; 
@property (nonatomic,retain) CALayer * clipLayer; 
@property (nonatomic,retain) NSClipView * headerClipView; 
@property (nonatomic,retain) CALayer * headerClipLayer; 
@property (nonatomic,retain) NSView * documentView; 
@property (nonatomic,retain) CALayer * documentLayer; 
@property (nonatomic,retain) NSString * documentPerfCategory; 
@property (assign,nonatomic) CGSize pointsPerPixel; 
@property (assign,nonatomic) CGAffineTransform affineTransformToClipView; 
@property (assign,nonatomic) char isClipViewFlipped; 
@property (assign,nonatomic) char usePredominantAxisScrolling; 
@property (assign,nonatomic) char allowsHorizontalStretching; 
@property (assign,nonatomic) char allowsVerticalStretching; 
@property (assign,nonatomic) char isDocumentLayerInclusive; 
@property (assign,nonatomic) char doesDelegateRespondToSynchLayers; 
@property (assign,nonatomic) unsigned long long scrollingModeHorizontal; 
@property (assign,nonatomic) unsigned long long scrollingModeVertical; 
@property (nonatomic,retain) NSArray * synchronizedSiblingsHorizontal; 
@property (nonatomic,retain) NSArray * synchronizedSiblingsVertical; 
@property (nonatomic,retain) NSArray * pageAlignmentsHorizontal; 
@property (nonatomic,retain) NSArray * pageAlignmentsVertical; 
@property (assign,nonatomic) CGRect initialDocumentFrame; 
@property (assign,nonatomic) CGPoint initialOriginConstraintLoc; 
@property (assign,nonatomic) CGSize initialStretchAmount; 
@property (assign,nonatomic) CGPoint initialClipOrigin; 
@property (assign,nonatomic) CGSize initialClipSize; 
+(id)constantDataWithScrollView:(id)arg1 ;
-(void)dealloc;
-(NSWindow *)window;
-(NSView *)documentView;
-(void)setDocumentView:(NSView *)arg1 ;
-(CGAffineTransform)affineTransformToClipView;
-(char)isClipViewFlipped;
-(CGPoint)initialOriginConstraintLoc;
-(char)allowsHorizontalStretching;
-(char)allowsVerticalStretching;
-(CGSize)pointsPerPixel;
-(void)setWindow:(NSWindow *)arg1 ;
-(NSScrollView *)scrollView;
-(NSClipView *)clipView;
-(NSArray *)pageAlignmentsVertical;
-(NSArray *)pageAlignmentsHorizontal;
-(NSString *)documentPerfCategory;
-(unsigned long long)scrollingModeHorizontal;
-(unsigned long long)scrollingModeVertical;
-(char)usePredominantAxisScrolling;
-(CGPoint)initialClipOrigin;
-(void)setScrollView:(NSScrollView *)arg1 ;
-(void)setClipView:(NSClipView *)arg1 ;
-(void)setClipLayer:(CALayer *)arg1 ;
-(void)setHeaderClipView:(NSClipView *)arg1 ;
-(NSClipView *)headerClipView;
-(void)setHeaderClipLayer:(CALayer *)arg1 ;
-(void)setDocumentLayer:(CALayer *)arg1 ;
-(void)setPointsPerPixel:(CGSize)arg1 ;
-(void)setAffineTransformToClipView:(CGAffineTransform)arg1 ;
-(void)setIsClipViewFlipped:(char)arg1 ;
-(void)setUsePredominantAxisScrolling:(char)arg1 ;
-(void)setAllowsHorizontalStretching:(char)arg1 ;
-(void)setAllowsVerticalStretching:(char)arg1 ;
-(void)setScrollingModeHorizontal:(unsigned long long)arg1 ;
-(void)setScrollingModeVertical:(unsigned long long)arg1 ;
-(void)setPageAlignmentsHorizontal:(NSArray *)arg1 ;
-(void)setPageAlignmentsVertical:(NSArray *)arg1 ;
-(void)setIsDocumentLayerInclusive:(char)arg1 ;
-(void)setSynchronizedSiblingsHorizontal:(NSArray *)arg1 ;
-(void)setSynchronizedSiblingsVertical:(NSArray *)arg1 ;
-(void)setInitialDocumentFrame:(CGRect)arg1 ;
-(void)setInitialOriginConstraintLoc:(CGPoint)arg1 ;
-(void)setInitialStretchAmount:(CGSize)arg1 ;
-(void)setInitialClipOrigin:(CGPoint)arg1 ;
-(void)setInitialClipSize:(CGSize)arg1 ;
-(void)setScrollViewDelegate:(id<NSScrollViewDelegate>)arg1 ;
-(void)setDoesDelegateRespondToSynchLayers:(char)arg1 ;
-(void)setDocumentPerfCategory:(NSString *)arg1 ;
-(id<NSScrollViewDelegate>)scrollViewDelegate;
-(CALayer *)clipLayer;
-(CALayer *)headerClipLayer;
-(CALayer *)documentLayer;
-(char)isDocumentLayerInclusive;
-(char)doesDelegateRespondToSynchLayers;
-(NSArray *)synchronizedSiblingsHorizontal;
-(NSArray *)synchronizedSiblingsVertical;
-(CGRect)initialDocumentFrame;
-(CGSize)initialStretchAmount;
-(CGSize)initialClipSize;
@end

