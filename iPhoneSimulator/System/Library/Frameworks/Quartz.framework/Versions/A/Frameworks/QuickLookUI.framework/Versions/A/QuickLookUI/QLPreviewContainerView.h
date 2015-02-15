/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <AppKit/NSView.h>

@class QLPreviewView;

@interface QLPreviewContainerView : NSView {

	QLPreviewView* _previewView;
	char _updatePreviewSize;

}

@property (assign) QLPreviewView * previewView;              //@synthesize previewView=_previewView - In the implementation block
@property (assign) char updatePreviewSize;                   //@synthesize updatePreviewSize=_updatePreviewSize - In the implementation block
-(void)setUpdatePreviewSize:(char)arg1 ;
-(void)setPreviewView:(QLPreviewView *)arg1 ;
-(char)updatePreviewSize;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityDescriptionAttribute;
-(id)accessibilityEnabledAttribute;
-(id)accessibilityValueAttribute;
-(id)accessibilityMinValueAttribute;
-(id)accessibilityMaxValueAttribute;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(unsigned)_CAViewFlags;
-(char)_desiredLayerSizeMeritsTiledBackingLayer:(CGSize)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(QLPreviewView *)previewView;
@end

