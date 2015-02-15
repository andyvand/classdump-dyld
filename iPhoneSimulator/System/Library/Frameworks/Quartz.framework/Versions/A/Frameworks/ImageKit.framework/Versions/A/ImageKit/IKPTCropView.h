/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class NSImage, IKImageCropView, IKPTSlider, NSButton;

@interface IKPTCropView : NSView {

	NSImage* _image;
	IKImageCropView* _cropView;
	IKPTSlider* _slider;
	NSButton* _leftButton;
	NSButton* _rightButton;

}

@property (nonatomic,retain) NSImage * image; 
@property (nonatomic,readonly) NSImage * croppedImage; 
-(void)commonInit;
-(NSImage *)croppedImage;
-(void)maximizeSize:(id)arg1 ;
-(void)minimizeSize:(id)arg1 ;
-(void)zoomSliderAction:(id)arg1 ;
-(void)moveSliderWithIncrement:(char)arg1 ;
-(void)adjustZoomSliderValue;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
@end

