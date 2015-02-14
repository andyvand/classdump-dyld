/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSToolbarSpaceItem, NSImage;

@interface _NSToolbarSpace : NSView {

	NSToolbarSpaceItem* _spaceItem;
	char _inPalette;
	NSImage* _configPanelImage;

}

@property (assign) NSToolbarSpaceItem * spaceItem;              //@synthesize spaceItem=_spaceItem - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)updateLayer;
-(char)preservesContentDuringLiveResize;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)_drawsNothing;
-(void)mouseUp:(id)arg1 ;
-(CFStringRef)_currentCoreUIWidget;
-(char)inPalette;
-(id)initWithSize:(CGSize)arg1 forSpaceItem:(id)arg2 ;
-(void)setInPalette:(char)arg1 ;
-(Class)_classToCheckForWantsUpdateLayer;
-(NSToolbarSpaceItem *)spaceItem;
-(void)setSpaceItem:(NSToolbarSpaceItem *)arg1 ;
-(char)_shouldDrawSpace;
-(void)_drawToolbarSpaceInRect:(CGRect)arg1 ;
@end

