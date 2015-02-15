/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MMWebViewButtonBarDelegate;
@class NSView, NSButton, NSProgressIndicator, NSTextField, NSDictionary, NSArray;

@interface MMWebViewButtonBar : NSObject {

	NSView* _buttonBarView;
	NSButton* _button1;
	NSButton* _button2;
	NSButton* _button3;
	NSProgressIndicator* _spinner;
	NSTextField* _spinnerTitle;
	NSDictionary* _buttonBarDict;
	id<MMWebViewButtonBarDelegate> _delegate;
	NSArray* _buttonArray;

}

@property (retain) NSDictionary * buttonBarDict;                         //@synthesize buttonBarDict=_buttonBarDict - In the implementation block
@property (assign) id<MMWebViewButtonBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setButtonBarDict:(NSDictionary *)arg1 ;
-(NSDictionary *)buttonBarDict;
-(id)buttonBarView;
-(void)updateButtonBarDict:(id)arg1 ;
-(void)button1Pressed:(id)arg1 ;
-(void)button2Pressed:(id)arg1 ;
-(void)button3Pressed:(id)arg1 ;
-(void)disableButtons;
-(void)disableSpinner;
-(void)updateDefaultButtons;
-(id)initWithDict:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<MMWebViewButtonBarDelegate>)arg1 ;
-(void)dealloc;
-(id<MMWebViewButtonBarDelegate>)delegate;
@end

