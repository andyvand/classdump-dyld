/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSPanel.h>

@class NSArray;

@interface IKImageEditPanel : NSPanel {

	void* _privateData;

}

@property (assign) id<IKImageEditPanelDataSource> dataSource; 
@property (readonly) NSArray * filterArray; 
+(id)sharedImageEditPanel;
+(id)processMetaData:(id)arg1 ;
+(void)locateLongitude:(double)arg1 latitude:(double)arg2 ;
+(char)hasSharedImageEditPanel;
+(id)IKEditPanelLocalizedString:(id)arg1 ;
+(id)IKImageIOLocalizedString:(id)arg1 ;
-(id)dsHandler;
-(NSArray *)filterArray;
-(char)hasAdjustMode;
-(void)setHasAdjustMode:(char)arg1 ;
-(char)hasEffectsMode;
-(void)setHasEffectsMode:(char)arg1 ;
-(char)hasDetailsMode;
-(void)setHasDetailsMode:(char)arg1 ;
-(int)windowbarHeight;
-(int)tabHeight;
-(void)showPanel:(char)arg1 ;
-(void)tabSelectionChanged:(id)arg1 ;
-(void)makeBig;
-(void)adjustDisplayModes:(long long)arg1 ;
-(void)makeSmall;
-(void)finalize;
-(void)dealloc;
-(char)makeFirstResponder:(id)arg1 ;
-(void)makeKeyAndOrderFront:(id)arg1 ;
-(void)reloadData;
-(void)mouseDown:(id)arg1 ;
-(void)setDataSource:(id<IKImageEditPanelDataSource>)arg1 ;
-(char)canBecomeKeyWindow;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(id<IKImageEditPanelDataSource>)dataSource;
-(double)animationResizeTime:(CGRect)arg1 ;
-(void)setImageView:(id)arg1 ;
-(id)imageView;
-(void)setup;
@end

