/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PassKit.framework/Versions/A/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSScrollView.h>

@class PKPassViewController;

@interface PKPassScrollView : NSScrollView {

	char _scrollEnabled;
	char _disregardFurtherScrolling;
	char _inMomentumScrolling;
	PKPassViewController* _selectedViewController;

}

@property (assign) char scrollEnabled;                                         //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (assign) char disregardFurtherScrolling;                             //@synthesize disregardFurtherScrolling=_disregardFurtherScrolling - In the implementation block
@property (readonly) char inMomentumScrolling;                                 //@synthesize inMomentumScrolling=_inMomentumScrolling - In the implementation block
@property (retain) PKPassViewController * selectedViewController;              //@synthesize selectedViewController=_selectedViewController - In the implementation block
-(void)setDisregardFurtherScrolling:(char)arg1 ;
-(char)scrollEnabled;
-(char)disregardFurtherScrolling;
-(char)inMomentumScrolling;
-(void)setScrollEnabled:(char)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(PKPassViewController *)selectedViewController;
-(void)setSelectedViewController:(PKPassViewController *)arg1 ;
@end

