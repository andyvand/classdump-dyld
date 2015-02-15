/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/THWPRep.h>
#import <iBAReaderKit/TSKChangeSourceObserver.h>

@class NSString;

@interface THBodyRep : THWPRep <TSKChangeSourceObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)hitRepChrome:(CGPoint)arg1 ;
-(void)processChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(id)repForCharIndex:(unsigned long long)arg1 isStart:(char)arg2 ;
-(id)marginNotesOwner;
-(id)marginNotesController;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(id)hitReps:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(void)updateFromLayout;
-(void)setupMarginNotesControllerForHighlightController:(id)arg1 ;
-(void)addMarginNoteLayersToArray:(id)arg1 ;
-(char)p_doesRep:(id)arg1 containCharIndex:(unsigned long long)arg2 isStart:(char)arg3 ;
-(id)hitRep:(CGPoint)arg1 ;
-(void)willBeRemoved;
-(id)storage;
-(id)siblings;
-(void)dealloc;
@end
