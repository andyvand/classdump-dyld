/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSView.h>

@class NSVisualEffectView, NSStackView, NSImageView, NSTextField, NSImage, NSString, NSTimer;

@interface AVStatusOverlayView : NSView {

	NSVisualEffectView* _backgroundView;
	NSStackView* _stackView;
	NSImageView* _imageView;
	NSTextField* _textField;
	NSImage* _persistentImage;
	NSString* _persistentString;
	NSTimer* _transientTimeoutTimer;

}
-(void)setPersistentImage:(id)arg1 string:(id)arg2 ;
-(void)clearPersistentImageAndString;
-(void)setTransientImage:(id)arg1 string:(id)arg2 ;
-(id)_validateString:(id)arg1 ;
-(void)clearTransientImageAndString;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)hitTest:(CGPoint)arg1 ;
@end

