/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/NSAnimationDelegate.h>

@class NSMutableArray, NSLayoutConstraint, SpringAnimationEvaluator, CompletionWindow, NSView, NSWindow, NSString;

@interface CompletionUIPresentationController : NSObject <NSAnimationDelegate> {

	NSMutableArray* _insetConstraints;
	NSLayoutConstraint* _contentWidthConstraint;
	NSLayoutConstraint* _contentHeightConstraint;
	SpringAnimationEvaluator* _presentationSpringAnimationEvaluator;
	char _includeTopContentInset;
	char _includeBottomContentInset;
	char _roundsCorners;
	char _presentsCentered;
	CompletionWindow* _completionWindow;
	NSView* _contentView;
	NSWindow* _parentWindow;
	CGSize _contentSize;
	CGRect _sourceRectInScreenCoordinates;

}

@property (nonatomic,readonly) CompletionWindow * completionWindow;                                //@synthesize completionWindow=_completionWindow - In the implementation block
@property (nonatomic,retain) NSView * contentView;                                                 //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                   //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) char roundsCorners;                                                   //@synthesize roundsCorners=_roundsCorners - In the implementation block
@property (assign,nonatomic) char presentsCentered;                                                //@synthesize presentsCentered=_presentsCentered - In the implementation block
@property (nonatomic,readonly) CGRect sourceRectInScreenCoordinates;                               //@synthesize sourceRectInScreenCoordinates=_sourceRectInScreenCoordinates - In the implementation block
@property (nonatomic,readonly) NSEdgeInsets contentInset; 
@property (nonatomic,readonly) NSWindow * parentWindow;                                            //@synthesize parentWindow=_parentWindow - In the implementation block
@property (getter=isShowingCompletionUI,nonatomic,readonly) char showingCompletionUI; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissCompletionUI;
-(void)setRoundsCorners:(char)arg1 ;
-(id)initWithParentWindow:(id)arg1 ;
-(char)isShowingCompletionUI;
-(void)setContentView:(id)arg1 includeTopContentInset:(char)arg2 includeBottomContentInset:(char)arg3 ;
-(CGRect)sourceRectInScreenCoordinates;
-(void)presentCompletionUIRelativeToRectInScreenCoordinates:(CGRect)arg1 animated:(char)arg2 ;
-(void)_parentWindowWillMove:(id)arg1 ;
-(void)_updateInsetConstraints;
-(void)setContentView:(id)arg1 contentSize:(CGSize)arg2 includeTopContentInset:(char)arg3 includeBottomContentInset:(char)arg4 animated:(char)arg5 ;
-(void)_createCompletionWindowIfNeeded;
-(void)_updateCompletionWindowOrigin;
-(void)_startPresentationAnimation;
-(CGPoint)_completionWindowOriginForFrame:(CGRect)arg1 ;
-(void)_resetConstraints;
-(void)_updateWindowSizeAndPositionDuringAnimation;
-(void)_startContentViewFadeInAnimation;
-(void)_updateConstraints;
-(void)_setContentViewWithoutAnimation:(id)arg1 contentSize:(CGSize)arg2 includeTopContentInset:(char)arg3 includeBottomContentInset:(char)arg4 ;
-(void)_startWindowResizeAnimationWithContentView:(id)arg1 contentSize:(CGSize)arg2 includeTopContentInset:(char)arg3 includeBottomContentInset:(char)arg4 ;
-(CGPoint)_completionWindowOrigin;
-(void)_updateCompletionWindowAppearanceForAnimationProgress:(double)arg1 ;
-(void)_updateCompletionWindowAppearanceForAnimationProgress:(double)arg1 shouldStop:(char*)arg2 ;
-(void)_ensureFinalAnimationState;
-(char)roundsCorners;
-(char)presentsCentered;
-(void)setPresentsCentered:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(NSView *)contentView;
-(void)setContentSize:(CGSize)arg1 ;
-(NSWindow *)parentWindow;
-(void)setContentView:(NSView *)arg1 ;
-(CGSize)contentSize;
-(NSEdgeInsets)contentInset;
-(CompletionWindow *)completionWindow;
-(void)_updateContentSizeConstraints;
@end

