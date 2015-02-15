/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSMenu, NSMenuItem;


@protocol NSMenuTrackingInfo <NSObject>
@property (readonly) NSMenu * menu; 
@property (readonly) NSMenuItem * selectedItem; 
@property (readonly) NSMenuItem * targetedItem; 
@property (readonly) CGRect targetedItemFrame; 
@required
-(NSMenu *)menu;
-(NSMenuItem *)selectedItem;
-(NSMenuItem *)targetedItem;
-(CGRect)targetedItemFrame;

@end

