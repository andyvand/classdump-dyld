/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSScrollView.h>

@class NSTrackingArea;

@interface BKNoteMarginScrollView : NSScrollView {

	NSTrackingArea* _tskTrackingArea;
	char _wantsOnlyOverlayScrollers;

}

@property (assign,nonatomic) char wantsOnlyOverlayScrollers;              //@synthesize wantsOnlyOverlayScrollers=_wantsOnlyOverlayScrollers - In the implementation block
-(char)wantsOnlyOverlayScrollers;
-(void)pConfigureForLegacyStyle;
-(void)setWantsOnlyOverlayScrollers:(char)arg1 ;
-(void)dealloc;
-(void)setAutohidesScrollers:(char)arg1 ;
-(void)setScrollerStyle:(long long)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)updateTrackingAreas;
@end

