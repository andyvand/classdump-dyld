/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSView, NSString;

@interface NSDockTile : NSObject {

	id _owner;
	void* _dockContextRef;
	NSView* _contentView;
	NSView* _frameView;
	NSView* _backstopView;
	NSString* _badgeLabel;
	SCD_Struct_NS19 _dFlags;
	CGSize _dockTileSize;
	id _miniViewController;
	id reserved[4];

}

@property (retain) NSView * miniView; 
@property (readonly) CGSize size; 
@property (retain) NSView * contentView; 
@property (assign) char showsApplicationBadge; 
@property (copy) NSString * badgeLabel; 
@property (readonly) id owner; 
-(void)finalize;
-(void)dealloc;
-(NSView *)contentView;
-(CGSize)size;
-(void)_dockIsAlive:(char)arg1 ;
-(id)_backstopView;
-(void)setContentView:(NSView *)arg1 ;
-(void)display;
-(id)initWithOwner:(id)arg1 ;
-(id)owner;
-(char)showsApplicationBadge;
-(void)_updateDockWindowIDAndDisplayIfNeeded:(char)arg1 ;
-(void)_setMiniViewShown:(char)arg1 ;
-(void)invalidateOwner;
-(char)_hasCustomContent;
-(void)_registerForDockScaleChangeNotification;
-(void)_dockTileScaleFactorChanged:(id)arg1 ;
-(void)_releaseDockContext;
-(void)_unregisterForDockScaleChangeNotification;
-(char)_getDockContext:(CGContext*)arg1 andSize:(CGSize*)arg2 ;
-(void)_createFrameViewIfNeeded;
-(char)_releaseContextIfEmpty;
-(void)_reenableAppNap:(id)arg1 ;
-(char)_needsTigerDockContextBehavior;
-(void)_temporarilyDisableAppNap;
-(id)_tileImage;
-(void)_setMiniView:(long long)arg1 contextid:(unsigned)arg2 ;
-(CGSize)_getSizeFromDock;
-(void)setShowsApplicationBadge:(char)arg1 ;
-(void)setBadgeLabel:(NSString *)arg1 ;
-(NSString *)badgeLabel;
-(void)frameChanged:(id)arg1 ;
-(void)_miniViewResized;
-(NSView *)miniView;
-(void)setMiniView:(NSView *)arg1 ;
-(void)_setMiniViewWindowLevel:(long long)arg1 ;
@end

