/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:31:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/PlugIns/FaceTime.docktileplugin/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/NSDockTilePlugIn.h>
#import <FaceTime/FTDockTileHelperDelegate.h>

@class NSDockTile, NSMenu, FTDockTileHelper, NSString;

@interface FaceTimeDockTilePlugIn : NSObject <NSDockTilePlugIn, FTDockTileHelperDelegate> {

	NSDockTile* _dockTile;
	NSMenu* _menu;
	FTDockTileHelper* _dockTileHelper;

}

@property (nonatomic,retain) FTDockTileHelper * dockTileHelper;              //@synthesize dockTileHelper=_dockTileHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dockMenu;
-(char)isAccountActive;
-(void)updateBadgeWithCount:(unsigned long long)arg1 ;
-(void)setDockTile:(id)arg1 ;
-(void)setDockTileHelper:(FTDockTileHelper *)arg1 ;
-(FTDockTileHelper *)dockTileHelper;
-(id)init;
-(void)dealloc;
@end

