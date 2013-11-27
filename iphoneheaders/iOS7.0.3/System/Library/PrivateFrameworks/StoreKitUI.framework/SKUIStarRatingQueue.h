/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SKUIClientContext, NSOperationQueue, UIWindow;

@interface SKUIStarRatingQueue : NSObject {

	SKUIClientContext* _clientContext;
	NSOperationQueue* _queue;
	UIWindow* _window;

}

@property (assign,nonatomic,__weak) UIWindow * window;              //@synthesize window=_window - In the implementation block
-(id)window;
-(id)init;
-(void)setWindow:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)setRating:(int)arg1 forItem:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)_setRating:(int)arg1 forItem:(id)arg2 account:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void).cxx_destruct;
@end
