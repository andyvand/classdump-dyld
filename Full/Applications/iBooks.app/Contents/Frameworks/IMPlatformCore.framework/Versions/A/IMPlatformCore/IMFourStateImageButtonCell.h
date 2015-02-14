/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMPlatformCore.framework/Versions/A/IMPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMPlatformCore/IMPlatformCore-Structs.h>
#import <AppKit/NSButtonCell.h>

@class NSImage;

@interface IMFourStateImageButtonCell : NSButtonCell {

	char _ignoreMouseTransitions;
	char _mouseIsHovering;
	NSImage* _disabledStateImage;
	NSImage* _disabledStateOnImage;
	NSImage* _hoverStateImage;
	NSImage* _hoverStateOnImage;
	NSImage* _pressedStateImage;
	NSImage* _pressedStateOnImage;
	NSImage* _normalStateImage;
	NSImage* _normalStateOnImage;
	long long _imageState;

}

@property (assign) char ignoreMouseTransitions;                           //@synthesize ignoreMouseTransitions=_ignoreMouseTransitions - In the implementation block
@property (assign) char mouseIsHovering;                                  //@synthesize mouseIsHovering=_mouseIsHovering - In the implementation block
@property (assign) long long imageState;                                  //@synthesize imageState=_imageState - In the implementation block
@property (nonatomic,retain) NSImage * disabledStateImage;                //@synthesize disabledStateImage=_disabledStateImage - In the implementation block
@property (nonatomic,retain) NSImage * pressedStateImage;                 //@synthesize pressedStateImage=_pressedStateImage - In the implementation block
@property (nonatomic,retain) NSImage * hoverStateImage;                   //@synthesize hoverStateImage=_hoverStateImage - In the implementation block
@property (nonatomic,retain) NSImage * normalStateImage;                  //@synthesize normalStateImage=_normalStateImage - In the implementation block
@property (nonatomic,retain) NSImage * disabledStateOnImage;              //@synthesize disabledStateOnImage=_disabledStateOnImage - In the implementation block
@property (nonatomic,retain) NSImage * pressedStateOnImage;               //@synthesize pressedStateOnImage=_pressedStateOnImage - In the implementation block
@property (nonatomic,retain) NSImage * hoverStateOnImage;                 //@synthesize hoverStateOnImage=_hoverStateOnImage - In the implementation block
@property (nonatomic,retain) NSImage * normalStateOnImage;                //@synthesize normalStateOnImage=_normalStateOnImage - In the implementation block
+(id)placeholder;
-(void)setImageState:(long long)arg1 ;
-(NSImage *)normalStateOnImage;
-(NSImage *)pressedStateOnImage;
-(void)setAlternateButtonControlImage:(id)arg1 ;
-(void)setButtonControlImage:(id)arg1 ;
-(NSImage *)hoverStateOnImage;
-(NSImage *)disabledStateOnImage;
-(NSImage *)pressedStateImage;
-(NSImage *)normalStateImage;
-(NSImage *)hoverStateImage;
-(NSImage *)disabledStateImage;
-(void)setMouseIsHovering:(char)arg1 ;
-(char)ignoreMouseTransitions;
-(void)setImageForState:(long long)arg1 ;
-(char)mouseIsHovering;
-(void)setDisabledStateImage:(NSImage *)arg1 ;
-(void)setPressedStateImage:(NSImage *)arg1 ;
-(void)setHoverStateImage:(NSImage *)arg1 ;
-(void)setNormalStateImage:(NSImage *)arg1 ;
-(void)setIgnoreMouseTransitions:(char)arg1 ;
-(void)setDisabledStateOnImage:(NSImage *)arg1 ;
-(void)setPressedStateOnImage:(NSImage *)arg1 ;
-(void)setHoverStateOnImage:(NSImage *)arg1 ;
-(void)setNormalStateOnImage:(NSImage *)arg1 ;
-(long long)imageState;
-(void)setState:(long long)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)_updateMouseTracking;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
@end

