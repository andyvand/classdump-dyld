/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSButton.h>

@class NSImage, NSCursor;

@interface ButtonPlus : NSButton {

	char _ignoresFirstMouse;
	char _superviewIsFocusRingClipAncestor;
	unsigned long long _lastMouseDownModifierFlags;
	NSImage* _imageForNonMainWindow;
	NSCursor* _customCursor;

}

@property (nonatomic,readonly) unsigned long long lastMouseDownModifierFlags;              //@synthesize lastMouseDownModifierFlags=_lastMouseDownModifierFlags - In the implementation block
@property (nonatomic,retain) NSImage * imageForNonMainWindow;                              //@synthesize imageForNonMainWindow=_imageForNonMainWindow - In the implementation block
@property (assign,nonatomic) char superviewIsFocusRingClipAncestor;                        //@synthesize superviewIsFocusRingClipAncestor=_superviewIsFocusRingClipAncestor - In the implementation block
@property (nonatomic,retain) NSCursor * customCursor;                                      //@synthesize customCursor=_customCursor - In the implementation block
-(void)setAcceptsFirstMouse:(char)arg1 ;
-(void)setImageForNonMainWindow:(NSImage *)arg1 ;
-(void)enclosingBarWillExpand;
-(void)enclosingBarDidExpand;
-(unsigned long long)lastMouseDownModifierFlags;
-(NSImage *)imageForNonMainWindow;
-(char)superviewIsFocusRingClipAncestor;
-(void)setSuperviewIsFocusRingClipAncestor:(char)arg1 ;
-(NSCursor *)customCursor;
-(void)setCustomCursor:(NSCursor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(id)_focusRingClipAncestor;
-(void)resetCursorRects;
-(void)mouseDown:(id)arg1 ;
@end

