/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSStatusItem.h>

@class NSStatusItem;

@interface NSStatusItemReplicant : NSStatusItem {

	NSStatusItem* parentItem;

}

@property (assign) NSStatusItem * parentItem; 
-(NSStatusItem *)parentItem;
-(void)_adjustLength;
-(unsigned)_statusItemFlags;
-(char)_retargetEvent:(id)arg1 fromWindow:(id)arg2 ;
-(void)setDrawBlock:(/*^block*/id)arg1 ;
-(id)replicantView;
-(id)_initInStatusBar:(id)arg1 withLength:(double)arg2 withPriority:(long long)arg3 hidden:(char)arg4 displayID:(id)arg5 ;
-(char)_shouldReplicate;
-(void)setParentItem:(NSStatusItem *)arg1 ;
@end

