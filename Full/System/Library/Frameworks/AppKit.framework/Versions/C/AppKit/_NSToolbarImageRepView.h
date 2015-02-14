/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSArray, NSImageRep;

@interface _NSToolbarImageRepView : NSView {

	NSArray* _itemIdentifiers;
	NSImageRep* _activeImageRep;
	NSImageRep* _inactiveImageRep;
	CGSize logicalImageSize;

}

@property (assign,nonatomic) CGSize logicalImageSize; 
-(void)dealloc;
-(char)accessibilityIsIgnored;
-(CGSize)intrinsicContentSize;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(id)accessibilityActionNames;
-(id)accessibilityDescriptionAttribute;
-(char)accessibilityIsDescriptionAttributeSettable;
-(id)accessibilityEnabledAttribute;
-(char)accessibilityIsEnabledAttributeSettable;
-(void)sizeToFit;
-(char)isOpaque;
-(void)_windowChangedKeyState;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)_computeDragImage;
-(char)_isPaletteView;
-(CGSize)logicalImageSize;
-(void)setLogicalImageSize:(CGSize)arg1 ;
-(void)setActiveImageRep:(id)arg1 inactiveImageRep:(id)arg2 forItemIdentifiers:(id)arg3 ;
-(void)sizeWidthToFit;
-(void)sizeHeightToFit;
-(CGSize)sizeWhenSizedToFit;
-(id)_validDestinationForDragsWeInitiate;
-(id)_activeImageRep;
-(id)_inactiveImageRep;
-(id)_itemIdentifiers;
@end

