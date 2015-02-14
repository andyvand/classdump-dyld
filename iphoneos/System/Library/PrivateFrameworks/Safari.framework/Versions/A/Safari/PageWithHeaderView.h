/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>

@protocol PageWithHeaderViewDelegate;
@class BrowserWKView, NSView, ReaderContainerView;

@interface PageWithHeaderView : NSView {

	char _social;
	BrowserWKView* _browserWKView;
	NSView* _headerBannerView;
	ReaderContainerView* _readerContainerView;
	id<PageWithHeaderViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) BrowserWKView * browserWKView;                          //@synthesize browserWKView=_browserWKView - In the implementation block
@property (assign,nonatomic,__weak) NSView * headerBannerView;                              //@synthesize headerBannerView=_headerBannerView - In the implementation block
@property (assign,nonatomic,__weak) ReaderContainerView * readerContainerView;              //@synthesize readerContainerView=_readerContainerView - In the implementation block
@property (assign,getter=isSocial,nonatomic) char social;                                   //@synthesize social=_social - In the implementation block
@property (assign,nonatomic,__weak) id<PageWithHeaderViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(BrowserWKView *)browserWKView;
-(char)isSocial;
-(ReaderContainerView *)readerContainerView;
-(CGRect)_pageContentFrame;
-(void)setHeaderBannerView:(NSView *)arg1 ;
-(void)setBrowserWKView:(BrowserWKView *)arg1 ;
-(void)setReaderContainerView:(ReaderContainerView *)arg1 ;
-(NSView *)headerBannerView;
-(void)setSocial:(char)arg1 ;
-(void)setDelegate:(id<PageWithHeaderViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PageWithHeaderViewDelegate>)delegate;
@end

