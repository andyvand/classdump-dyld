/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FIFinderViewDelegate <NSObject>
@optional
-(char)finderView:(id)arg1 canSelectURL:(id)arg2;
-(char)finderView:(id)arg1 shouldEnableURL:(id)arg2;
-(char)finderView:(id)arg1 shouldEnableURL:(id)arg2 itemIsContainer:(char)arg3 itemIsPackage:(char)arg4;
-(char)finderView:(id)arg1 canSelectURL:(id)arg2 itemIsContainer:(char)arg3 itemIsPackage:(char)arg4;
-(char)finderView:(id)arg1 showAsPackageForURL:(id)arg2;
-(void)finderView:(id)arg1 didChangeToDirectoryURL:(id)arg2;
-(void)finderViewSelectionDidChange:(id)arg1;
-(char)finderViewOpenSelection:(id)arg1;
-(void)finderView:(id)arg1 populationInProgress:(char)arg2;
-(void)finderView:(id)arg1 clickedOnDisabledURL:(id)arg2;
-(id)finderViewRequestRecentPlaces:(id)arg1;
-(void)finderViewViewStyleChanged:(id)arg1;
-(void)finderView:(id)arg1 scopeChanged:(char)arg2;
-(void)finderView:(id)arg1 configureForGotoWithFilename:(id)arg2;
-(char)finderView:(id)arg1 acceptsPreviewPanelControl:(id)arg2;
-(id)finderViewQuerySearchUTIs:(id)arg1;

@end

