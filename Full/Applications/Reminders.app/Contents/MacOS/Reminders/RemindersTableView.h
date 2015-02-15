/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:52:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Reminders.app/Contents/MacOS/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <AppKit/NSTableView.h>

@class NSArray;

@interface RemindersTableView : NSTableView {

	char _animating;
	NSArray* _remindersForContextualMenu;
	NSArray* _listsForContextualMenu;

}

@property (assign) char animating;                                    //@synthesize animating=_animating - In the implementation block
@property (retain) NSArray * remindersForContextualMenu;              //@synthesize remindersForContextualMenu=_remindersForContextualMenu - In the implementation block
@property (retain) NSArray * listsForContextualMenu;                  //@synthesize listsForContextualMenu=_listsForContextualMenu - In the implementation block
+(id)gridColor;
-(void)setListsForContextualMenu:(NSArray *)arg1 ;
-(void)setRemindersForContextualMenu:(NSArray *)arg1 ;
-(NSArray *)listsForContextualMenu;
-(NSArray *)remindersForContextualMenu;
-(void)toggleReminderCompletionFromContextualMenu;
-(void)openInspectorFromContextualMenu;
-(void)deleteRemindersFromContextualMenu;
-(void)cutRemindersFromContextualMenu;
-(void)copyRemindersFromContextualMenu;
-(void)moveToList:(id)arg1 ;
-(void)changePriorityFromContextualMenu:(id)arg1 ;
-(void)newReminderView:(id)arg1 ;
-(void)changePriorityOfReminders:(id)arg1 fromMenuItem:(id)arg2 ;
-(void)changePriority:(id)arg1 ;
-(void)newReminderView;
-(id)completedRowView;
-(void)setAnimating:(char)arg1 ;
-(char)animating;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)delegate;
-(id)menu;
-(char)validateMenuItem:(id)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)keyDown:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(CGPoint*)arg4 ;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(char)validateProposedFirstResponder:(id)arg1 forEvent:(id)arg2 ;
-(void)delete:(id)arg1 ;
-(long long)draggingDestinationFeedbackStyle;
-(void)drawGridInClipRect:(CGRect)arg1 ;
@end
