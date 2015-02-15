/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/NSWindowDelegate.h>

@class NSPanel, IKSlideshowDebugItem, NSString;

@interface IKSlideshowDebugger : NSObject <NSWindowDelegate> {

	NSPanel* _debugWindow;
	id* _items;
	IKSlideshowDebugItem* _statusItem;
	unsigned long long _itemCount;
	unsigned long long _currentIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)currentIndex;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(void)stopDebugging;
-(void)setItemCount:(unsigned long long)arg1 ;
-(void)startDebugging:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)windowDidChangeScreen:(id)arg1 ;
-(unsigned long long)itemCount;
-(void)cleanup;
@end

