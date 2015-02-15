/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSToolbarFlexibleSpaceItem, NSImage;

@interface _NSToolbarFlexibleSpace : NSView {

	NSToolbarFlexibleSpaceItem* _spaceItem;
	char _inPalette;
	NSImage* _configPanelImage;

}

@property (assign) NSToolbarFlexibleSpaceItem * spaceItem;              //@synthesize spaceItem=_spaceItem - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)updateLayer;
-(char)preservesContentDuringLiveResize;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)_drawsNothing;
-(CFStringRef)_currentCoreUIWidget;
-(char)_shouldDrawFlexibleSpaceOutline;
-(void)_drawToolbarFlexibleSpaceInRect:(CGRect)arg1 ;
-(char)inPalette;
-(id)initWithSize:(CGSize)arg1 forSpaceItem:(id)arg2 ;
-(void)setInPalette:(char)arg1 ;
-(Class)_classToCheckForWantsUpdateLayer;
-(NSToolbarFlexibleSpaceItem *)spaceItem;
-(void)setSpaceItem:(NSToolbarFlexibleSpaceItem *)arg1 ;
@end
