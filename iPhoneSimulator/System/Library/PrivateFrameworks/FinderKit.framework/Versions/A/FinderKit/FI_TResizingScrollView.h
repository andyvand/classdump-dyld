/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TScrollView.h>

@interface FI_TResizingScrollView : FI_TScrollView {

	CGSize _minSize;
	CGSize _maxSize;
	CGSize _documentViewSizeCache;
	BOOL _resizesVertically;
	BOOL _resizesHorizontally;
	double _scrollViewPadding;
	TNotificationCenterObserver* _documentViewFrameObserver;

}

@property (assign,nonatomic) CGSize minSize;                        //@synthesize minSize=_minSize - In the implementation block
@property (assign,nonatomic) CGSize maxSize;                        //@synthesize maxSize=_maxSize - In the implementation block
@property (assign,nonatomic) BOOL resizesVertically;                //@synthesize resizesVertically=_resizesVertically - In the implementation block
@property (assign,nonatomic) BOOL resizesHorizontally;              //@synthesize resizesHorizontally=_resizesHorizontally - In the implementation block
@property (readonly) double scrollViewPadding;                      //@synthesize scrollViewPadding=_scrollViewPadding - In the implementation block
-(void)initCommon;
-(BOOL)resizesVertically;
-(BOOL)resizesHorizontally;
-(void)stopObservingDocumentView;
-(void)startObservingDocumentView;
-(void)resizeToFitDocumentView;
-(double)scrollViewPadding;
-(void)setResizesVertically:(BOOL)arg1 ;
-(void)setResizesHorizontally:(BOOL)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setDocumentView:(id)arg1 ;
-(CGSize)maxSize;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)setBoundsSize:(CGSize)arg1 ;
-(CGSize)minSize;
@end

