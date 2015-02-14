/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface _NSScreenSharedInfo : NSObject {

	char _dockIsHidden;
	CGRect _dockRect;
	int _dockOrientation;
	double _menuBarHeight;

}

@property (readonly) CGRect dockRect; 
@property (readonly) int dockOrientation;               //@synthesize dockOrientation=_dockOrientation - In the implementation block
@property (readonly) double menuBarHeight;              //@synthesize menuBarHeight=_menuBarHeight - In the implementation block
-(id)init;
-(double)menuBarHeight;
-(void)_resetDockRect;
-(CGRect)dockRect;
-(void)_resetDockOrientationWithDockScreenLayoutRect:(CGRect)arg1 ;
-(void)_resetMenuBarHeight;
-(int)dockOrientation;
@end

