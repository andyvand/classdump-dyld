/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSPanel.h>

@class NSUndoManager;

@interface GFInspectorWindow : NSPanel {

	NSUndoManager* _undoManager;

}
-(void)dealloc;
-(char)validateMenuItem:(id)arg1 ;
-(void)undo:(id)arg1 ;
-(void)redo:(id)arg1 ;
-(id)undoManager;
-(void)setUndoManager:(id)arg1 ;
@end

