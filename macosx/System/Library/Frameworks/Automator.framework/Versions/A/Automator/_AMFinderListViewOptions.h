/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class _AMFinderColumn;

@interface _AMFinderListViewOptions : SBObject

@property (assign) char calculatesFolderSizes; 
@property (assign) char showsIconPreview; 
@property (assign) int iconSize; 
@property (assign) long long textSize; 
@property (copy) _AMFinderColumn * sortColumn; 
@property (assign) char usesRelativeDates; 
-(id)delete;
-(void)emptySecurity:(char)arg1 ;
-(void)openUsing:(id)arg1 withProperties:(id)arg2 ;
-(void)printWithProperties:(id)arg1 ;
-(long long)dataSizeAs:(id)arg1 ;
-(id)duplicateTo:(id)arg1 replacing:(char)arg2 routingSuppressed:(char)arg3 ;
-(id)moveTo:(id)arg1 replacing:(char)arg2 positionedAt:(id)arg3 routingSuppressed:(char)arg4 ;
-(void)updateNecessity:(char)arg1 registeringApplications:(char)arg2 ;
-(char)showsIconPreview;
-(void)setShowsIconPreview:(char)arg1 ;
-(char)calculatesFolderSizes;
-(void)setCalculatesFolderSizes:(char)arg1 ;
-(_AMFinderColumn *)sortColumn;
-(void)setSortColumn:(_AMFinderColumn *)arg1 ;
-(char)usesRelativeDates;
-(void)setUsesRelativeDates:(char)arg1 ;
-(void)reveal;
-(long long)textSize;
-(void)select;
-(char)exists;
-(void)setTextSize:(long long)arg1 ;
-(id)columns;
-(void)activate;
-(void)close;
-(int)iconSize;
-(void)eject;
-(void)setIconSize:(int)arg1 ;
-(void)erase;
@end

