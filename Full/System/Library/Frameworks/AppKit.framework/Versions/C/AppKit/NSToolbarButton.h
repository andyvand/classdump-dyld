/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSButton.h>

@class NSToolbarItem, NSString, NSImage;

@interface NSToolbarButton : NSButton {

	NSToolbarItem* _item;
	SEL _primaryAction;
	SEL _alternateAction;
	NSString* _primaryToolTip;
	NSString* _alternateToolTip;
	NSString* _primaryTitle;
	NSString* _alternateTitle;
	NSImage* _cachedDrawingImage;
	struct {
		unsigned reserved : 32;
	}  _tbbFlags;
	id _toolbarButtonReserved;

}
+(void)initialize;
-(void)dealloc;
-(void)setImagePosition:(unsigned long long)arg1 ;
-(char)sendAction:(SEL)arg1 to:(id)arg2 ;
-(char)sendAction;
-(char)refusesFirstResponder;
-(id)initWithItem:(id)arg1 ;
-(id)_item;
-(void)invalidateCachedDrawingImage;
-(id)cachedDrawingImage;
@end

