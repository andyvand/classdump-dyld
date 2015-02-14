/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/IKPictureTakerInterface.h>

@class NSView, NSButton, NSSlider, NSTabView, NSBox;

@interface IKPictureTakerNibInterface : NSObject <IKPictureTakerInterface> {

	NSView* _layerSuperview;
	id _imageView;
	id _countdownView;
	NSButton* _chooseButton;
	NSButton* _setButton;
	NSButton* _cancelButton;
	NSSlider* _slider;
	NSButton* _smallerButton;
	NSButton* _largerButton;
	NSButton* _cameraButton;
	NSButton* _fxButton;
	NSTabView* _countdownTabView;
	NSView* _pictureTakerViewBox;
	NSBox* _verticalSeparator;
	id _delegate;

}
-(id)setButton;
-(id)chooseButton;
-(id)cameraButton;
-(id)slider;
-(id)smallerButton;
-(id)largerButton;
-(id)fxButton;
-(id)layerSuperview;
-(void)setMode:(long long)arg1 options:(id)arg2 ;
-(id)countdownTabView;
-(id)countdownView;
-(id)pictureTaker;
-(id)pictureTakerViewBox;
-(void)setFxButtonsAreaInPanel:(id)arg1 collapsed:(char)arg2 ;
-(id)pictureTakerForRecentPicturesButton:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)awakeFromNib;
-(id)cancelButton;
-(id)imageView;
@end

