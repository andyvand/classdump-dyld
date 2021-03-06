/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/System Image Utility.app/Contents/MacOS/System Image Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSPopUpButton.h>

@class NSArray, NSMutableArray, NSLock, SIUSourcesList;

@interface SourcesPopupButton : NSPopUpButton {

	NSArray* _volumeItems;
	NSMutableArray* _esdItems;
	NSLock* _updateLock;
	SIUSourcesList* _sourcesList;

}

@property (nonatomic,retain) NSArray * volumeItems;                     //@synthesize volumeItems=_volumeItems - In the implementation block
@property (retain) NSMutableArray * esdItems;                           //@synthesize esdItems=_esdItems - In the implementation block
@property (nonatomic,retain) NSLock * updateLock;                       //@synthesize updateLock=_updateLock - In the implementation block
@property (nonatomic,retain) SIUSourcesList * sourcesList;              //@synthesize sourcesList=_sourcesList - In the implementation block
-(void)setVolumeItems:(NSArray *)arg1 ;
-(void)setEsdItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)esdItems;
-(NSArray *)volumeItems;
-(void)sourcesChanged:(id)arg1 ;
-(void)setUpdateLock:(NSLock *)arg1 ;
-(void)setSourcesList:(SIUSourcesList *)arg1 ;
-(SIUSourcesList *)sourcesList;
-(void)addSources:(id)arg1 toMenu:(id)arg2 ;
-(NSLock *)updateLock;
-(void)setHasContent;
-(id)itemMatchingMountPoint:(id)arg1 ;
-(void)buildMenuFromContentSelectingRepresentedObject:(id)arg1 ;
-(void)refreshSources;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
@end

