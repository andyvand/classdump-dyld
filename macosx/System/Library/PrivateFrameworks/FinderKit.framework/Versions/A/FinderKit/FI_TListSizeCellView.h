/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TListCellView.h>
#import <FinderKit/TViewAnimationDelegate.h>

@class NSView, FI_TInlineProgressBaseHostLayer, NSString;

@interface FI_TListSizeCellView : FI_TListCellView <TViewAnimationDelegate> {

	NSView* _inlineProgressView;
	FI_TInlineProgressBaseHostLayer* _inlineProgressLayer;

}

@property (nonatomic,retain) NSView * inlineProgressView;                                        //@synthesize inlineProgressView=_inlineProgressView - In the implementation block
@property (nonatomic,retain) FI_TInlineProgressBaseHostLayer * inlineProgressLayer;              //@synthesize inlineProgressLayer=_inlineProgressLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInlineProgressLayer:(FI_TInlineProgressBaseHostLayer *)arg1 ;
-(void)setInlineProgressView:(NSView *)arg1 ;
-(CGRect)progressFrameForCellBounds:(CGRect)arg1 ;
-(NSView *)inlineProgressView;
-(FI_TInlineProgressBaseHostLayer *)inlineProgressLayer;
-(void)tearDownInlineProgress;
-(void)updateInlineProgressStateForNode:(const TFENode*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)layout;
-(void)setBackgroundStyle:(long long)arg1 ;
-(char)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
@end

