/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/QuickTime Player.app/Contents/PlugIns/QuickTime Player Dock Tile PlugIn.docktileplugin/Contents/MacOS/QuickTime Player Dock Tile PlugIn
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickTime Player Dock Tile PlugIn/NSDockTilePlugIn.h>

@class NSDockTile, NSMenu, NSString;

@interface MGDockTilePlugIn : NSObject <NSDockTilePlugIn> {

	NSDockTile* _dockTile;
	NSMenu* _baseDockMenu;

}

@property (retain) NSDockTile * dockTile;                           //@synthesize dockTile=_dockTile - In the implementation block
@property (readonly) NSMenu * baseDockMenu;                         //@synthesize baseDockMenu=_baseDockMenu - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)newMovieRecordingDocument:(id)arg1 ;
-(void)newAudioRecordingDocument:(id)arg1 ;
-(void)newScreenRecordingDocument:(id)arg1 ;
-(void)setDockTile:(NSDockTile *)arg1 ;
-(NSMenu *)baseDockMenu;
-(id)dockMenu;
-(id)quickTimePlayerApplication;
-(NSDockTile *)dockTile;
@end
