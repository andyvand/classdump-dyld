/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:55:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Create Banner Image from Text.action/Contents/MacOS/Create Banner Image from Text
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class NSPopUpButton, NSColorWell, NSImageView;

@interface AMCreateBannerImageFromTextAction : AMBundleAction {

	NSPopUpButton* fontListPopup;
	NSColorWell* fontColorWell;
	NSImageView* previewImageWell;
	id oldFilename;

}
-(void)uiElementHasChanged:(id)arg1 ;
-(void)populateFontMenu;
-(void)useInputForNameHasChanged:(id)arg1 ;
-(id)dataForStringObject:(id)arg1 ;
-(char)checkForFileAtPath:(id)arg1 error:(id*)arg2 ;
-(id)colorFromParameters;
-(id)bitmapImageRepForString:(id)arg1 ;
-(id)bitmapImageRepForAttributedString:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)updateParameters;
-(void)opened;
-(void)updatePreview;
-(void)closed;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

