/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSScrollView.h>

@class CalFreeBusyPanel;

@interface FBOverlayScrollView : NSScrollView {

	CalFreeBusyPanel* _fbPanel;

}

@property (retain) CalFreeBusyPanel * fbPanel;              //@synthesize fbPanel=_fbPanel - In the implementation block
-(void)setFbPanel:(CalFreeBusyPanel *)arg1 ;
-(CalFreeBusyPanel *)fbPanel;
-(char)isOpaque;
-(void)_setHorizontalScrollerHidden:(char)arg1 ;
@end

