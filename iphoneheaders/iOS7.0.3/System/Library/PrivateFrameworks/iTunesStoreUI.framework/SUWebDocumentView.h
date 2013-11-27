/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIWebDocumentView.h>

@class NSString;

@interface SUWebDocumentView : UIWebDocumentView {

	id _loadDelegate;
	NSString* _stylesheet;
	unsigned _adjustHeightToFit : 1;

}

@property (assign,nonatomic) id loadDelegate;                    //@synthesize loadDelegate=_loadDelegate - In the implementation block
@property (nonatomic,retain) NSString * stylesheet;              //@synthesize stylesheet=_stylesheet - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(id)stylesheet;
-(void)setStylesheet:(id)arg1 ;
-(void)setPlaintextString:(id)arg1 ;
-(void)setHTMLFragment:(id)arg1 ;
-(id)loadDelegate;
-(void)setLoadDelegate:(id)arg1 ;
@end
