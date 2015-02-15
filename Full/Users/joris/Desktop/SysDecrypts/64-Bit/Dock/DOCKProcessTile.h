/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Dock/Dock-Structs.h>
#import <Dock/Tile.h>
#import <Dock/DOCKExtraDelegate.h>

@protocol DockExtra;
@class DOCKRecentsController, NSString;

@interface DOCKProcessTile : Tile <DOCKExtraDelegate> {

	CPSProcessSerNum _psn;
	id<DockExtra> _dockExtra;
	DOCKRecentsController* _recentsController;
	NSString* _bundleIdentifier;

}

@property (nonatomic,retain) id<DockExtra> dockExtra;               //@synthesize dockExtra=_dockExtra - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scaleFactorChanged;
-(CPSProcessSerNum*)psn;
-(char)doAction:(unsigned)arg1 fromKeyboard:(char)arg2 ;
-(OpaqueMenuRefRef)createMenu:(/*function pointer*/void*)arg1 options:(int)arg2 ;
-(id)recentsController;
-(CFArrayRef)axCopyAttributeNames;
-(char)supportsExpose;
-(char)hasIndicator;
-(void)setPSN:(CPSProcessSerNum)arg1 ;
-(void)dragEnter:(OpaqueCoreDrag*)arg1 ;
-(void)dragLeave:(OpaqueCoreDrag*)arg1 ;
-(void)dragTracking:(OpaqueCoreDrag*)arg1 ;
-(char)dragDrop:(OpaqueCoreDrag*)arg1 ;
-(int)axCopyAttributeValue:(CFStringRef)arg1 value:(const void*)arg2 ;
-(void)dockExtraSetBadgeLabel:(id)arg1 withContext:(id)arg2 ;
-(void)dockExtraSetCustomIconImage:(id)arg1 withContext:(id)arg2 ;
-(id)initWithTile:(id)arg1 psn:(CPSProcessSerNum)arg2 ;
-(id<DockExtra>)dockExtra;
-(void)setDockExtra:(id<DockExtra>)arg1 ;
-(id)initWithPSN:(CPSProcessSerNum)arg1 fsref:(const FSRef*)arg2 alias:(AliasRecord*)arg3 name:(id)arg4 useProcessName:(char)arg5 ;
-(void)doCommand:(unsigned)arg1 ;
-(void)dealloc;
-(void)render;
-(id)bundleIdentifier;
-(char)isRemovable;
@end
