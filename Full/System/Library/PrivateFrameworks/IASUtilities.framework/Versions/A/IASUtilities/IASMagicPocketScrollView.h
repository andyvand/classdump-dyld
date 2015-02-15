/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IASUtilities.framework/Versions/A/IASUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IASUtilities/IASUtilities-Structs.h>
#import <AppKit/NSScrollView.h>

@class IASMagicPocketView;

@interface IASMagicPocketScrollView : NSScrollView {

	char showsPocketOnTop;
	char showsPocketOnBottom;
	char showsPocketOnLeft;
	char showsPocketOnRight;
	char pocketsAreDynamic;
	char moreContentLeft;
	char moreContentRight;
	char moreContentUp;
	char moreContentDown;
	char handleBoundsOrFrameChangePending;
	IASMagicPocketView* topPocketView;
	IASMagicPocketView* bottomPocketView;
	IASMagicPocketView* leftPocketView;
	IASMagicPocketView* rightPocketView;
	id contentViewBoundsChangeNotificationToken;
	id documentViewFrameChangeNotificationToken;

}

@property (assign,nonatomic) char showsPocketOnBottom; 
@property (assign,nonatomic) char showsPocketOnTop; 
@property (assign,nonatomic) char showsPocketOnLeft; 
@property (assign,nonatomic) char showsPocketOnRight; 
@property (assign,nonatomic) char pocketsAreDynamic; 
@property (retain) IASMagicPocketView * topPocketView; 
@property (retain) IASMagicPocketView * bottomPocketView; 
@property (retain) IASMagicPocketView * leftPocketView; 
@property (retain) IASMagicPocketView * rightPocketView; 
@property (assign) char moreContentLeft; 
@property (assign) char moreContentRight; 
@property (assign) char moreContentUp; 
@property (assign) char moreContentDown; 
@property (retain) id contentViewBoundsChangeNotificationToken; 
@property (retain) id documentViewFrameChangeNotificationToken; 
@property (assign) char handleBoundsOrFrameChangePending; 
-(void)commonInit;
-(void)removeContentObserversIfNeeded;
-(void)setTopPocketView:(IASMagicPocketView *)arg1 ;
-(void)setBottomPocketView:(IASMagicPocketView *)arg1 ;
-(void)setLeftPocketView:(IASMagicPocketView *)arg1 ;
-(void)setRightPocketView:(IASMagicPocketView *)arg1 ;
-(IASMagicPocketView *)topPocketView;
-(IASMagicPocketView *)bottomPocketView;
-(IASMagicPocketView *)leftPocketView;
-(IASMagicPocketView *)rightPocketView;
-(void)setShowsPocketOnBottom:(char)arg1 ;
-(void)setShowsPocketOnTop:(char)arg1 ;
-(void)setShowsPocketOnLeft:(char)arg1 ;
-(void)setShowsPocketOnRight:(char)arg1 ;
-(void)setPocketsAreDynamic:(char)arg1 ;
-(id)contentViewBoundsChangeNotificationToken;
-(void)setContentViewBoundsChangeNotificationToken:(id)arg1 ;
-(id)documentViewFrameChangeNotificationToken;
-(void)setDocumentViewFrameChangeNotificationToken:(id)arg1 ;
-(void)_installNotificationObserversIfNecessary;
-(char)pocketsAreDynamic;
-(void)_handleBoundsOrFrameChanged;
-(char)handleBoundsOrFrameChangePending;
-(void)setHandleBoundsOrFrameChangePending:(char)arg1 ;
-(void)_defferedHandleBoundsOrFrameChanged;
-(void)setMoreContentDown:(char)arg1 ;
-(void)setMoreContentUp:(char)arg1 ;
-(void)setMoreContentRight:(char)arg1 ;
-(void)setMoreContentLeft:(char)arg1 ;
-(char)showsPocketOnBottom;
-(char)moreContentDown;
-(void)animatePocket:(id)arg1 in:(char)arg2 ;
-(char)showsPocketOnTop;
-(char)moreContentUp;
-(char)showsPocketOnRight;
-(char)moreContentRight;
-(char)showsPocketOnLeft;
-(char)moreContentLeft;
-(void)setPocket:(id)arg1 toState:(char)arg2 ;
-(void)animateScrollToPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tile;
-(void)viewDidMoveToWindow;
-(void)awakeFromNib;
@end

