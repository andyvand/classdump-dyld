/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol PUAbstractNavigationBannerDelegate;
@class , UIView;

@interface PUAbstractNavigationBanner : NSObject {

	<PUAbstractNavigationBannerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <PUAbstractNavigationBannerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float height; 
@property (nonatomic,readonly) UIView * view; 
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)view;
-(float)height;
-(void).cxx_destruct;
@end
