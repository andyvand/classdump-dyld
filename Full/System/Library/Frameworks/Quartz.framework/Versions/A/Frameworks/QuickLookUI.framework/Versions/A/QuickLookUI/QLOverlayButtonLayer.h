/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuickLookUI/QLOverlayBaseButtonLayer.h>

@class CALayer, NSImage;

@interface QLOverlayButtonLayer : QLOverlayBaseButtonLayer {

	CALayer* _imageLayer;
	CGSize _imageOffset;
	NSImage* _image;

}

@property (assign) char enabled; 
@property (retain) id image; 
@property (assign) CGSize imageOffset;              //@synthesize imageOffset=_imageOffset - In the implementation block
-(CGSize)imageOffset;
-(char)enabled;
-(char)_enableClickAtPoint:(CGPoint)arg1 ;
-(void)_beginMouseDownAtPoint:(CGPoint)arg1 ;
-(void)_endMouseDownAtPoint:(CGPoint)arg1 ;
-(void)setImageOffset:(CGSize)arg1 ;
-(id)init;
-(void)setContentsScale:(double)arg1 ;
-(void)dealloc;
-(id)image;
-(void)setImage:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
@end

