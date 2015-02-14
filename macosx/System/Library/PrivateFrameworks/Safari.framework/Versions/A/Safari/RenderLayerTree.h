/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@protocol NSOutlineViewDataSource;
@class NSOutlineView;

@interface RenderLayerTree : NSWindowController {

	NSOutlineView* outlineView;
	id<NSOutlineViewDataSource> dataSource;
	id _lifetimeExtender;

}

@property (nonatomic,retain) id lifetimeExtender;              //@synthesize lifetimeExtender=_lifetimeExtender - In the implementation block
-(id)initWithWKView:(id)arg1 ;
-(void)setLifetimeExtender:(id)arg1 ;
-(id)lifetimeExtender;
-(void)_createTreeFromWKView:(id)arg1 ;
-(void)dealloc;
-(void)windowWillClose:(id)arg1 ;
@end

