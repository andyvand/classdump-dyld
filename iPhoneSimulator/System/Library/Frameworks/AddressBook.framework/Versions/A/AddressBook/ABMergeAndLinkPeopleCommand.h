/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABBookUndoableCommand.h>

@protocol ABUndoableCommand;
@class ABAddressBook, ABMergePeopleCommand, ABLinkPeopleCommand, NSArray, ABMergeAndLinkPeopleActionPlanner;

@interface ABMergeAndLinkPeopleCommand : ABBookUndoableCommand {

	ABAddressBook* _addressBook;
	ABMergePeopleCommand* _mergeCommand;
	ABLinkPeopleCommand* _linkCommand;
	id<ABUndoableCommand> _privacyCommand;
	NSArray* _resultingPeople;
	ABMergeAndLinkPeopleActionPlanner* _planner;
	int _plannedActions;

}

@property (readonly) NSArray * resultingPeople;              //@synthesize resultingPeople=_resultingPeople - In the implementation block
@property (readonly) int plannedActions;                     //@synthesize plannedActions=_plannedActions - In the implementation block
-(void)execute;
-(id)initWithPeople:(id)arg1 addressBook:(id)arg2 ;
-(NSArray *)resultingPeople;
-(int)plannedActions;
-(id)menuTitleForPlannedActions:(int)arg1 ;
-(void)executeUndo;
-(id)planner;
-(char)shouldMerge;
-(void)performMerge;
-(void)performLink;
-(void)applyPrivacyFlagsToAllRecords;
-(void)setResultingPeople:(NSArray *)arg1 ;
-(void)undoCommands;
-(void)releaseCommands;
-(void)dealloc;
@end

