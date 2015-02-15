/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:55:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Enable or Disable Tracks.action/Contents/MacOS/Enable or Disable Tracks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class NSMutableArray, QTMovie;

@interface EnableOrDisableTracks : AMBundleAction {

	id trackTable;
	NSMutableArray* trackTypes;
	QTMovie* _qtMovie;

}
-(id)processFolder:(id)arg1 returnValues:(id)arg2 ;
-(id)processFile:(id)arg1 returnValues:(id)arg2 ;
-(void)timsAwesomeWorkaround;
-(void)internalInit;
-(id)enableDisable:(id)arg1 pathname:(id)arg2 ;
-(id)runWithInput:(id)arg1 fromAction:(id)arg2 error:(id*)arg3 ;
-(void)writeToDictionary:(id)arg1 ;
-(void)updateParameters;
-(void)parametersUpdated;
-(void)opened;
-(id)initWithDefinition:(id)arg1 fromArchive:(char)arg2 ;
-(void)closed;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
@end

