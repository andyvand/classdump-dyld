/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:21:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Add Photos to Album.action/Contents/MacOS/Add Photos to Album
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class NSProgressIndicator, NSPopUpButton;

@interface AMAddPhotosToAlbumAction : AMBundleAction {

	NSProgressIndicator* spinner;
	NSPopUpButton* existingAlbumPopUp;

}
-(id)runWithInput:(id)arg1 fromAction:(id)arg2 error:(id*)arg3 ;
-(void)awakeFromNib;
@end
