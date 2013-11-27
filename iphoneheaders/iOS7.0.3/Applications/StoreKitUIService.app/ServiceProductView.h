/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:36:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/StoreKitUIService.app/StoreKitUIService
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUIService/StoreKitUIService-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface ServiceProductView : UIView {

	BOOL _adjustsForStatusBar;
	UIView* _containedView;
	CGRect _statusBarFrame;

}

@property (assign,nonatomic) BOOL adjustsForStatusBar;              //@synthesize adjustsForStatusBar=_adjustsForStatusBar - In the implementation block
@property (nonatomic,retain) UIView * containedView;                //@synthesize containedView=_containedView - In the implementation block
@property (assign,nonatomic) CGRect statusBarFrame;                 //@synthesize statusBarFrame=_statusBarFrame - In the implementation block
-(void)setAdjustsForStatusBar:(BOOL)arg1 ;
-(void)setContainedView:(id)arg1 ;
-(BOOL)adjustsForStatusBar;
-(void)setStatusBarFrame:(CGRect)arg1 ;
-(id)containedView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGRect)statusBarFrame;
@end
